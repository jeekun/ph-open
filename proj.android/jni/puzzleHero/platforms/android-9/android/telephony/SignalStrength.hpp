/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.telephony.SignalStrength
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TELEPHONY_SIGNALSTRENGTH_HPP_DECL
#define J2CPP_ANDROID_TELEPHONY_SIGNALSTRENGTH_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }


#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace telephony {

	class SignalStrength;
	class SignalStrength
		: public object<SignalStrength>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)

		explicit SignalStrength(jobject jobj)
		: object<SignalStrength>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::os::Parcelable>() const;


		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);
		jint describeContents();
		jint getGsmSignalStrength();
		jint getGsmBitErrorRate();
		jint getCdmaDbm();
		jint getCdmaEcio();
		jint getEvdoDbm();
		jint getEvdoEcio();
		jint getEvdoSnr();
		jboolean isGsm();
		jint hashCode();
		jboolean equals(local_ref< java::lang::Object >  const&);
		local_ref< java::lang::String > toString();
	}; //class SignalStrength

} //namespace telephony
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TELEPHONY_SIGNALSTRENGTH_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TELEPHONY_SIGNALSTRENGTH_HPP_IMPL
#define J2CPP_ANDROID_TELEPHONY_SIGNALSTRENGTH_HPP_IMPL

namespace j2cpp {



android::telephony::SignalStrength::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::telephony::SignalStrength::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jobject());
}


void android::telephony::SignalStrength::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::telephony::SignalStrength::J2CPP_CLASS_NAME,
		android::telephony::SignalStrength::J2CPP_METHOD_NAME(1),
		android::telephony::SignalStrength::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0, a1);
}

jint android::telephony::SignalStrength::describeContents()
{
	return call_method<
		android::telephony::SignalStrength::J2CPP_CLASS_NAME,
		android::telephony::SignalStrength::J2CPP_METHOD_NAME(2),
		android::telephony::SignalStrength::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject());
}

jint android::telephony::SignalStrength::getGsmSignalStrength()
{
	return call_method<
		android::telephony::SignalStrength::J2CPP_CLASS_NAME,
		android::telephony::SignalStrength::J2CPP_METHOD_NAME(3),
		android::telephony::SignalStrength::J2CPP_METHOD_SIGNATURE(3), 
		jint
	>(get_jobject());
}

jint android::telephony::SignalStrength::getGsmBitErrorRate()
{
	return call_method<
		android::telephony::SignalStrength::J2CPP_CLASS_NAME,
		android::telephony::SignalStrength::J2CPP_METHOD_NAME(4),
		android::telephony::SignalStrength::J2CPP_METHOD_SIGNATURE(4), 
		jint
	>(get_jobject());
}

jint android::telephony::SignalStrength::getCdmaDbm()
{
	return call_method<
		android::telephony::SignalStrength::J2CPP_CLASS_NAME,
		android::telephony::SignalStrength::J2CPP_METHOD_NAME(5),
		android::telephony::SignalStrength::J2CPP_METHOD_SIGNATURE(5), 
		jint
	>(get_jobject());
}

jint android::telephony::SignalStrength::getCdmaEcio()
{
	return call_method<
		android::telephony::SignalStrength::J2CPP_CLASS_NAME,
		android::telephony::SignalStrength::J2CPP_METHOD_NAME(6),
		android::telephony::SignalStrength::J2CPP_METHOD_SIGNATURE(6), 
		jint
	>(get_jobject());
}

jint android::telephony::SignalStrength::getEvdoDbm()
{
	return call_method<
		android::telephony::SignalStrength::J2CPP_CLASS_NAME,
		android::telephony::SignalStrength::J2CPP_METHOD_NAME(7),
		android::telephony::SignalStrength::J2CPP_METHOD_SIGNATURE(7), 
		jint
	>(get_jobject());
}

jint android::telephony::SignalStrength::getEvdoEcio()
{
	return call_method<
		android::telephony::SignalStrength::J2CPP_CLASS_NAME,
		android::telephony::SignalStrength::J2CPP_METHOD_NAME(8),
		android::telephony::SignalStrength::J2CPP_METHOD_SIGNATURE(8), 
		jint
	>(get_jobject());
}

jint android::telephony::SignalStrength::getEvdoSnr()
{
	return call_method<
		android::telephony::SignalStrength::J2CPP_CLASS_NAME,
		android::telephony::SignalStrength::J2CPP_METHOD_NAME(9),
		android::telephony::SignalStrength::J2CPP_METHOD_SIGNATURE(9), 
		jint
	>(get_jobject());
}

jboolean android::telephony::SignalStrength::isGsm()
{
	return call_method<
		android::telephony::SignalStrength::J2CPP_CLASS_NAME,
		android::telephony::SignalStrength::J2CPP_METHOD_NAME(10),
		android::telephony::SignalStrength::J2CPP_METHOD_SIGNATURE(10), 
		jboolean
	>(get_jobject());
}

jint android::telephony::SignalStrength::hashCode()
{
	return call_method<
		android::telephony::SignalStrength::J2CPP_CLASS_NAME,
		android::telephony::SignalStrength::J2CPP_METHOD_NAME(11),
		android::telephony::SignalStrength::J2CPP_METHOD_SIGNATURE(11), 
		jint
	>(get_jobject());
}

jboolean android::telephony::SignalStrength::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		android::telephony::SignalStrength::J2CPP_CLASS_NAME,
		android::telephony::SignalStrength::J2CPP_METHOD_NAME(12),
		android::telephony::SignalStrength::J2CPP_METHOD_SIGNATURE(12), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< java::lang::String > android::telephony::SignalStrength::toString()
{
	return call_method<
		android::telephony::SignalStrength::J2CPP_CLASS_NAME,
		android::telephony::SignalStrength::J2CPP_METHOD_NAME(13),
		android::telephony::SignalStrength::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::lang::String >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::telephony::SignalStrength,"android/telephony/SignalStrength")
J2CPP_DEFINE_METHOD(android::telephony::SignalStrength,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::telephony::SignalStrength,1,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::telephony::SignalStrength,2,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::telephony::SignalStrength,3,"getGsmSignalStrength","()I")
J2CPP_DEFINE_METHOD(android::telephony::SignalStrength,4,"getGsmBitErrorRate","()I")
J2CPP_DEFINE_METHOD(android::telephony::SignalStrength,5,"getCdmaDbm","()I")
J2CPP_DEFINE_METHOD(android::telephony::SignalStrength,6,"getCdmaEcio","()I")
J2CPP_DEFINE_METHOD(android::telephony::SignalStrength,7,"getEvdoDbm","()I")
J2CPP_DEFINE_METHOD(android::telephony::SignalStrength,8,"getEvdoEcio","()I")
J2CPP_DEFINE_METHOD(android::telephony::SignalStrength,9,"getEvdoSnr","()I")
J2CPP_DEFINE_METHOD(android::telephony::SignalStrength,10,"isGsm","()Z")
J2CPP_DEFINE_METHOD(android::telephony::SignalStrength,11,"hashCode","()I")
J2CPP_DEFINE_METHOD(android::telephony::SignalStrength,12,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(android::telephony::SignalStrength,13,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TELEPHONY_SIGNALSTRENGTH_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION