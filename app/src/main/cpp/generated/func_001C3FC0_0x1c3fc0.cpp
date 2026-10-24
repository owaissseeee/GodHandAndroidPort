#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_001C3FC0
// Address: 0x1c3fc0 - 0x1c5f40
void func_001C3FC0_0x1c3fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001C3FC0_0x1c3fc0");
#endif

    switch (ctx->pc) {
        case 0x1c3fc0u: goto label_1c3fc0;
        case 0x1c3fc4u: goto label_1c3fc4;
        case 0x1c3fc8u: goto label_1c3fc8;
        case 0x1c3fccu: goto label_1c3fcc;
        case 0x1c3fd0u: goto label_1c3fd0;
        case 0x1c3fd4u: goto label_1c3fd4;
        case 0x1c3fd8u: goto label_1c3fd8;
        case 0x1c3fdcu: goto label_1c3fdc;
        case 0x1c3fe0u: goto label_1c3fe0;
        case 0x1c3fe4u: goto label_1c3fe4;
        case 0x1c3fe8u: goto label_1c3fe8;
        case 0x1c3fecu: goto label_1c3fec;
        case 0x1c3ff0u: goto label_1c3ff0;
        case 0x1c3ff4u: goto label_1c3ff4;
        case 0x1c3ff8u: goto label_1c3ff8;
        case 0x1c3ffcu: goto label_1c3ffc;
        case 0x1c4000u: goto label_1c4000;
        case 0x1c4004u: goto label_1c4004;
        case 0x1c4008u: goto label_1c4008;
        case 0x1c400cu: goto label_1c400c;
        case 0x1c4010u: goto label_1c4010;
        case 0x1c4014u: goto label_1c4014;
        case 0x1c4018u: goto label_1c4018;
        case 0x1c401cu: goto label_1c401c;
        case 0x1c4020u: goto label_1c4020;
        case 0x1c4024u: goto label_1c4024;
        case 0x1c4028u: goto label_1c4028;
        case 0x1c402cu: goto label_1c402c;
        case 0x1c4030u: goto label_1c4030;
        case 0x1c4034u: goto label_1c4034;
        case 0x1c4038u: goto label_1c4038;
        case 0x1c403cu: goto label_1c403c;
        case 0x1c4040u: goto label_1c4040;
        case 0x1c4044u: goto label_1c4044;
        case 0x1c4048u: goto label_1c4048;
        case 0x1c404cu: goto label_1c404c;
        case 0x1c4050u: goto label_1c4050;
        case 0x1c4054u: goto label_1c4054;
        case 0x1c4058u: goto label_1c4058;
        case 0x1c405cu: goto label_1c405c;
        case 0x1c4060u: goto label_1c4060;
        case 0x1c4064u: goto label_1c4064;
        case 0x1c4068u: goto label_1c4068;
        case 0x1c406cu: goto label_1c406c;
        case 0x1c4070u: goto label_1c4070;
        case 0x1c4074u: goto label_1c4074;
        case 0x1c4078u: goto label_1c4078;
        case 0x1c407cu: goto label_1c407c;
        case 0x1c4080u: goto label_1c4080;
        case 0x1c4084u: goto label_1c4084;
        case 0x1c4088u: goto label_1c4088;
        case 0x1c408cu: goto label_1c408c;
        case 0x1c4090u: goto label_1c4090;
        case 0x1c4094u: goto label_1c4094;
        case 0x1c4098u: goto label_1c4098;
        case 0x1c409cu: goto label_1c409c;
        case 0x1c40a0u: goto label_1c40a0;
        case 0x1c40a4u: goto label_1c40a4;
        case 0x1c40a8u: goto label_1c40a8;
        case 0x1c40acu: goto label_1c40ac;
        case 0x1c40b0u: goto label_1c40b0;
        case 0x1c40b4u: goto label_1c40b4;
        case 0x1c40b8u: goto label_1c40b8;
        case 0x1c40bcu: goto label_1c40bc;
        case 0x1c40c0u: goto label_1c40c0;
        case 0x1c40c4u: goto label_1c40c4;
        case 0x1c40c8u: goto label_1c40c8;
        case 0x1c40ccu: goto label_1c40cc;
        case 0x1c40d0u: goto label_1c40d0;
        case 0x1c40d4u: goto label_1c40d4;
        case 0x1c40d8u: goto label_1c40d8;
        case 0x1c40dcu: goto label_1c40dc;
        case 0x1c40e0u: goto label_1c40e0;
        case 0x1c40e4u: goto label_1c40e4;
        case 0x1c40e8u: goto label_1c40e8;
        case 0x1c40ecu: goto label_1c40ec;
        case 0x1c40f0u: goto label_1c40f0;
        case 0x1c40f4u: goto label_1c40f4;
        case 0x1c40f8u: goto label_1c40f8;
        case 0x1c40fcu: goto label_1c40fc;
        case 0x1c4100u: goto label_1c4100;
        case 0x1c4104u: goto label_1c4104;
        case 0x1c4108u: goto label_1c4108;
        case 0x1c410cu: goto label_1c410c;
        case 0x1c4110u: goto label_1c4110;
        case 0x1c4114u: goto label_1c4114;
        case 0x1c4118u: goto label_1c4118;
        case 0x1c411cu: goto label_1c411c;
        case 0x1c4120u: goto label_1c4120;
        case 0x1c4124u: goto label_1c4124;
        case 0x1c4128u: goto label_1c4128;
        case 0x1c412cu: goto label_1c412c;
        case 0x1c4130u: goto label_1c4130;
        case 0x1c4134u: goto label_1c4134;
        case 0x1c4138u: goto label_1c4138;
        case 0x1c413cu: goto label_1c413c;
        case 0x1c4140u: goto label_1c4140;
        case 0x1c4144u: goto label_1c4144;
        case 0x1c4148u: goto label_1c4148;
        case 0x1c414cu: goto label_1c414c;
        case 0x1c4150u: goto label_1c4150;
        case 0x1c4154u: goto label_1c4154;
        case 0x1c4158u: goto label_1c4158;
        case 0x1c415cu: goto label_1c415c;
        case 0x1c4160u: goto label_1c4160;
        case 0x1c4164u: goto label_1c4164;
        case 0x1c4168u: goto label_1c4168;
        case 0x1c416cu: goto label_1c416c;
        case 0x1c4170u: goto label_1c4170;
        case 0x1c4174u: goto label_1c4174;
        case 0x1c4178u: goto label_1c4178;
        case 0x1c417cu: goto label_1c417c;
        case 0x1c4180u: goto label_1c4180;
        case 0x1c4184u: goto label_1c4184;
        case 0x1c4188u: goto label_1c4188;
        case 0x1c418cu: goto label_1c418c;
        case 0x1c4190u: goto label_1c4190;
        case 0x1c4194u: goto label_1c4194;
        case 0x1c4198u: goto label_1c4198;
        case 0x1c419cu: goto label_1c419c;
        case 0x1c41a0u: goto label_1c41a0;
        case 0x1c41a4u: goto label_1c41a4;
        case 0x1c41a8u: goto label_1c41a8;
        case 0x1c41acu: goto label_1c41ac;
        case 0x1c41b0u: goto label_1c41b0;
        case 0x1c41b4u: goto label_1c41b4;
        case 0x1c41b8u: goto label_1c41b8;
        case 0x1c41bcu: goto label_1c41bc;
        case 0x1c41c0u: goto label_1c41c0;
        case 0x1c41c4u: goto label_1c41c4;
        case 0x1c41c8u: goto label_1c41c8;
        case 0x1c41ccu: goto label_1c41cc;
        case 0x1c41d0u: goto label_1c41d0;
        case 0x1c41d4u: goto label_1c41d4;
        case 0x1c41d8u: goto label_1c41d8;
        case 0x1c41dcu: goto label_1c41dc;
        case 0x1c41e0u: goto label_1c41e0;
        case 0x1c41e4u: goto label_1c41e4;
        case 0x1c41e8u: goto label_1c41e8;
        case 0x1c41ecu: goto label_1c41ec;
        case 0x1c41f0u: goto label_1c41f0;
        case 0x1c41f4u: goto label_1c41f4;
        case 0x1c41f8u: goto label_1c41f8;
        case 0x1c41fcu: goto label_1c41fc;
        case 0x1c4200u: goto label_1c4200;
        case 0x1c4204u: goto label_1c4204;
        case 0x1c4208u: goto label_1c4208;
        case 0x1c420cu: goto label_1c420c;
        case 0x1c4210u: goto label_1c4210;
        case 0x1c4214u: goto label_1c4214;
        case 0x1c4218u: goto label_1c4218;
        case 0x1c421cu: goto label_1c421c;
        case 0x1c4220u: goto label_1c4220;
        case 0x1c4224u: goto label_1c4224;
        case 0x1c4228u: goto label_1c4228;
        case 0x1c422cu: goto label_1c422c;
        case 0x1c4230u: goto label_1c4230;
        case 0x1c4234u: goto label_1c4234;
        case 0x1c4238u: goto label_1c4238;
        case 0x1c423cu: goto label_1c423c;
        case 0x1c4240u: goto label_1c4240;
        case 0x1c4244u: goto label_1c4244;
        case 0x1c4248u: goto label_1c4248;
        case 0x1c424cu: goto label_1c424c;
        case 0x1c4250u: goto label_1c4250;
        case 0x1c4254u: goto label_1c4254;
        case 0x1c4258u: goto label_1c4258;
        case 0x1c425cu: goto label_1c425c;
        case 0x1c4260u: goto label_1c4260;
        case 0x1c4264u: goto label_1c4264;
        case 0x1c4268u: goto label_1c4268;
        case 0x1c426cu: goto label_1c426c;
        case 0x1c4270u: goto label_1c4270;
        case 0x1c4274u: goto label_1c4274;
        case 0x1c4278u: goto label_1c4278;
        case 0x1c427cu: goto label_1c427c;
        case 0x1c4280u: goto label_1c4280;
        case 0x1c4284u: goto label_1c4284;
        case 0x1c4288u: goto label_1c4288;
        case 0x1c428cu: goto label_1c428c;
        case 0x1c4290u: goto label_1c4290;
        case 0x1c4294u: goto label_1c4294;
        case 0x1c4298u: goto label_1c4298;
        case 0x1c429cu: goto label_1c429c;
        case 0x1c42a0u: goto label_1c42a0;
        case 0x1c42a4u: goto label_1c42a4;
        case 0x1c42a8u: goto label_1c42a8;
        case 0x1c42acu: goto label_1c42ac;
        case 0x1c42b0u: goto label_1c42b0;
        case 0x1c42b4u: goto label_1c42b4;
        case 0x1c42b8u: goto label_1c42b8;
        case 0x1c42bcu: goto label_1c42bc;
        case 0x1c42c0u: goto label_1c42c0;
        case 0x1c42c4u: goto label_1c42c4;
        case 0x1c42c8u: goto label_1c42c8;
        case 0x1c42ccu: goto label_1c42cc;
        case 0x1c42d0u: goto label_1c42d0;
        case 0x1c42d4u: goto label_1c42d4;
        case 0x1c42d8u: goto label_1c42d8;
        case 0x1c42dcu: goto label_1c42dc;
        case 0x1c42e0u: goto label_1c42e0;
        case 0x1c42e4u: goto label_1c42e4;
        case 0x1c42e8u: goto label_1c42e8;
        case 0x1c42ecu: goto label_1c42ec;
        case 0x1c42f0u: goto label_1c42f0;
        case 0x1c42f4u: goto label_1c42f4;
        case 0x1c42f8u: goto label_1c42f8;
        case 0x1c42fcu: goto label_1c42fc;
        case 0x1c4300u: goto label_1c4300;
        case 0x1c4304u: goto label_1c4304;
        case 0x1c4308u: goto label_1c4308;
        case 0x1c430cu: goto label_1c430c;
        case 0x1c4310u: goto label_1c4310;
        case 0x1c4314u: goto label_1c4314;
        case 0x1c4318u: goto label_1c4318;
        case 0x1c431cu: goto label_1c431c;
        case 0x1c4320u: goto label_1c4320;
        case 0x1c4324u: goto label_1c4324;
        case 0x1c4328u: goto label_1c4328;
        case 0x1c432cu: goto label_1c432c;
        case 0x1c4330u: goto label_1c4330;
        case 0x1c4334u: goto label_1c4334;
        case 0x1c4338u: goto label_1c4338;
        case 0x1c433cu: goto label_1c433c;
        case 0x1c4340u: goto label_1c4340;
        case 0x1c4344u: goto label_1c4344;
        case 0x1c4348u: goto label_1c4348;
        case 0x1c434cu: goto label_1c434c;
        case 0x1c4350u: goto label_1c4350;
        case 0x1c4354u: goto label_1c4354;
        case 0x1c4358u: goto label_1c4358;
        case 0x1c435cu: goto label_1c435c;
        case 0x1c4360u: goto label_1c4360;
        case 0x1c4364u: goto label_1c4364;
        case 0x1c4368u: goto label_1c4368;
        case 0x1c436cu: goto label_1c436c;
        case 0x1c4370u: goto label_1c4370;
        case 0x1c4374u: goto label_1c4374;
        case 0x1c4378u: goto label_1c4378;
        case 0x1c437cu: goto label_1c437c;
        case 0x1c4380u: goto label_1c4380;
        case 0x1c4384u: goto label_1c4384;
        case 0x1c4388u: goto label_1c4388;
        case 0x1c438cu: goto label_1c438c;
        case 0x1c4390u: goto label_1c4390;
        case 0x1c4394u: goto label_1c4394;
        case 0x1c4398u: goto label_1c4398;
        case 0x1c439cu: goto label_1c439c;
        case 0x1c43a0u: goto label_1c43a0;
        case 0x1c43a4u: goto label_1c43a4;
        case 0x1c43a8u: goto label_1c43a8;
        case 0x1c43acu: goto label_1c43ac;
        case 0x1c43b0u: goto label_1c43b0;
        case 0x1c43b4u: goto label_1c43b4;
        case 0x1c43b8u: goto label_1c43b8;
        case 0x1c43bcu: goto label_1c43bc;
        case 0x1c43c0u: goto label_1c43c0;
        case 0x1c43c4u: goto label_1c43c4;
        case 0x1c43c8u: goto label_1c43c8;
        case 0x1c43ccu: goto label_1c43cc;
        case 0x1c43d0u: goto label_1c43d0;
        case 0x1c43d4u: goto label_1c43d4;
        case 0x1c43d8u: goto label_1c43d8;
        case 0x1c43dcu: goto label_1c43dc;
        case 0x1c43e0u: goto label_1c43e0;
        case 0x1c43e4u: goto label_1c43e4;
        case 0x1c43e8u: goto label_1c43e8;
        case 0x1c43ecu: goto label_1c43ec;
        case 0x1c43f0u: goto label_1c43f0;
        case 0x1c43f4u: goto label_1c43f4;
        case 0x1c43f8u: goto label_1c43f8;
        case 0x1c43fcu: goto label_1c43fc;
        case 0x1c4400u: goto label_1c4400;
        case 0x1c4404u: goto label_1c4404;
        case 0x1c4408u: goto label_1c4408;
        case 0x1c440cu: goto label_1c440c;
        case 0x1c4410u: goto label_1c4410;
        case 0x1c4414u: goto label_1c4414;
        case 0x1c4418u: goto label_1c4418;
        case 0x1c441cu: goto label_1c441c;
        case 0x1c4420u: goto label_1c4420;
        case 0x1c4424u: goto label_1c4424;
        case 0x1c4428u: goto label_1c4428;
        case 0x1c442cu: goto label_1c442c;
        case 0x1c4430u: goto label_1c4430;
        case 0x1c4434u: goto label_1c4434;
        case 0x1c4438u: goto label_1c4438;
        case 0x1c443cu: goto label_1c443c;
        case 0x1c4440u: goto label_1c4440;
        case 0x1c4444u: goto label_1c4444;
        case 0x1c4448u: goto label_1c4448;
        case 0x1c444cu: goto label_1c444c;
        case 0x1c4450u: goto label_1c4450;
        case 0x1c4454u: goto label_1c4454;
        case 0x1c4458u: goto label_1c4458;
        case 0x1c445cu: goto label_1c445c;
        case 0x1c4460u: goto label_1c4460;
        case 0x1c4464u: goto label_1c4464;
        case 0x1c4468u: goto label_1c4468;
        case 0x1c446cu: goto label_1c446c;
        case 0x1c4470u: goto label_1c4470;
        case 0x1c4474u: goto label_1c4474;
        case 0x1c4478u: goto label_1c4478;
        case 0x1c447cu: goto label_1c447c;
        case 0x1c4480u: goto label_1c4480;
        case 0x1c4484u: goto label_1c4484;
        case 0x1c4488u: goto label_1c4488;
        case 0x1c448cu: goto label_1c448c;
        case 0x1c4490u: goto label_1c4490;
        case 0x1c4494u: goto label_1c4494;
        case 0x1c4498u: goto label_1c4498;
        case 0x1c449cu: goto label_1c449c;
        case 0x1c44a0u: goto label_1c44a0;
        case 0x1c44a4u: goto label_1c44a4;
        case 0x1c44a8u: goto label_1c44a8;
        case 0x1c44acu: goto label_1c44ac;
        case 0x1c44b0u: goto label_1c44b0;
        case 0x1c44b4u: goto label_1c44b4;
        case 0x1c44b8u: goto label_1c44b8;
        case 0x1c44bcu: goto label_1c44bc;
        case 0x1c44c0u: goto label_1c44c0;
        case 0x1c44c4u: goto label_1c44c4;
        case 0x1c44c8u: goto label_1c44c8;
        case 0x1c44ccu: goto label_1c44cc;
        case 0x1c44d0u: goto label_1c44d0;
        case 0x1c44d4u: goto label_1c44d4;
        case 0x1c44d8u: goto label_1c44d8;
        case 0x1c44dcu: goto label_1c44dc;
        case 0x1c44e0u: goto label_1c44e0;
        case 0x1c44e4u: goto label_1c44e4;
        case 0x1c44e8u: goto label_1c44e8;
        case 0x1c44ecu: goto label_1c44ec;
        case 0x1c44f0u: goto label_1c44f0;
        case 0x1c44f4u: goto label_1c44f4;
        case 0x1c44f8u: goto label_1c44f8;
        case 0x1c44fcu: goto label_1c44fc;
        case 0x1c4500u: goto label_1c4500;
        case 0x1c4504u: goto label_1c4504;
        case 0x1c4508u: goto label_1c4508;
        case 0x1c450cu: goto label_1c450c;
        case 0x1c4510u: goto label_1c4510;
        case 0x1c4514u: goto label_1c4514;
        case 0x1c4518u: goto label_1c4518;
        case 0x1c451cu: goto label_1c451c;
        case 0x1c4520u: goto label_1c4520;
        case 0x1c4524u: goto label_1c4524;
        case 0x1c4528u: goto label_1c4528;
        case 0x1c452cu: goto label_1c452c;
        case 0x1c4530u: goto label_1c4530;
        case 0x1c4534u: goto label_1c4534;
        case 0x1c4538u: goto label_1c4538;
        case 0x1c453cu: goto label_1c453c;
        case 0x1c4540u: goto label_1c4540;
        case 0x1c4544u: goto label_1c4544;
        case 0x1c4548u: goto label_1c4548;
        case 0x1c454cu: goto label_1c454c;
        case 0x1c4550u: goto label_1c4550;
        case 0x1c4554u: goto label_1c4554;
        case 0x1c4558u: goto label_1c4558;
        case 0x1c455cu: goto label_1c455c;
        case 0x1c4560u: goto label_1c4560;
        case 0x1c4564u: goto label_1c4564;
        case 0x1c4568u: goto label_1c4568;
        case 0x1c456cu: goto label_1c456c;
        case 0x1c4570u: goto label_1c4570;
        case 0x1c4574u: goto label_1c4574;
        case 0x1c4578u: goto label_1c4578;
        case 0x1c457cu: goto label_1c457c;
        case 0x1c4580u: goto label_1c4580;
        case 0x1c4584u: goto label_1c4584;
        case 0x1c4588u: goto label_1c4588;
        case 0x1c458cu: goto label_1c458c;
        case 0x1c4590u: goto label_1c4590;
        case 0x1c4594u: goto label_1c4594;
        case 0x1c4598u: goto label_1c4598;
        case 0x1c459cu: goto label_1c459c;
        case 0x1c45a0u: goto label_1c45a0;
        case 0x1c45a4u: goto label_1c45a4;
        case 0x1c45a8u: goto label_1c45a8;
        case 0x1c45acu: goto label_1c45ac;
        case 0x1c45b0u: goto label_1c45b0;
        case 0x1c45b4u: goto label_1c45b4;
        case 0x1c45b8u: goto label_1c45b8;
        case 0x1c45bcu: goto label_1c45bc;
        case 0x1c45c0u: goto label_1c45c0;
        case 0x1c45c4u: goto label_1c45c4;
        case 0x1c45c8u: goto label_1c45c8;
        case 0x1c45ccu: goto label_1c45cc;
        case 0x1c45d0u: goto label_1c45d0;
        case 0x1c45d4u: goto label_1c45d4;
        case 0x1c45d8u: goto label_1c45d8;
        case 0x1c45dcu: goto label_1c45dc;
        case 0x1c45e0u: goto label_1c45e0;
        case 0x1c45e4u: goto label_1c45e4;
        case 0x1c45e8u: goto label_1c45e8;
        case 0x1c45ecu: goto label_1c45ec;
        case 0x1c45f0u: goto label_1c45f0;
        case 0x1c45f4u: goto label_1c45f4;
        case 0x1c45f8u: goto label_1c45f8;
        case 0x1c45fcu: goto label_1c45fc;
        case 0x1c4600u: goto label_1c4600;
        case 0x1c4604u: goto label_1c4604;
        case 0x1c4608u: goto label_1c4608;
        case 0x1c460cu: goto label_1c460c;
        case 0x1c4610u: goto label_1c4610;
        case 0x1c4614u: goto label_1c4614;
        case 0x1c4618u: goto label_1c4618;
        case 0x1c461cu: goto label_1c461c;
        case 0x1c4620u: goto label_1c4620;
        case 0x1c4624u: goto label_1c4624;
        case 0x1c4628u: goto label_1c4628;
        case 0x1c462cu: goto label_1c462c;
        case 0x1c4630u: goto label_1c4630;
        case 0x1c4634u: goto label_1c4634;
        case 0x1c4638u: goto label_1c4638;
        case 0x1c463cu: goto label_1c463c;
        case 0x1c4640u: goto label_1c4640;
        case 0x1c4644u: goto label_1c4644;
        case 0x1c4648u: goto label_1c4648;
        case 0x1c464cu: goto label_1c464c;
        case 0x1c4650u: goto label_1c4650;
        case 0x1c4654u: goto label_1c4654;
        case 0x1c4658u: goto label_1c4658;
        case 0x1c465cu: goto label_1c465c;
        case 0x1c4660u: goto label_1c4660;
        case 0x1c4664u: goto label_1c4664;
        case 0x1c4668u: goto label_1c4668;
        case 0x1c466cu: goto label_1c466c;
        case 0x1c4670u: goto label_1c4670;
        case 0x1c4674u: goto label_1c4674;
        case 0x1c4678u: goto label_1c4678;
        case 0x1c467cu: goto label_1c467c;
        case 0x1c4680u: goto label_1c4680;
        case 0x1c4684u: goto label_1c4684;
        case 0x1c4688u: goto label_1c4688;
        case 0x1c468cu: goto label_1c468c;
        case 0x1c4690u: goto label_1c4690;
        case 0x1c4694u: goto label_1c4694;
        case 0x1c4698u: goto label_1c4698;
        case 0x1c469cu: goto label_1c469c;
        case 0x1c46a0u: goto label_1c46a0;
        case 0x1c46a4u: goto label_1c46a4;
        case 0x1c46a8u: goto label_1c46a8;
        case 0x1c46acu: goto label_1c46ac;
        case 0x1c46b0u: goto label_1c46b0;
        case 0x1c46b4u: goto label_1c46b4;
        case 0x1c46b8u: goto label_1c46b8;
        case 0x1c46bcu: goto label_1c46bc;
        case 0x1c46c0u: goto label_1c46c0;
        case 0x1c46c4u: goto label_1c46c4;
        case 0x1c46c8u: goto label_1c46c8;
        case 0x1c46ccu: goto label_1c46cc;
        case 0x1c46d0u: goto label_1c46d0;
        case 0x1c46d4u: goto label_1c46d4;
        case 0x1c46d8u: goto label_1c46d8;
        case 0x1c46dcu: goto label_1c46dc;
        case 0x1c46e0u: goto label_1c46e0;
        case 0x1c46e4u: goto label_1c46e4;
        case 0x1c46e8u: goto label_1c46e8;
        case 0x1c46ecu: goto label_1c46ec;
        case 0x1c46f0u: goto label_1c46f0;
        case 0x1c46f4u: goto label_1c46f4;
        case 0x1c46f8u: goto label_1c46f8;
        case 0x1c46fcu: goto label_1c46fc;
        case 0x1c4700u: goto label_1c4700;
        case 0x1c4704u: goto label_1c4704;
        case 0x1c4708u: goto label_1c4708;
        case 0x1c470cu: goto label_1c470c;
        case 0x1c4710u: goto label_1c4710;
        case 0x1c4714u: goto label_1c4714;
        case 0x1c4718u: goto label_1c4718;
        case 0x1c471cu: goto label_1c471c;
        case 0x1c4720u: goto label_1c4720;
        case 0x1c4724u: goto label_1c4724;
        case 0x1c4728u: goto label_1c4728;
        case 0x1c472cu: goto label_1c472c;
        case 0x1c4730u: goto label_1c4730;
        case 0x1c4734u: goto label_1c4734;
        case 0x1c4738u: goto label_1c4738;
        case 0x1c473cu: goto label_1c473c;
        case 0x1c4740u: goto label_1c4740;
        case 0x1c4744u: goto label_1c4744;
        case 0x1c4748u: goto label_1c4748;
        case 0x1c474cu: goto label_1c474c;
        case 0x1c4750u: goto label_1c4750;
        case 0x1c4754u: goto label_1c4754;
        case 0x1c4758u: goto label_1c4758;
        case 0x1c475cu: goto label_1c475c;
        case 0x1c4760u: goto label_1c4760;
        case 0x1c4764u: goto label_1c4764;
        case 0x1c4768u: goto label_1c4768;
        case 0x1c476cu: goto label_1c476c;
        case 0x1c4770u: goto label_1c4770;
        case 0x1c4774u: goto label_1c4774;
        case 0x1c4778u: goto label_1c4778;
        case 0x1c477cu: goto label_1c477c;
        case 0x1c4780u: goto label_1c4780;
        case 0x1c4784u: goto label_1c4784;
        case 0x1c4788u: goto label_1c4788;
        case 0x1c478cu: goto label_1c478c;
        case 0x1c4790u: goto label_1c4790;
        case 0x1c4794u: goto label_1c4794;
        case 0x1c4798u: goto label_1c4798;
        case 0x1c479cu: goto label_1c479c;
        case 0x1c47a0u: goto label_1c47a0;
        case 0x1c47a4u: goto label_1c47a4;
        case 0x1c47a8u: goto label_1c47a8;
        case 0x1c47acu: goto label_1c47ac;
        case 0x1c47b0u: goto label_1c47b0;
        case 0x1c47b4u: goto label_1c47b4;
        case 0x1c47b8u: goto label_1c47b8;
        case 0x1c47bcu: goto label_1c47bc;
        case 0x1c47c0u: goto label_1c47c0;
        case 0x1c47c4u: goto label_1c47c4;
        case 0x1c47c8u: goto label_1c47c8;
        case 0x1c47ccu: goto label_1c47cc;
        case 0x1c47d0u: goto label_1c47d0;
        case 0x1c47d4u: goto label_1c47d4;
        case 0x1c47d8u: goto label_1c47d8;
        case 0x1c47dcu: goto label_1c47dc;
        case 0x1c47e0u: goto label_1c47e0;
        case 0x1c47e4u: goto label_1c47e4;
        case 0x1c47e8u: goto label_1c47e8;
        case 0x1c47ecu: goto label_1c47ec;
        case 0x1c47f0u: goto label_1c47f0;
        case 0x1c47f4u: goto label_1c47f4;
        case 0x1c47f8u: goto label_1c47f8;
        case 0x1c47fcu: goto label_1c47fc;
        case 0x1c4800u: goto label_1c4800;
        case 0x1c4804u: goto label_1c4804;
        case 0x1c4808u: goto label_1c4808;
        case 0x1c480cu: goto label_1c480c;
        case 0x1c4810u: goto label_1c4810;
        case 0x1c4814u: goto label_1c4814;
        case 0x1c4818u: goto label_1c4818;
        case 0x1c481cu: goto label_1c481c;
        case 0x1c4820u: goto label_1c4820;
        case 0x1c4824u: goto label_1c4824;
        case 0x1c4828u: goto label_1c4828;
        case 0x1c482cu: goto label_1c482c;
        case 0x1c4830u: goto label_1c4830;
        case 0x1c4834u: goto label_1c4834;
        case 0x1c4838u: goto label_1c4838;
        case 0x1c483cu: goto label_1c483c;
        case 0x1c4840u: goto label_1c4840;
        case 0x1c4844u: goto label_1c4844;
        case 0x1c4848u: goto label_1c4848;
        case 0x1c484cu: goto label_1c484c;
        case 0x1c4850u: goto label_1c4850;
        case 0x1c4854u: goto label_1c4854;
        case 0x1c4858u: goto label_1c4858;
        case 0x1c485cu: goto label_1c485c;
        case 0x1c4860u: goto label_1c4860;
        case 0x1c4864u: goto label_1c4864;
        case 0x1c4868u: goto label_1c4868;
        case 0x1c486cu: goto label_1c486c;
        case 0x1c4870u: goto label_1c4870;
        case 0x1c4874u: goto label_1c4874;
        case 0x1c4878u: goto label_1c4878;
        case 0x1c487cu: goto label_1c487c;
        case 0x1c4880u: goto label_1c4880;
        case 0x1c4884u: goto label_1c4884;
        case 0x1c4888u: goto label_1c4888;
        case 0x1c488cu: goto label_1c488c;
        case 0x1c4890u: goto label_1c4890;
        case 0x1c4894u: goto label_1c4894;
        case 0x1c4898u: goto label_1c4898;
        case 0x1c489cu: goto label_1c489c;
        case 0x1c48a0u: goto label_1c48a0;
        case 0x1c48a4u: goto label_1c48a4;
        case 0x1c48a8u: goto label_1c48a8;
        case 0x1c48acu: goto label_1c48ac;
        case 0x1c48b0u: goto label_1c48b0;
        case 0x1c48b4u: goto label_1c48b4;
        case 0x1c48b8u: goto label_1c48b8;
        case 0x1c48bcu: goto label_1c48bc;
        case 0x1c48c0u: goto label_1c48c0;
        case 0x1c48c4u: goto label_1c48c4;
        case 0x1c48c8u: goto label_1c48c8;
        case 0x1c48ccu: goto label_1c48cc;
        case 0x1c48d0u: goto label_1c48d0;
        case 0x1c48d4u: goto label_1c48d4;
        case 0x1c48d8u: goto label_1c48d8;
        case 0x1c48dcu: goto label_1c48dc;
        case 0x1c48e0u: goto label_1c48e0;
        case 0x1c48e4u: goto label_1c48e4;
        case 0x1c48e8u: goto label_1c48e8;
        case 0x1c48ecu: goto label_1c48ec;
        case 0x1c48f0u: goto label_1c48f0;
        case 0x1c48f4u: goto label_1c48f4;
        case 0x1c48f8u: goto label_1c48f8;
        case 0x1c48fcu: goto label_1c48fc;
        case 0x1c4900u: goto label_1c4900;
        case 0x1c4904u: goto label_1c4904;
        case 0x1c4908u: goto label_1c4908;
        case 0x1c490cu: goto label_1c490c;
        case 0x1c4910u: goto label_1c4910;
        case 0x1c4914u: goto label_1c4914;
        case 0x1c4918u: goto label_1c4918;
        case 0x1c491cu: goto label_1c491c;
        case 0x1c4920u: goto label_1c4920;
        case 0x1c4924u: goto label_1c4924;
        case 0x1c4928u: goto label_1c4928;
        case 0x1c492cu: goto label_1c492c;
        case 0x1c4930u: goto label_1c4930;
        case 0x1c4934u: goto label_1c4934;
        case 0x1c4938u: goto label_1c4938;
        case 0x1c493cu: goto label_1c493c;
        case 0x1c4940u: goto label_1c4940;
        case 0x1c4944u: goto label_1c4944;
        case 0x1c4948u: goto label_1c4948;
        case 0x1c494cu: goto label_1c494c;
        case 0x1c4950u: goto label_1c4950;
        case 0x1c4954u: goto label_1c4954;
        case 0x1c4958u: goto label_1c4958;
        case 0x1c495cu: goto label_1c495c;
        case 0x1c4960u: goto label_1c4960;
        case 0x1c4964u: goto label_1c4964;
        case 0x1c4968u: goto label_1c4968;
        case 0x1c496cu: goto label_1c496c;
        case 0x1c4970u: goto label_1c4970;
        case 0x1c4974u: goto label_1c4974;
        case 0x1c4978u: goto label_1c4978;
        case 0x1c497cu: goto label_1c497c;
        case 0x1c4980u: goto label_1c4980;
        case 0x1c4984u: goto label_1c4984;
        case 0x1c4988u: goto label_1c4988;
        case 0x1c498cu: goto label_1c498c;
        case 0x1c4990u: goto label_1c4990;
        case 0x1c4994u: goto label_1c4994;
        case 0x1c4998u: goto label_1c4998;
        case 0x1c499cu: goto label_1c499c;
        case 0x1c49a0u: goto label_1c49a0;
        case 0x1c49a4u: goto label_1c49a4;
        case 0x1c49a8u: goto label_1c49a8;
        case 0x1c49acu: goto label_1c49ac;
        case 0x1c49b0u: goto label_1c49b0;
        case 0x1c49b4u: goto label_1c49b4;
        case 0x1c49b8u: goto label_1c49b8;
        case 0x1c49bcu: goto label_1c49bc;
        case 0x1c49c0u: goto label_1c49c0;
        case 0x1c49c4u: goto label_1c49c4;
        case 0x1c49c8u: goto label_1c49c8;
        case 0x1c49ccu: goto label_1c49cc;
        case 0x1c49d0u: goto label_1c49d0;
        case 0x1c49d4u: goto label_1c49d4;
        case 0x1c49d8u: goto label_1c49d8;
        case 0x1c49dcu: goto label_1c49dc;
        case 0x1c49e0u: goto label_1c49e0;
        case 0x1c49e4u: goto label_1c49e4;
        case 0x1c49e8u: goto label_1c49e8;
        case 0x1c49ecu: goto label_1c49ec;
        case 0x1c49f0u: goto label_1c49f0;
        case 0x1c49f4u: goto label_1c49f4;
        case 0x1c49f8u: goto label_1c49f8;
        case 0x1c49fcu: goto label_1c49fc;
        case 0x1c4a00u: goto label_1c4a00;
        case 0x1c4a04u: goto label_1c4a04;
        case 0x1c4a08u: goto label_1c4a08;
        case 0x1c4a0cu: goto label_1c4a0c;
        case 0x1c4a10u: goto label_1c4a10;
        case 0x1c4a14u: goto label_1c4a14;
        case 0x1c4a18u: goto label_1c4a18;
        case 0x1c4a1cu: goto label_1c4a1c;
        case 0x1c4a20u: goto label_1c4a20;
        case 0x1c4a24u: goto label_1c4a24;
        case 0x1c4a28u: goto label_1c4a28;
        case 0x1c4a2cu: goto label_1c4a2c;
        case 0x1c4a30u: goto label_1c4a30;
        case 0x1c4a34u: goto label_1c4a34;
        case 0x1c4a38u: goto label_1c4a38;
        case 0x1c4a3cu: goto label_1c4a3c;
        case 0x1c4a40u: goto label_1c4a40;
        case 0x1c4a44u: goto label_1c4a44;
        case 0x1c4a48u: goto label_1c4a48;
        case 0x1c4a4cu: goto label_1c4a4c;
        case 0x1c4a50u: goto label_1c4a50;
        case 0x1c4a54u: goto label_1c4a54;
        case 0x1c4a58u: goto label_1c4a58;
        case 0x1c4a5cu: goto label_1c4a5c;
        case 0x1c4a60u: goto label_1c4a60;
        case 0x1c4a64u: goto label_1c4a64;
        case 0x1c4a68u: goto label_1c4a68;
        case 0x1c4a6cu: goto label_1c4a6c;
        case 0x1c4a70u: goto label_1c4a70;
        case 0x1c4a74u: goto label_1c4a74;
        case 0x1c4a78u: goto label_1c4a78;
        case 0x1c4a7cu: goto label_1c4a7c;
        case 0x1c4a80u: goto label_1c4a80;
        case 0x1c4a84u: goto label_1c4a84;
        case 0x1c4a88u: goto label_1c4a88;
        case 0x1c4a8cu: goto label_1c4a8c;
        case 0x1c4a90u: goto label_1c4a90;
        case 0x1c4a94u: goto label_1c4a94;
        case 0x1c4a98u: goto label_1c4a98;
        case 0x1c4a9cu: goto label_1c4a9c;
        case 0x1c4aa0u: goto label_1c4aa0;
        case 0x1c4aa4u: goto label_1c4aa4;
        case 0x1c4aa8u: goto label_1c4aa8;
        case 0x1c4aacu: goto label_1c4aac;
        case 0x1c4ab0u: goto label_1c4ab0;
        case 0x1c4ab4u: goto label_1c4ab4;
        case 0x1c4ab8u: goto label_1c4ab8;
        case 0x1c4abcu: goto label_1c4abc;
        case 0x1c4ac0u: goto label_1c4ac0;
        case 0x1c4ac4u: goto label_1c4ac4;
        case 0x1c4ac8u: goto label_1c4ac8;
        case 0x1c4accu: goto label_1c4acc;
        case 0x1c4ad0u: goto label_1c4ad0;
        case 0x1c4ad4u: goto label_1c4ad4;
        case 0x1c4ad8u: goto label_1c4ad8;
        case 0x1c4adcu: goto label_1c4adc;
        case 0x1c4ae0u: goto label_1c4ae0;
        case 0x1c4ae4u: goto label_1c4ae4;
        case 0x1c4ae8u: goto label_1c4ae8;
        case 0x1c4aecu: goto label_1c4aec;
        case 0x1c4af0u: goto label_1c4af0;
        case 0x1c4af4u: goto label_1c4af4;
        case 0x1c4af8u: goto label_1c4af8;
        case 0x1c4afcu: goto label_1c4afc;
        case 0x1c4b00u: goto label_1c4b00;
        case 0x1c4b04u: goto label_1c4b04;
        case 0x1c4b08u: goto label_1c4b08;
        case 0x1c4b0cu: goto label_1c4b0c;
        case 0x1c4b10u: goto label_1c4b10;
        case 0x1c4b14u: goto label_1c4b14;
        case 0x1c4b18u: goto label_1c4b18;
        case 0x1c4b1cu: goto label_1c4b1c;
        case 0x1c4b20u: goto label_1c4b20;
        case 0x1c4b24u: goto label_1c4b24;
        case 0x1c4b28u: goto label_1c4b28;
        case 0x1c4b2cu: goto label_1c4b2c;
        case 0x1c4b30u: goto label_1c4b30;
        case 0x1c4b34u: goto label_1c4b34;
        case 0x1c4b38u: goto label_1c4b38;
        case 0x1c4b3cu: goto label_1c4b3c;
        case 0x1c4b40u: goto label_1c4b40;
        case 0x1c4b44u: goto label_1c4b44;
        case 0x1c4b48u: goto label_1c4b48;
        case 0x1c4b4cu: goto label_1c4b4c;
        case 0x1c4b50u: goto label_1c4b50;
        case 0x1c4b54u: goto label_1c4b54;
        case 0x1c4b58u: goto label_1c4b58;
        case 0x1c4b5cu: goto label_1c4b5c;
        case 0x1c4b60u: goto label_1c4b60;
        case 0x1c4b64u: goto label_1c4b64;
        case 0x1c4b68u: goto label_1c4b68;
        case 0x1c4b6cu: goto label_1c4b6c;
        case 0x1c4b70u: goto label_1c4b70;
        case 0x1c4b74u: goto label_1c4b74;
        case 0x1c4b78u: goto label_1c4b78;
        case 0x1c4b7cu: goto label_1c4b7c;
        case 0x1c4b80u: goto label_1c4b80;
        case 0x1c4b84u: goto label_1c4b84;
        case 0x1c4b88u: goto label_1c4b88;
        case 0x1c4b8cu: goto label_1c4b8c;
        case 0x1c4b90u: goto label_1c4b90;
        case 0x1c4b94u: goto label_1c4b94;
        case 0x1c4b98u: goto label_1c4b98;
        case 0x1c4b9cu: goto label_1c4b9c;
        case 0x1c4ba0u: goto label_1c4ba0;
        case 0x1c4ba4u: goto label_1c4ba4;
        case 0x1c4ba8u: goto label_1c4ba8;
        case 0x1c4bacu: goto label_1c4bac;
        case 0x1c4bb0u: goto label_1c4bb0;
        case 0x1c4bb4u: goto label_1c4bb4;
        case 0x1c4bb8u: goto label_1c4bb8;
        case 0x1c4bbcu: goto label_1c4bbc;
        case 0x1c4bc0u: goto label_1c4bc0;
        case 0x1c4bc4u: goto label_1c4bc4;
        case 0x1c4bc8u: goto label_1c4bc8;
        case 0x1c4bccu: goto label_1c4bcc;
        case 0x1c4bd0u: goto label_1c4bd0;
        case 0x1c4bd4u: goto label_1c4bd4;
        case 0x1c4bd8u: goto label_1c4bd8;
        case 0x1c4bdcu: goto label_1c4bdc;
        case 0x1c4be0u: goto label_1c4be0;
        case 0x1c4be4u: goto label_1c4be4;
        case 0x1c4be8u: goto label_1c4be8;
        case 0x1c4becu: goto label_1c4bec;
        case 0x1c4bf0u: goto label_1c4bf0;
        case 0x1c4bf4u: goto label_1c4bf4;
        case 0x1c4bf8u: goto label_1c4bf8;
        case 0x1c4bfcu: goto label_1c4bfc;
        case 0x1c4c00u: goto label_1c4c00;
        case 0x1c4c04u: goto label_1c4c04;
        case 0x1c4c08u: goto label_1c4c08;
        case 0x1c4c0cu: goto label_1c4c0c;
        case 0x1c4c10u: goto label_1c4c10;
        case 0x1c4c14u: goto label_1c4c14;
        case 0x1c4c18u: goto label_1c4c18;
        case 0x1c4c1cu: goto label_1c4c1c;
        case 0x1c4c20u: goto label_1c4c20;
        case 0x1c4c24u: goto label_1c4c24;
        case 0x1c4c28u: goto label_1c4c28;
        case 0x1c4c2cu: goto label_1c4c2c;
        case 0x1c4c30u: goto label_1c4c30;
        case 0x1c4c34u: goto label_1c4c34;
        case 0x1c4c38u: goto label_1c4c38;
        case 0x1c4c3cu: goto label_1c4c3c;
        case 0x1c4c40u: goto label_1c4c40;
        case 0x1c4c44u: goto label_1c4c44;
        case 0x1c4c48u: goto label_1c4c48;
        case 0x1c4c4cu: goto label_1c4c4c;
        case 0x1c4c50u: goto label_1c4c50;
        case 0x1c4c54u: goto label_1c4c54;
        case 0x1c4c58u: goto label_1c4c58;
        case 0x1c4c5cu: goto label_1c4c5c;
        case 0x1c4c60u: goto label_1c4c60;
        case 0x1c4c64u: goto label_1c4c64;
        case 0x1c4c68u: goto label_1c4c68;
        case 0x1c4c6cu: goto label_1c4c6c;
        case 0x1c4c70u: goto label_1c4c70;
        case 0x1c4c74u: goto label_1c4c74;
        case 0x1c4c78u: goto label_1c4c78;
        case 0x1c4c7cu: goto label_1c4c7c;
        case 0x1c4c80u: goto label_1c4c80;
        case 0x1c4c84u: goto label_1c4c84;
        case 0x1c4c88u: goto label_1c4c88;
        case 0x1c4c8cu: goto label_1c4c8c;
        case 0x1c4c90u: goto label_1c4c90;
        case 0x1c4c94u: goto label_1c4c94;
        case 0x1c4c98u: goto label_1c4c98;
        case 0x1c4c9cu: goto label_1c4c9c;
        case 0x1c4ca0u: goto label_1c4ca0;
        case 0x1c4ca4u: goto label_1c4ca4;
        case 0x1c4ca8u: goto label_1c4ca8;
        case 0x1c4cacu: goto label_1c4cac;
        case 0x1c4cb0u: goto label_1c4cb0;
        case 0x1c4cb4u: goto label_1c4cb4;
        case 0x1c4cb8u: goto label_1c4cb8;
        case 0x1c4cbcu: goto label_1c4cbc;
        case 0x1c4cc0u: goto label_1c4cc0;
        case 0x1c4cc4u: goto label_1c4cc4;
        case 0x1c4cc8u: goto label_1c4cc8;
        case 0x1c4cccu: goto label_1c4ccc;
        case 0x1c4cd0u: goto label_1c4cd0;
        case 0x1c4cd4u: goto label_1c4cd4;
        case 0x1c4cd8u: goto label_1c4cd8;
        case 0x1c4cdcu: goto label_1c4cdc;
        case 0x1c4ce0u: goto label_1c4ce0;
        case 0x1c4ce4u: goto label_1c4ce4;
        case 0x1c4ce8u: goto label_1c4ce8;
        case 0x1c4cecu: goto label_1c4cec;
        case 0x1c4cf0u: goto label_1c4cf0;
        case 0x1c4cf4u: goto label_1c4cf4;
        case 0x1c4cf8u: goto label_1c4cf8;
        case 0x1c4cfcu: goto label_1c4cfc;
        case 0x1c4d00u: goto label_1c4d00;
        case 0x1c4d04u: goto label_1c4d04;
        case 0x1c4d08u: goto label_1c4d08;
        case 0x1c4d0cu: goto label_1c4d0c;
        case 0x1c4d10u: goto label_1c4d10;
        case 0x1c4d14u: goto label_1c4d14;
        case 0x1c4d18u: goto label_1c4d18;
        case 0x1c4d1cu: goto label_1c4d1c;
        case 0x1c4d20u: goto label_1c4d20;
        case 0x1c4d24u: goto label_1c4d24;
        case 0x1c4d28u: goto label_1c4d28;
        case 0x1c4d2cu: goto label_1c4d2c;
        case 0x1c4d30u: goto label_1c4d30;
        case 0x1c4d34u: goto label_1c4d34;
        case 0x1c4d38u: goto label_1c4d38;
        case 0x1c4d3cu: goto label_1c4d3c;
        case 0x1c4d40u: goto label_1c4d40;
        case 0x1c4d44u: goto label_1c4d44;
        case 0x1c4d48u: goto label_1c4d48;
        case 0x1c4d4cu: goto label_1c4d4c;
        case 0x1c4d50u: goto label_1c4d50;
        case 0x1c4d54u: goto label_1c4d54;
        case 0x1c4d58u: goto label_1c4d58;
        case 0x1c4d5cu: goto label_1c4d5c;
        case 0x1c4d60u: goto label_1c4d60;
        case 0x1c4d64u: goto label_1c4d64;
        case 0x1c4d68u: goto label_1c4d68;
        case 0x1c4d6cu: goto label_1c4d6c;
        case 0x1c4d70u: goto label_1c4d70;
        case 0x1c4d74u: goto label_1c4d74;
        case 0x1c4d78u: goto label_1c4d78;
        case 0x1c4d7cu: goto label_1c4d7c;
        case 0x1c4d80u: goto label_1c4d80;
        case 0x1c4d84u: goto label_1c4d84;
        case 0x1c4d88u: goto label_1c4d88;
        case 0x1c4d8cu: goto label_1c4d8c;
        case 0x1c4d90u: goto label_1c4d90;
        case 0x1c4d94u: goto label_1c4d94;
        case 0x1c4d98u: goto label_1c4d98;
        case 0x1c4d9cu: goto label_1c4d9c;
        case 0x1c4da0u: goto label_1c4da0;
        case 0x1c4da4u: goto label_1c4da4;
        case 0x1c4da8u: goto label_1c4da8;
        case 0x1c4dacu: goto label_1c4dac;
        case 0x1c4db0u: goto label_1c4db0;
        case 0x1c4db4u: goto label_1c4db4;
        case 0x1c4db8u: goto label_1c4db8;
        case 0x1c4dbcu: goto label_1c4dbc;
        case 0x1c4dc0u: goto label_1c4dc0;
        case 0x1c4dc4u: goto label_1c4dc4;
        case 0x1c4dc8u: goto label_1c4dc8;
        case 0x1c4dccu: goto label_1c4dcc;
        case 0x1c4dd0u: goto label_1c4dd0;
        case 0x1c4dd4u: goto label_1c4dd4;
        case 0x1c4dd8u: goto label_1c4dd8;
        case 0x1c4ddcu: goto label_1c4ddc;
        case 0x1c4de0u: goto label_1c4de0;
        case 0x1c4de4u: goto label_1c4de4;
        case 0x1c4de8u: goto label_1c4de8;
        case 0x1c4decu: goto label_1c4dec;
        case 0x1c4df0u: goto label_1c4df0;
        case 0x1c4df4u: goto label_1c4df4;
        case 0x1c4df8u: goto label_1c4df8;
        case 0x1c4dfcu: goto label_1c4dfc;
        case 0x1c4e00u: goto label_1c4e00;
        case 0x1c4e04u: goto label_1c4e04;
        case 0x1c4e08u: goto label_1c4e08;
        case 0x1c4e0cu: goto label_1c4e0c;
        case 0x1c4e10u: goto label_1c4e10;
        case 0x1c4e14u: goto label_1c4e14;
        case 0x1c4e18u: goto label_1c4e18;
        case 0x1c4e1cu: goto label_1c4e1c;
        case 0x1c4e20u: goto label_1c4e20;
        case 0x1c4e24u: goto label_1c4e24;
        case 0x1c4e28u: goto label_1c4e28;
        case 0x1c4e2cu: goto label_1c4e2c;
        case 0x1c4e30u: goto label_1c4e30;
        case 0x1c4e34u: goto label_1c4e34;
        case 0x1c4e38u: goto label_1c4e38;
        case 0x1c4e3cu: goto label_1c4e3c;
        case 0x1c4e40u: goto label_1c4e40;
        case 0x1c4e44u: goto label_1c4e44;
        case 0x1c4e48u: goto label_1c4e48;
        case 0x1c4e4cu: goto label_1c4e4c;
        case 0x1c4e50u: goto label_1c4e50;
        case 0x1c4e54u: goto label_1c4e54;
        case 0x1c4e58u: goto label_1c4e58;
        case 0x1c4e5cu: goto label_1c4e5c;
        case 0x1c4e60u: goto label_1c4e60;
        case 0x1c4e64u: goto label_1c4e64;
        case 0x1c4e68u: goto label_1c4e68;
        case 0x1c4e6cu: goto label_1c4e6c;
        case 0x1c4e70u: goto label_1c4e70;
        case 0x1c4e74u: goto label_1c4e74;
        case 0x1c4e78u: goto label_1c4e78;
        case 0x1c4e7cu: goto label_1c4e7c;
        case 0x1c4e80u: goto label_1c4e80;
        case 0x1c4e84u: goto label_1c4e84;
        case 0x1c4e88u: goto label_1c4e88;
        case 0x1c4e8cu: goto label_1c4e8c;
        case 0x1c4e90u: goto label_1c4e90;
        case 0x1c4e94u: goto label_1c4e94;
        case 0x1c4e98u: goto label_1c4e98;
        case 0x1c4e9cu: goto label_1c4e9c;
        case 0x1c4ea0u: goto label_1c4ea0;
        case 0x1c4ea4u: goto label_1c4ea4;
        case 0x1c4ea8u: goto label_1c4ea8;
        case 0x1c4eacu: goto label_1c4eac;
        case 0x1c4eb0u: goto label_1c4eb0;
        case 0x1c4eb4u: goto label_1c4eb4;
        case 0x1c4eb8u: goto label_1c4eb8;
        case 0x1c4ebcu: goto label_1c4ebc;
        case 0x1c4ec0u: goto label_1c4ec0;
        case 0x1c4ec4u: goto label_1c4ec4;
        case 0x1c4ec8u: goto label_1c4ec8;
        case 0x1c4eccu: goto label_1c4ecc;
        case 0x1c4ed0u: goto label_1c4ed0;
        case 0x1c4ed4u: goto label_1c4ed4;
        case 0x1c4ed8u: goto label_1c4ed8;
        case 0x1c4edcu: goto label_1c4edc;
        case 0x1c4ee0u: goto label_1c4ee0;
        case 0x1c4ee4u: goto label_1c4ee4;
        case 0x1c4ee8u: goto label_1c4ee8;
        case 0x1c4eecu: goto label_1c4eec;
        case 0x1c4ef0u: goto label_1c4ef0;
        case 0x1c4ef4u: goto label_1c4ef4;
        case 0x1c4ef8u: goto label_1c4ef8;
        case 0x1c4efcu: goto label_1c4efc;
        case 0x1c4f00u: goto label_1c4f00;
        case 0x1c4f04u: goto label_1c4f04;
        case 0x1c4f08u: goto label_1c4f08;
        case 0x1c4f0cu: goto label_1c4f0c;
        case 0x1c4f10u: goto label_1c4f10;
        case 0x1c4f14u: goto label_1c4f14;
        case 0x1c4f18u: goto label_1c4f18;
        case 0x1c4f1cu: goto label_1c4f1c;
        case 0x1c4f20u: goto label_1c4f20;
        case 0x1c4f24u: goto label_1c4f24;
        case 0x1c4f28u: goto label_1c4f28;
        case 0x1c4f2cu: goto label_1c4f2c;
        case 0x1c4f30u: goto label_1c4f30;
        case 0x1c4f34u: goto label_1c4f34;
        case 0x1c4f38u: goto label_1c4f38;
        case 0x1c4f3cu: goto label_1c4f3c;
        case 0x1c4f40u: goto label_1c4f40;
        case 0x1c4f44u: goto label_1c4f44;
        case 0x1c4f48u: goto label_1c4f48;
        case 0x1c4f4cu: goto label_1c4f4c;
        case 0x1c4f50u: goto label_1c4f50;
        case 0x1c4f54u: goto label_1c4f54;
        case 0x1c4f58u: goto label_1c4f58;
        case 0x1c4f5cu: goto label_1c4f5c;
        case 0x1c4f60u: goto label_1c4f60;
        case 0x1c4f64u: goto label_1c4f64;
        case 0x1c4f68u: goto label_1c4f68;
        case 0x1c4f6cu: goto label_1c4f6c;
        case 0x1c4f70u: goto label_1c4f70;
        case 0x1c4f74u: goto label_1c4f74;
        case 0x1c4f78u: goto label_1c4f78;
        case 0x1c4f7cu: goto label_1c4f7c;
        case 0x1c4f80u: goto label_1c4f80;
        case 0x1c4f84u: goto label_1c4f84;
        case 0x1c4f88u: goto label_1c4f88;
        case 0x1c4f8cu: goto label_1c4f8c;
        case 0x1c4f90u: goto label_1c4f90;
        case 0x1c4f94u: goto label_1c4f94;
        case 0x1c4f98u: goto label_1c4f98;
        case 0x1c4f9cu: goto label_1c4f9c;
        case 0x1c4fa0u: goto label_1c4fa0;
        case 0x1c4fa4u: goto label_1c4fa4;
        case 0x1c4fa8u: goto label_1c4fa8;
        case 0x1c4facu: goto label_1c4fac;
        case 0x1c4fb0u: goto label_1c4fb0;
        case 0x1c4fb4u: goto label_1c4fb4;
        case 0x1c4fb8u: goto label_1c4fb8;
        case 0x1c4fbcu: goto label_1c4fbc;
        case 0x1c4fc0u: goto label_1c4fc0;
        case 0x1c4fc4u: goto label_1c4fc4;
        case 0x1c4fc8u: goto label_1c4fc8;
        case 0x1c4fccu: goto label_1c4fcc;
        case 0x1c4fd0u: goto label_1c4fd0;
        case 0x1c4fd4u: goto label_1c4fd4;
        case 0x1c4fd8u: goto label_1c4fd8;
        case 0x1c4fdcu: goto label_1c4fdc;
        case 0x1c4fe0u: goto label_1c4fe0;
        case 0x1c4fe4u: goto label_1c4fe4;
        case 0x1c4fe8u: goto label_1c4fe8;
        case 0x1c4fecu: goto label_1c4fec;
        case 0x1c4ff0u: goto label_1c4ff0;
        case 0x1c4ff4u: goto label_1c4ff4;
        case 0x1c4ff8u: goto label_1c4ff8;
        case 0x1c4ffcu: goto label_1c4ffc;
        case 0x1c5000u: goto label_1c5000;
        case 0x1c5004u: goto label_1c5004;
        case 0x1c5008u: goto label_1c5008;
        case 0x1c500cu: goto label_1c500c;
        case 0x1c5010u: goto label_1c5010;
        case 0x1c5014u: goto label_1c5014;
        case 0x1c5018u: goto label_1c5018;
        case 0x1c501cu: goto label_1c501c;
        case 0x1c5020u: goto label_1c5020;
        case 0x1c5024u: goto label_1c5024;
        case 0x1c5028u: goto label_1c5028;
        case 0x1c502cu: goto label_1c502c;
        case 0x1c5030u: goto label_1c5030;
        case 0x1c5034u: goto label_1c5034;
        case 0x1c5038u: goto label_1c5038;
        case 0x1c503cu: goto label_1c503c;
        case 0x1c5040u: goto label_1c5040;
        case 0x1c5044u: goto label_1c5044;
        case 0x1c5048u: goto label_1c5048;
        case 0x1c504cu: goto label_1c504c;
        case 0x1c5050u: goto label_1c5050;
        case 0x1c5054u: goto label_1c5054;
        case 0x1c5058u: goto label_1c5058;
        case 0x1c505cu: goto label_1c505c;
        case 0x1c5060u: goto label_1c5060;
        case 0x1c5064u: goto label_1c5064;
        case 0x1c5068u: goto label_1c5068;
        case 0x1c506cu: goto label_1c506c;
        case 0x1c5070u: goto label_1c5070;
        case 0x1c5074u: goto label_1c5074;
        case 0x1c5078u: goto label_1c5078;
        case 0x1c507cu: goto label_1c507c;
        case 0x1c5080u: goto label_1c5080;
        case 0x1c5084u: goto label_1c5084;
        case 0x1c5088u: goto label_1c5088;
        case 0x1c508cu: goto label_1c508c;
        case 0x1c5090u: goto label_1c5090;
        case 0x1c5094u: goto label_1c5094;
        case 0x1c5098u: goto label_1c5098;
        case 0x1c509cu: goto label_1c509c;
        case 0x1c50a0u: goto label_1c50a0;
        case 0x1c50a4u: goto label_1c50a4;
        case 0x1c50a8u: goto label_1c50a8;
        case 0x1c50acu: goto label_1c50ac;
        case 0x1c50b0u: goto label_1c50b0;
        case 0x1c50b4u: goto label_1c50b4;
        case 0x1c50b8u: goto label_1c50b8;
        case 0x1c50bcu: goto label_1c50bc;
        case 0x1c50c0u: goto label_1c50c0;
        case 0x1c50c4u: goto label_1c50c4;
        case 0x1c50c8u: goto label_1c50c8;
        case 0x1c50ccu: goto label_1c50cc;
        case 0x1c50d0u: goto label_1c50d0;
        case 0x1c50d4u: goto label_1c50d4;
        case 0x1c50d8u: goto label_1c50d8;
        case 0x1c50dcu: goto label_1c50dc;
        case 0x1c50e0u: goto label_1c50e0;
        case 0x1c50e4u: goto label_1c50e4;
        case 0x1c50e8u: goto label_1c50e8;
        case 0x1c50ecu: goto label_1c50ec;
        case 0x1c50f0u: goto label_1c50f0;
        case 0x1c50f4u: goto label_1c50f4;
        case 0x1c50f8u: goto label_1c50f8;
        case 0x1c50fcu: goto label_1c50fc;
        case 0x1c5100u: goto label_1c5100;
        case 0x1c5104u: goto label_1c5104;
        case 0x1c5108u: goto label_1c5108;
        case 0x1c510cu: goto label_1c510c;
        case 0x1c5110u: goto label_1c5110;
        case 0x1c5114u: goto label_1c5114;
        case 0x1c5118u: goto label_1c5118;
        case 0x1c511cu: goto label_1c511c;
        case 0x1c5120u: goto label_1c5120;
        case 0x1c5124u: goto label_1c5124;
        case 0x1c5128u: goto label_1c5128;
        case 0x1c512cu: goto label_1c512c;
        case 0x1c5130u: goto label_1c5130;
        case 0x1c5134u: goto label_1c5134;
        case 0x1c5138u: goto label_1c5138;
        case 0x1c513cu: goto label_1c513c;
        case 0x1c5140u: goto label_1c5140;
        case 0x1c5144u: goto label_1c5144;
        case 0x1c5148u: goto label_1c5148;
        case 0x1c514cu: goto label_1c514c;
        case 0x1c5150u: goto label_1c5150;
        case 0x1c5154u: goto label_1c5154;
        case 0x1c5158u: goto label_1c5158;
        case 0x1c515cu: goto label_1c515c;
        case 0x1c5160u: goto label_1c5160;
        case 0x1c5164u: goto label_1c5164;
        case 0x1c5168u: goto label_1c5168;
        case 0x1c516cu: goto label_1c516c;
        case 0x1c5170u: goto label_1c5170;
        case 0x1c5174u: goto label_1c5174;
        case 0x1c5178u: goto label_1c5178;
        case 0x1c517cu: goto label_1c517c;
        case 0x1c5180u: goto label_1c5180;
        case 0x1c5184u: goto label_1c5184;
        case 0x1c5188u: goto label_1c5188;
        case 0x1c518cu: goto label_1c518c;
        case 0x1c5190u: goto label_1c5190;
        case 0x1c5194u: goto label_1c5194;
        case 0x1c5198u: goto label_1c5198;
        case 0x1c519cu: goto label_1c519c;
        case 0x1c51a0u: goto label_1c51a0;
        case 0x1c51a4u: goto label_1c51a4;
        case 0x1c51a8u: goto label_1c51a8;
        case 0x1c51acu: goto label_1c51ac;
        case 0x1c51b0u: goto label_1c51b0;
        case 0x1c51b4u: goto label_1c51b4;
        case 0x1c51b8u: goto label_1c51b8;
        case 0x1c51bcu: goto label_1c51bc;
        case 0x1c51c0u: goto label_1c51c0;
        case 0x1c51c4u: goto label_1c51c4;
        case 0x1c51c8u: goto label_1c51c8;
        case 0x1c51ccu: goto label_1c51cc;
        case 0x1c51d0u: goto label_1c51d0;
        case 0x1c51d4u: goto label_1c51d4;
        case 0x1c51d8u: goto label_1c51d8;
        case 0x1c51dcu: goto label_1c51dc;
        case 0x1c51e0u: goto label_1c51e0;
        case 0x1c51e4u: goto label_1c51e4;
        case 0x1c51e8u: goto label_1c51e8;
        case 0x1c51ecu: goto label_1c51ec;
        case 0x1c51f0u: goto label_1c51f0;
        case 0x1c51f4u: goto label_1c51f4;
        case 0x1c51f8u: goto label_1c51f8;
        case 0x1c51fcu: goto label_1c51fc;
        case 0x1c5200u: goto label_1c5200;
        case 0x1c5204u: goto label_1c5204;
        case 0x1c5208u: goto label_1c5208;
        case 0x1c520cu: goto label_1c520c;
        case 0x1c5210u: goto label_1c5210;
        case 0x1c5214u: goto label_1c5214;
        case 0x1c5218u: goto label_1c5218;
        case 0x1c521cu: goto label_1c521c;
        case 0x1c5220u: goto label_1c5220;
        case 0x1c5224u: goto label_1c5224;
        case 0x1c5228u: goto label_1c5228;
        case 0x1c522cu: goto label_1c522c;
        case 0x1c5230u: goto label_1c5230;
        case 0x1c5234u: goto label_1c5234;
        case 0x1c5238u: goto label_1c5238;
        case 0x1c523cu: goto label_1c523c;
        case 0x1c5240u: goto label_1c5240;
        case 0x1c5244u: goto label_1c5244;
        case 0x1c5248u: goto label_1c5248;
        case 0x1c524cu: goto label_1c524c;
        case 0x1c5250u: goto label_1c5250;
        case 0x1c5254u: goto label_1c5254;
        case 0x1c5258u: goto label_1c5258;
        case 0x1c525cu: goto label_1c525c;
        case 0x1c5260u: goto label_1c5260;
        case 0x1c5264u: goto label_1c5264;
        case 0x1c5268u: goto label_1c5268;
        case 0x1c526cu: goto label_1c526c;
        case 0x1c5270u: goto label_1c5270;
        case 0x1c5274u: goto label_1c5274;
        case 0x1c5278u: goto label_1c5278;
        case 0x1c527cu: goto label_1c527c;
        case 0x1c5280u: goto label_1c5280;
        case 0x1c5284u: goto label_1c5284;
        case 0x1c5288u: goto label_1c5288;
        case 0x1c528cu: goto label_1c528c;
        case 0x1c5290u: goto label_1c5290;
        case 0x1c5294u: goto label_1c5294;
        case 0x1c5298u: goto label_1c5298;
        case 0x1c529cu: goto label_1c529c;
        case 0x1c52a0u: goto label_1c52a0;
        case 0x1c52a4u: goto label_1c52a4;
        case 0x1c52a8u: goto label_1c52a8;
        case 0x1c52acu: goto label_1c52ac;
        case 0x1c52b0u: goto label_1c52b0;
        case 0x1c52b4u: goto label_1c52b4;
        case 0x1c52b8u: goto label_1c52b8;
        case 0x1c52bcu: goto label_1c52bc;
        case 0x1c52c0u: goto label_1c52c0;
        case 0x1c52c4u: goto label_1c52c4;
        case 0x1c52c8u: goto label_1c52c8;
        case 0x1c52ccu: goto label_1c52cc;
        case 0x1c52d0u: goto label_1c52d0;
        case 0x1c52d4u: goto label_1c52d4;
        case 0x1c52d8u: goto label_1c52d8;
        case 0x1c52dcu: goto label_1c52dc;
        case 0x1c52e0u: goto label_1c52e0;
        case 0x1c52e4u: goto label_1c52e4;
        case 0x1c52e8u: goto label_1c52e8;
        case 0x1c52ecu: goto label_1c52ec;
        case 0x1c52f0u: goto label_1c52f0;
        case 0x1c52f4u: goto label_1c52f4;
        case 0x1c52f8u: goto label_1c52f8;
        case 0x1c52fcu: goto label_1c52fc;
        case 0x1c5300u: goto label_1c5300;
        case 0x1c5304u: goto label_1c5304;
        case 0x1c5308u: goto label_1c5308;
        case 0x1c530cu: goto label_1c530c;
        case 0x1c5310u: goto label_1c5310;
        case 0x1c5314u: goto label_1c5314;
        case 0x1c5318u: goto label_1c5318;
        case 0x1c531cu: goto label_1c531c;
        case 0x1c5320u: goto label_1c5320;
        case 0x1c5324u: goto label_1c5324;
        case 0x1c5328u: goto label_1c5328;
        case 0x1c532cu: goto label_1c532c;
        case 0x1c5330u: goto label_1c5330;
        case 0x1c5334u: goto label_1c5334;
        case 0x1c5338u: goto label_1c5338;
        case 0x1c533cu: goto label_1c533c;
        case 0x1c5340u: goto label_1c5340;
        case 0x1c5344u: goto label_1c5344;
        case 0x1c5348u: goto label_1c5348;
        case 0x1c534cu: goto label_1c534c;
        case 0x1c5350u: goto label_1c5350;
        case 0x1c5354u: goto label_1c5354;
        case 0x1c5358u: goto label_1c5358;
        case 0x1c535cu: goto label_1c535c;
        case 0x1c5360u: goto label_1c5360;
        case 0x1c5364u: goto label_1c5364;
        case 0x1c5368u: goto label_1c5368;
        case 0x1c536cu: goto label_1c536c;
        case 0x1c5370u: goto label_1c5370;
        case 0x1c5374u: goto label_1c5374;
        case 0x1c5378u: goto label_1c5378;
        case 0x1c537cu: goto label_1c537c;
        case 0x1c5380u: goto label_1c5380;
        case 0x1c5384u: goto label_1c5384;
        case 0x1c5388u: goto label_1c5388;
        case 0x1c538cu: goto label_1c538c;
        case 0x1c5390u: goto label_1c5390;
        case 0x1c5394u: goto label_1c5394;
        case 0x1c5398u: goto label_1c5398;
        case 0x1c539cu: goto label_1c539c;
        case 0x1c53a0u: goto label_1c53a0;
        case 0x1c53a4u: goto label_1c53a4;
        case 0x1c53a8u: goto label_1c53a8;
        case 0x1c53acu: goto label_1c53ac;
        case 0x1c53b0u: goto label_1c53b0;
        case 0x1c53b4u: goto label_1c53b4;
        case 0x1c53b8u: goto label_1c53b8;
        case 0x1c53bcu: goto label_1c53bc;
        case 0x1c53c0u: goto label_1c53c0;
        case 0x1c53c4u: goto label_1c53c4;
        case 0x1c53c8u: goto label_1c53c8;
        case 0x1c53ccu: goto label_1c53cc;
        case 0x1c53d0u: goto label_1c53d0;
        case 0x1c53d4u: goto label_1c53d4;
        case 0x1c53d8u: goto label_1c53d8;
        case 0x1c53dcu: goto label_1c53dc;
        case 0x1c53e0u: goto label_1c53e0;
        case 0x1c53e4u: goto label_1c53e4;
        case 0x1c53e8u: goto label_1c53e8;
        case 0x1c53ecu: goto label_1c53ec;
        case 0x1c53f0u: goto label_1c53f0;
        case 0x1c53f4u: goto label_1c53f4;
        case 0x1c53f8u: goto label_1c53f8;
        case 0x1c53fcu: goto label_1c53fc;
        case 0x1c5400u: goto label_1c5400;
        case 0x1c5404u: goto label_1c5404;
        case 0x1c5408u: goto label_1c5408;
        case 0x1c540cu: goto label_1c540c;
        case 0x1c5410u: goto label_1c5410;
        case 0x1c5414u: goto label_1c5414;
        case 0x1c5418u: goto label_1c5418;
        case 0x1c541cu: goto label_1c541c;
        case 0x1c5420u: goto label_1c5420;
        case 0x1c5424u: goto label_1c5424;
        case 0x1c5428u: goto label_1c5428;
        case 0x1c542cu: goto label_1c542c;
        case 0x1c5430u: goto label_1c5430;
        case 0x1c5434u: goto label_1c5434;
        case 0x1c5438u: goto label_1c5438;
        case 0x1c543cu: goto label_1c543c;
        case 0x1c5440u: goto label_1c5440;
        case 0x1c5444u: goto label_1c5444;
        case 0x1c5448u: goto label_1c5448;
        case 0x1c544cu: goto label_1c544c;
        case 0x1c5450u: goto label_1c5450;
        case 0x1c5454u: goto label_1c5454;
        case 0x1c5458u: goto label_1c5458;
        case 0x1c545cu: goto label_1c545c;
        case 0x1c5460u: goto label_1c5460;
        case 0x1c5464u: goto label_1c5464;
        case 0x1c5468u: goto label_1c5468;
        case 0x1c546cu: goto label_1c546c;
        case 0x1c5470u: goto label_1c5470;
        case 0x1c5474u: goto label_1c5474;
        case 0x1c5478u: goto label_1c5478;
        case 0x1c547cu: goto label_1c547c;
        case 0x1c5480u: goto label_1c5480;
        case 0x1c5484u: goto label_1c5484;
        case 0x1c5488u: goto label_1c5488;
        case 0x1c548cu: goto label_1c548c;
        case 0x1c5490u: goto label_1c5490;
        case 0x1c5494u: goto label_1c5494;
        case 0x1c5498u: goto label_1c5498;
        case 0x1c549cu: goto label_1c549c;
        case 0x1c54a0u: goto label_1c54a0;
        case 0x1c54a4u: goto label_1c54a4;
        case 0x1c54a8u: goto label_1c54a8;
        case 0x1c54acu: goto label_1c54ac;
        case 0x1c54b0u: goto label_1c54b0;
        case 0x1c54b4u: goto label_1c54b4;
        case 0x1c54b8u: goto label_1c54b8;
        case 0x1c54bcu: goto label_1c54bc;
        case 0x1c54c0u: goto label_1c54c0;
        case 0x1c54c4u: goto label_1c54c4;
        case 0x1c54c8u: goto label_1c54c8;
        case 0x1c54ccu: goto label_1c54cc;
        case 0x1c54d0u: goto label_1c54d0;
        case 0x1c54d4u: goto label_1c54d4;
        case 0x1c54d8u: goto label_1c54d8;
        case 0x1c54dcu: goto label_1c54dc;
        case 0x1c54e0u: goto label_1c54e0;
        case 0x1c54e4u: goto label_1c54e4;
        case 0x1c54e8u: goto label_1c54e8;
        case 0x1c54ecu: goto label_1c54ec;
        case 0x1c54f0u: goto label_1c54f0;
        case 0x1c54f4u: goto label_1c54f4;
        case 0x1c54f8u: goto label_1c54f8;
        case 0x1c54fcu: goto label_1c54fc;
        case 0x1c5500u: goto label_1c5500;
        case 0x1c5504u: goto label_1c5504;
        case 0x1c5508u: goto label_1c5508;
        case 0x1c550cu: goto label_1c550c;
        case 0x1c5510u: goto label_1c5510;
        case 0x1c5514u: goto label_1c5514;
        case 0x1c5518u: goto label_1c5518;
        case 0x1c551cu: goto label_1c551c;
        case 0x1c5520u: goto label_1c5520;
        case 0x1c5524u: goto label_1c5524;
        case 0x1c5528u: goto label_1c5528;
        case 0x1c552cu: goto label_1c552c;
        case 0x1c5530u: goto label_1c5530;
        case 0x1c5534u: goto label_1c5534;
        case 0x1c5538u: goto label_1c5538;
        case 0x1c553cu: goto label_1c553c;
        case 0x1c5540u: goto label_1c5540;
        case 0x1c5544u: goto label_1c5544;
        case 0x1c5548u: goto label_1c5548;
        case 0x1c554cu: goto label_1c554c;
        case 0x1c5550u: goto label_1c5550;
        case 0x1c5554u: goto label_1c5554;
        case 0x1c5558u: goto label_1c5558;
        case 0x1c555cu: goto label_1c555c;
        case 0x1c5560u: goto label_1c5560;
        case 0x1c5564u: goto label_1c5564;
        case 0x1c5568u: goto label_1c5568;
        case 0x1c556cu: goto label_1c556c;
        case 0x1c5570u: goto label_1c5570;
        case 0x1c5574u: goto label_1c5574;
        case 0x1c5578u: goto label_1c5578;
        case 0x1c557cu: goto label_1c557c;
        case 0x1c5580u: goto label_1c5580;
        case 0x1c5584u: goto label_1c5584;
        case 0x1c5588u: goto label_1c5588;
        case 0x1c558cu: goto label_1c558c;
        case 0x1c5590u: goto label_1c5590;
        case 0x1c5594u: goto label_1c5594;
        case 0x1c5598u: goto label_1c5598;
        case 0x1c559cu: goto label_1c559c;
        case 0x1c55a0u: goto label_1c55a0;
        case 0x1c55a4u: goto label_1c55a4;
        case 0x1c55a8u: goto label_1c55a8;
        case 0x1c55acu: goto label_1c55ac;
        case 0x1c55b0u: goto label_1c55b0;
        case 0x1c55b4u: goto label_1c55b4;
        case 0x1c55b8u: goto label_1c55b8;
        case 0x1c55bcu: goto label_1c55bc;
        case 0x1c55c0u: goto label_1c55c0;
        case 0x1c55c4u: goto label_1c55c4;
        case 0x1c55c8u: goto label_1c55c8;
        case 0x1c55ccu: goto label_1c55cc;
        case 0x1c55d0u: goto label_1c55d0;
        case 0x1c55d4u: goto label_1c55d4;
        case 0x1c55d8u: goto label_1c55d8;
        case 0x1c55dcu: goto label_1c55dc;
        case 0x1c55e0u: goto label_1c55e0;
        case 0x1c55e4u: goto label_1c55e4;
        case 0x1c55e8u: goto label_1c55e8;
        case 0x1c55ecu: goto label_1c55ec;
        case 0x1c55f0u: goto label_1c55f0;
        case 0x1c55f4u: goto label_1c55f4;
        case 0x1c55f8u: goto label_1c55f8;
        case 0x1c55fcu: goto label_1c55fc;
        case 0x1c5600u: goto label_1c5600;
        case 0x1c5604u: goto label_1c5604;
        case 0x1c5608u: goto label_1c5608;
        case 0x1c560cu: goto label_1c560c;
        case 0x1c5610u: goto label_1c5610;
        case 0x1c5614u: goto label_1c5614;
        case 0x1c5618u: goto label_1c5618;
        case 0x1c561cu: goto label_1c561c;
        case 0x1c5620u: goto label_1c5620;
        case 0x1c5624u: goto label_1c5624;
        case 0x1c5628u: goto label_1c5628;
        case 0x1c562cu: goto label_1c562c;
        case 0x1c5630u: goto label_1c5630;
        case 0x1c5634u: goto label_1c5634;
        case 0x1c5638u: goto label_1c5638;
        case 0x1c563cu: goto label_1c563c;
        case 0x1c5640u: goto label_1c5640;
        case 0x1c5644u: goto label_1c5644;
        case 0x1c5648u: goto label_1c5648;
        case 0x1c564cu: goto label_1c564c;
        case 0x1c5650u: goto label_1c5650;
        case 0x1c5654u: goto label_1c5654;
        case 0x1c5658u: goto label_1c5658;
        case 0x1c565cu: goto label_1c565c;
        case 0x1c5660u: goto label_1c5660;
        case 0x1c5664u: goto label_1c5664;
        case 0x1c5668u: goto label_1c5668;
        case 0x1c566cu: goto label_1c566c;
        case 0x1c5670u: goto label_1c5670;
        case 0x1c5674u: goto label_1c5674;
        case 0x1c5678u: goto label_1c5678;
        case 0x1c567cu: goto label_1c567c;
        case 0x1c5680u: goto label_1c5680;
        case 0x1c5684u: goto label_1c5684;
        case 0x1c5688u: goto label_1c5688;
        case 0x1c568cu: goto label_1c568c;
        case 0x1c5690u: goto label_1c5690;
        case 0x1c5694u: goto label_1c5694;
        case 0x1c5698u: goto label_1c5698;
        case 0x1c569cu: goto label_1c569c;
        case 0x1c56a0u: goto label_1c56a0;
        case 0x1c56a4u: goto label_1c56a4;
        case 0x1c56a8u: goto label_1c56a8;
        case 0x1c56acu: goto label_1c56ac;
        case 0x1c56b0u: goto label_1c56b0;
        case 0x1c56b4u: goto label_1c56b4;
        case 0x1c56b8u: goto label_1c56b8;
        case 0x1c56bcu: goto label_1c56bc;
        case 0x1c56c0u: goto label_1c56c0;
        case 0x1c56c4u: goto label_1c56c4;
        case 0x1c56c8u: goto label_1c56c8;
        case 0x1c56ccu: goto label_1c56cc;
        case 0x1c56d0u: goto label_1c56d0;
        case 0x1c56d4u: goto label_1c56d4;
        case 0x1c56d8u: goto label_1c56d8;
        case 0x1c56dcu: goto label_1c56dc;
        case 0x1c56e0u: goto label_1c56e0;
        case 0x1c56e4u: goto label_1c56e4;
        case 0x1c56e8u: goto label_1c56e8;
        case 0x1c56ecu: goto label_1c56ec;
        case 0x1c56f0u: goto label_1c56f0;
        case 0x1c56f4u: goto label_1c56f4;
        case 0x1c56f8u: goto label_1c56f8;
        case 0x1c56fcu: goto label_1c56fc;
        case 0x1c5700u: goto label_1c5700;
        case 0x1c5704u: goto label_1c5704;
        case 0x1c5708u: goto label_1c5708;
        case 0x1c570cu: goto label_1c570c;
        case 0x1c5710u: goto label_1c5710;
        case 0x1c5714u: goto label_1c5714;
        case 0x1c5718u: goto label_1c5718;
        case 0x1c571cu: goto label_1c571c;
        case 0x1c5720u: goto label_1c5720;
        case 0x1c5724u: goto label_1c5724;
        case 0x1c5728u: goto label_1c5728;
        case 0x1c572cu: goto label_1c572c;
        case 0x1c5730u: goto label_1c5730;
        case 0x1c5734u: goto label_1c5734;
        case 0x1c5738u: goto label_1c5738;
        case 0x1c573cu: goto label_1c573c;
        case 0x1c5740u: goto label_1c5740;
        case 0x1c5744u: goto label_1c5744;
        case 0x1c5748u: goto label_1c5748;
        case 0x1c574cu: goto label_1c574c;
        case 0x1c5750u: goto label_1c5750;
        case 0x1c5754u: goto label_1c5754;
        case 0x1c5758u: goto label_1c5758;
        case 0x1c575cu: goto label_1c575c;
        case 0x1c5760u: goto label_1c5760;
        case 0x1c5764u: goto label_1c5764;
        case 0x1c5768u: goto label_1c5768;
        case 0x1c576cu: goto label_1c576c;
        case 0x1c5770u: goto label_1c5770;
        case 0x1c5774u: goto label_1c5774;
        case 0x1c5778u: goto label_1c5778;
        case 0x1c577cu: goto label_1c577c;
        case 0x1c5780u: goto label_1c5780;
        case 0x1c5784u: goto label_1c5784;
        case 0x1c5788u: goto label_1c5788;
        case 0x1c578cu: goto label_1c578c;
        case 0x1c5790u: goto label_1c5790;
        case 0x1c5794u: goto label_1c5794;
        case 0x1c5798u: goto label_1c5798;
        case 0x1c579cu: goto label_1c579c;
        case 0x1c57a0u: goto label_1c57a0;
        case 0x1c57a4u: goto label_1c57a4;
        case 0x1c57a8u: goto label_1c57a8;
        case 0x1c57acu: goto label_1c57ac;
        case 0x1c57b0u: goto label_1c57b0;
        case 0x1c57b4u: goto label_1c57b4;
        case 0x1c57b8u: goto label_1c57b8;
        case 0x1c57bcu: goto label_1c57bc;
        case 0x1c57c0u: goto label_1c57c0;
        case 0x1c57c4u: goto label_1c57c4;
        case 0x1c57c8u: goto label_1c57c8;
        case 0x1c57ccu: goto label_1c57cc;
        case 0x1c57d0u: goto label_1c57d0;
        case 0x1c57d4u: goto label_1c57d4;
        case 0x1c57d8u: goto label_1c57d8;
        case 0x1c57dcu: goto label_1c57dc;
        case 0x1c57e0u: goto label_1c57e0;
        case 0x1c57e4u: goto label_1c57e4;
        case 0x1c57e8u: goto label_1c57e8;
        case 0x1c57ecu: goto label_1c57ec;
        case 0x1c57f0u: goto label_1c57f0;
        case 0x1c57f4u: goto label_1c57f4;
        case 0x1c57f8u: goto label_1c57f8;
        case 0x1c57fcu: goto label_1c57fc;
        case 0x1c5800u: goto label_1c5800;
        case 0x1c5804u: goto label_1c5804;
        case 0x1c5808u: goto label_1c5808;
        case 0x1c580cu: goto label_1c580c;
        case 0x1c5810u: goto label_1c5810;
        case 0x1c5814u: goto label_1c5814;
        case 0x1c5818u: goto label_1c5818;
        case 0x1c581cu: goto label_1c581c;
        case 0x1c5820u: goto label_1c5820;
        case 0x1c5824u: goto label_1c5824;
        case 0x1c5828u: goto label_1c5828;
        case 0x1c582cu: goto label_1c582c;
        case 0x1c5830u: goto label_1c5830;
        case 0x1c5834u: goto label_1c5834;
        case 0x1c5838u: goto label_1c5838;
        case 0x1c583cu: goto label_1c583c;
        case 0x1c5840u: goto label_1c5840;
        case 0x1c5844u: goto label_1c5844;
        case 0x1c5848u: goto label_1c5848;
        case 0x1c584cu: goto label_1c584c;
        case 0x1c5850u: goto label_1c5850;
        case 0x1c5854u: goto label_1c5854;
        case 0x1c5858u: goto label_1c5858;
        case 0x1c585cu: goto label_1c585c;
        case 0x1c5860u: goto label_1c5860;
        case 0x1c5864u: goto label_1c5864;
        case 0x1c5868u: goto label_1c5868;
        case 0x1c586cu: goto label_1c586c;
        case 0x1c5870u: goto label_1c5870;
        case 0x1c5874u: goto label_1c5874;
        case 0x1c5878u: goto label_1c5878;
        case 0x1c587cu: goto label_1c587c;
        case 0x1c5880u: goto label_1c5880;
        case 0x1c5884u: goto label_1c5884;
        case 0x1c5888u: goto label_1c5888;
        case 0x1c588cu: goto label_1c588c;
        case 0x1c5890u: goto label_1c5890;
        case 0x1c5894u: goto label_1c5894;
        case 0x1c5898u: goto label_1c5898;
        case 0x1c589cu: goto label_1c589c;
        case 0x1c58a0u: goto label_1c58a0;
        case 0x1c58a4u: goto label_1c58a4;
        case 0x1c58a8u: goto label_1c58a8;
        case 0x1c58acu: goto label_1c58ac;
        case 0x1c58b0u: goto label_1c58b0;
        case 0x1c58b4u: goto label_1c58b4;
        case 0x1c58b8u: goto label_1c58b8;
        case 0x1c58bcu: goto label_1c58bc;
        case 0x1c58c0u: goto label_1c58c0;
        case 0x1c58c4u: goto label_1c58c4;
        case 0x1c58c8u: goto label_1c58c8;
        case 0x1c58ccu: goto label_1c58cc;
        case 0x1c58d0u: goto label_1c58d0;
        case 0x1c58d4u: goto label_1c58d4;
        case 0x1c58d8u: goto label_1c58d8;
        case 0x1c58dcu: goto label_1c58dc;
        case 0x1c58e0u: goto label_1c58e0;
        case 0x1c58e4u: goto label_1c58e4;
        case 0x1c58e8u: goto label_1c58e8;
        case 0x1c58ecu: goto label_1c58ec;
        case 0x1c58f0u: goto label_1c58f0;
        case 0x1c58f4u: goto label_1c58f4;
        case 0x1c58f8u: goto label_1c58f8;
        case 0x1c58fcu: goto label_1c58fc;
        case 0x1c5900u: goto label_1c5900;
        case 0x1c5904u: goto label_1c5904;
        case 0x1c5908u: goto label_1c5908;
        case 0x1c590cu: goto label_1c590c;
        case 0x1c5910u: goto label_1c5910;
        case 0x1c5914u: goto label_1c5914;
        case 0x1c5918u: goto label_1c5918;
        case 0x1c591cu: goto label_1c591c;
        case 0x1c5920u: goto label_1c5920;
        case 0x1c5924u: goto label_1c5924;
        case 0x1c5928u: goto label_1c5928;
        case 0x1c592cu: goto label_1c592c;
        case 0x1c5930u: goto label_1c5930;
        case 0x1c5934u: goto label_1c5934;
        case 0x1c5938u: goto label_1c5938;
        case 0x1c593cu: goto label_1c593c;
        case 0x1c5940u: goto label_1c5940;
        case 0x1c5944u: goto label_1c5944;
        case 0x1c5948u: goto label_1c5948;
        case 0x1c594cu: goto label_1c594c;
        case 0x1c5950u: goto label_1c5950;
        case 0x1c5954u: goto label_1c5954;
        case 0x1c5958u: goto label_1c5958;
        case 0x1c595cu: goto label_1c595c;
        case 0x1c5960u: goto label_1c5960;
        case 0x1c5964u: goto label_1c5964;
        case 0x1c5968u: goto label_1c5968;
        case 0x1c596cu: goto label_1c596c;
        case 0x1c5970u: goto label_1c5970;
        case 0x1c5974u: goto label_1c5974;
        case 0x1c5978u: goto label_1c5978;
        case 0x1c597cu: goto label_1c597c;
        case 0x1c5980u: goto label_1c5980;
        case 0x1c5984u: goto label_1c5984;
        case 0x1c5988u: goto label_1c5988;
        case 0x1c598cu: goto label_1c598c;
        case 0x1c5990u: goto label_1c5990;
        case 0x1c5994u: goto label_1c5994;
        case 0x1c5998u: goto label_1c5998;
        case 0x1c599cu: goto label_1c599c;
        case 0x1c59a0u: goto label_1c59a0;
        case 0x1c59a4u: goto label_1c59a4;
        case 0x1c59a8u: goto label_1c59a8;
        case 0x1c59acu: goto label_1c59ac;
        case 0x1c59b0u: goto label_1c59b0;
        case 0x1c59b4u: goto label_1c59b4;
        case 0x1c59b8u: goto label_1c59b8;
        case 0x1c59bcu: goto label_1c59bc;
        case 0x1c59c0u: goto label_1c59c0;
        case 0x1c59c4u: goto label_1c59c4;
        case 0x1c59c8u: goto label_1c59c8;
        case 0x1c59ccu: goto label_1c59cc;
        case 0x1c59d0u: goto label_1c59d0;
        case 0x1c59d4u: goto label_1c59d4;
        case 0x1c59d8u: goto label_1c59d8;
        case 0x1c59dcu: goto label_1c59dc;
        case 0x1c59e0u: goto label_1c59e0;
        case 0x1c59e4u: goto label_1c59e4;
        case 0x1c59e8u: goto label_1c59e8;
        case 0x1c59ecu: goto label_1c59ec;
        case 0x1c59f0u: goto label_1c59f0;
        case 0x1c59f4u: goto label_1c59f4;
        case 0x1c59f8u: goto label_1c59f8;
        case 0x1c59fcu: goto label_1c59fc;
        case 0x1c5a00u: goto label_1c5a00;
        case 0x1c5a04u: goto label_1c5a04;
        case 0x1c5a08u: goto label_1c5a08;
        case 0x1c5a0cu: goto label_1c5a0c;
        case 0x1c5a10u: goto label_1c5a10;
        case 0x1c5a14u: goto label_1c5a14;
        case 0x1c5a18u: goto label_1c5a18;
        case 0x1c5a1cu: goto label_1c5a1c;
        case 0x1c5a20u: goto label_1c5a20;
        case 0x1c5a24u: goto label_1c5a24;
        case 0x1c5a28u: goto label_1c5a28;
        case 0x1c5a2cu: goto label_1c5a2c;
        case 0x1c5a30u: goto label_1c5a30;
        case 0x1c5a34u: goto label_1c5a34;
        case 0x1c5a38u: goto label_1c5a38;
        case 0x1c5a3cu: goto label_1c5a3c;
        case 0x1c5a40u: goto label_1c5a40;
        case 0x1c5a44u: goto label_1c5a44;
        case 0x1c5a48u: goto label_1c5a48;
        case 0x1c5a4cu: goto label_1c5a4c;
        case 0x1c5a50u: goto label_1c5a50;
        case 0x1c5a54u: goto label_1c5a54;
        case 0x1c5a58u: goto label_1c5a58;
        case 0x1c5a5cu: goto label_1c5a5c;
        case 0x1c5a60u: goto label_1c5a60;
        case 0x1c5a64u: goto label_1c5a64;
        case 0x1c5a68u: goto label_1c5a68;
        case 0x1c5a6cu: goto label_1c5a6c;
        case 0x1c5a70u: goto label_1c5a70;
        case 0x1c5a74u: goto label_1c5a74;
        case 0x1c5a78u: goto label_1c5a78;
        case 0x1c5a7cu: goto label_1c5a7c;
        case 0x1c5a80u: goto label_1c5a80;
        case 0x1c5a84u: goto label_1c5a84;
        case 0x1c5a88u: goto label_1c5a88;
        case 0x1c5a8cu: goto label_1c5a8c;
        case 0x1c5a90u: goto label_1c5a90;
        case 0x1c5a94u: goto label_1c5a94;
        case 0x1c5a98u: goto label_1c5a98;
        case 0x1c5a9cu: goto label_1c5a9c;
        case 0x1c5aa0u: goto label_1c5aa0;
        case 0x1c5aa4u: goto label_1c5aa4;
        case 0x1c5aa8u: goto label_1c5aa8;
        case 0x1c5aacu: goto label_1c5aac;
        case 0x1c5ab0u: goto label_1c5ab0;
        case 0x1c5ab4u: goto label_1c5ab4;
        case 0x1c5ab8u: goto label_1c5ab8;
        case 0x1c5abcu: goto label_1c5abc;
        case 0x1c5ac0u: goto label_1c5ac0;
        case 0x1c5ac4u: goto label_1c5ac4;
        case 0x1c5ac8u: goto label_1c5ac8;
        case 0x1c5accu: goto label_1c5acc;
        case 0x1c5ad0u: goto label_1c5ad0;
        case 0x1c5ad4u: goto label_1c5ad4;
        case 0x1c5ad8u: goto label_1c5ad8;
        case 0x1c5adcu: goto label_1c5adc;
        case 0x1c5ae0u: goto label_1c5ae0;
        case 0x1c5ae4u: goto label_1c5ae4;
        case 0x1c5ae8u: goto label_1c5ae8;
        case 0x1c5aecu: goto label_1c5aec;
        case 0x1c5af0u: goto label_1c5af0;
        case 0x1c5af4u: goto label_1c5af4;
        case 0x1c5af8u: goto label_1c5af8;
        case 0x1c5afcu: goto label_1c5afc;
        case 0x1c5b00u: goto label_1c5b00;
        case 0x1c5b04u: goto label_1c5b04;
        case 0x1c5b08u: goto label_1c5b08;
        case 0x1c5b0cu: goto label_1c5b0c;
        case 0x1c5b10u: goto label_1c5b10;
        case 0x1c5b14u: goto label_1c5b14;
        case 0x1c5b18u: goto label_1c5b18;
        case 0x1c5b1cu: goto label_1c5b1c;
        case 0x1c5b20u: goto label_1c5b20;
        case 0x1c5b24u: goto label_1c5b24;
        case 0x1c5b28u: goto label_1c5b28;
        case 0x1c5b2cu: goto label_1c5b2c;
        case 0x1c5b30u: goto label_1c5b30;
        case 0x1c5b34u: goto label_1c5b34;
        case 0x1c5b38u: goto label_1c5b38;
        case 0x1c5b3cu: goto label_1c5b3c;
        case 0x1c5b40u: goto label_1c5b40;
        case 0x1c5b44u: goto label_1c5b44;
        case 0x1c5b48u: goto label_1c5b48;
        case 0x1c5b4cu: goto label_1c5b4c;
        case 0x1c5b50u: goto label_1c5b50;
        case 0x1c5b54u: goto label_1c5b54;
        case 0x1c5b58u: goto label_1c5b58;
        case 0x1c5b5cu: goto label_1c5b5c;
        case 0x1c5b60u: goto label_1c5b60;
        case 0x1c5b64u: goto label_1c5b64;
        case 0x1c5b68u: goto label_1c5b68;
        case 0x1c5b6cu: goto label_1c5b6c;
        case 0x1c5b70u: goto label_1c5b70;
        case 0x1c5b74u: goto label_1c5b74;
        case 0x1c5b78u: goto label_1c5b78;
        case 0x1c5b7cu: goto label_1c5b7c;
        case 0x1c5b80u: goto label_1c5b80;
        case 0x1c5b84u: goto label_1c5b84;
        case 0x1c5b88u: goto label_1c5b88;
        case 0x1c5b8cu: goto label_1c5b8c;
        case 0x1c5b90u: goto label_1c5b90;
        case 0x1c5b94u: goto label_1c5b94;
        case 0x1c5b98u: goto label_1c5b98;
        case 0x1c5b9cu: goto label_1c5b9c;
        case 0x1c5ba0u: goto label_1c5ba0;
        case 0x1c5ba4u: goto label_1c5ba4;
        case 0x1c5ba8u: goto label_1c5ba8;
        case 0x1c5bacu: goto label_1c5bac;
        case 0x1c5bb0u: goto label_1c5bb0;
        case 0x1c5bb4u: goto label_1c5bb4;
        case 0x1c5bb8u: goto label_1c5bb8;
        case 0x1c5bbcu: goto label_1c5bbc;
        case 0x1c5bc0u: goto label_1c5bc0;
        case 0x1c5bc4u: goto label_1c5bc4;
        case 0x1c5bc8u: goto label_1c5bc8;
        case 0x1c5bccu: goto label_1c5bcc;
        case 0x1c5bd0u: goto label_1c5bd0;
        case 0x1c5bd4u: goto label_1c5bd4;
        case 0x1c5bd8u: goto label_1c5bd8;
        case 0x1c5bdcu: goto label_1c5bdc;
        case 0x1c5be0u: goto label_1c5be0;
        case 0x1c5be4u: goto label_1c5be4;
        case 0x1c5be8u: goto label_1c5be8;
        case 0x1c5becu: goto label_1c5bec;
        case 0x1c5bf0u: goto label_1c5bf0;
        case 0x1c5bf4u: goto label_1c5bf4;
        case 0x1c5bf8u: goto label_1c5bf8;
        case 0x1c5bfcu: goto label_1c5bfc;
        case 0x1c5c00u: goto label_1c5c00;
        case 0x1c5c04u: goto label_1c5c04;
        case 0x1c5c08u: goto label_1c5c08;
        case 0x1c5c0cu: goto label_1c5c0c;
        case 0x1c5c10u: goto label_1c5c10;
        case 0x1c5c14u: goto label_1c5c14;
        case 0x1c5c18u: goto label_1c5c18;
        case 0x1c5c1cu: goto label_1c5c1c;
        case 0x1c5c20u: goto label_1c5c20;
        case 0x1c5c24u: goto label_1c5c24;
        case 0x1c5c28u: goto label_1c5c28;
        case 0x1c5c2cu: goto label_1c5c2c;
        case 0x1c5c30u: goto label_1c5c30;
        case 0x1c5c34u: goto label_1c5c34;
        case 0x1c5c38u: goto label_1c5c38;
        case 0x1c5c3cu: goto label_1c5c3c;
        case 0x1c5c40u: goto label_1c5c40;
        case 0x1c5c44u: goto label_1c5c44;
        case 0x1c5c48u: goto label_1c5c48;
        case 0x1c5c4cu: goto label_1c5c4c;
        case 0x1c5c50u: goto label_1c5c50;
        case 0x1c5c54u: goto label_1c5c54;
        case 0x1c5c58u: goto label_1c5c58;
        case 0x1c5c5cu: goto label_1c5c5c;
        case 0x1c5c60u: goto label_1c5c60;
        case 0x1c5c64u: goto label_1c5c64;
        case 0x1c5c68u: goto label_1c5c68;
        case 0x1c5c6cu: goto label_1c5c6c;
        case 0x1c5c70u: goto label_1c5c70;
        case 0x1c5c74u: goto label_1c5c74;
        case 0x1c5c78u: goto label_1c5c78;
        case 0x1c5c7cu: goto label_1c5c7c;
        case 0x1c5c80u: goto label_1c5c80;
        case 0x1c5c84u: goto label_1c5c84;
        case 0x1c5c88u: goto label_1c5c88;
        case 0x1c5c8cu: goto label_1c5c8c;
        case 0x1c5c90u: goto label_1c5c90;
        case 0x1c5c94u: goto label_1c5c94;
        case 0x1c5c98u: goto label_1c5c98;
        case 0x1c5c9cu: goto label_1c5c9c;
        case 0x1c5ca0u: goto label_1c5ca0;
        case 0x1c5ca4u: goto label_1c5ca4;
        case 0x1c5ca8u: goto label_1c5ca8;
        case 0x1c5cacu: goto label_1c5cac;
        case 0x1c5cb0u: goto label_1c5cb0;
        case 0x1c5cb4u: goto label_1c5cb4;
        case 0x1c5cb8u: goto label_1c5cb8;
        case 0x1c5cbcu: goto label_1c5cbc;
        case 0x1c5cc0u: goto label_1c5cc0;
        case 0x1c5cc4u: goto label_1c5cc4;
        case 0x1c5cc8u: goto label_1c5cc8;
        case 0x1c5cccu: goto label_1c5ccc;
        case 0x1c5cd0u: goto label_1c5cd0;
        case 0x1c5cd4u: goto label_1c5cd4;
        case 0x1c5cd8u: goto label_1c5cd8;
        case 0x1c5cdcu: goto label_1c5cdc;
        case 0x1c5ce0u: goto label_1c5ce0;
        case 0x1c5ce4u: goto label_1c5ce4;
        case 0x1c5ce8u: goto label_1c5ce8;
        case 0x1c5cecu: goto label_1c5cec;
        case 0x1c5cf0u: goto label_1c5cf0;
        case 0x1c5cf4u: goto label_1c5cf4;
        case 0x1c5cf8u: goto label_1c5cf8;
        case 0x1c5cfcu: goto label_1c5cfc;
        case 0x1c5d00u: goto label_1c5d00;
        case 0x1c5d04u: goto label_1c5d04;
        case 0x1c5d08u: goto label_1c5d08;
        case 0x1c5d0cu: goto label_1c5d0c;
        case 0x1c5d10u: goto label_1c5d10;
        case 0x1c5d14u: goto label_1c5d14;
        case 0x1c5d18u: goto label_1c5d18;
        case 0x1c5d1cu: goto label_1c5d1c;
        case 0x1c5d20u: goto label_1c5d20;
        case 0x1c5d24u: goto label_1c5d24;
        case 0x1c5d28u: goto label_1c5d28;
        case 0x1c5d2cu: goto label_1c5d2c;
        case 0x1c5d30u: goto label_1c5d30;
        case 0x1c5d34u: goto label_1c5d34;
        case 0x1c5d38u: goto label_1c5d38;
        case 0x1c5d3cu: goto label_1c5d3c;
        case 0x1c5d40u: goto label_1c5d40;
        case 0x1c5d44u: goto label_1c5d44;
        case 0x1c5d48u: goto label_1c5d48;
        case 0x1c5d4cu: goto label_1c5d4c;
        case 0x1c5d50u: goto label_1c5d50;
        case 0x1c5d54u: goto label_1c5d54;
        case 0x1c5d58u: goto label_1c5d58;
        case 0x1c5d5cu: goto label_1c5d5c;
        case 0x1c5d60u: goto label_1c5d60;
        case 0x1c5d64u: goto label_1c5d64;
        case 0x1c5d68u: goto label_1c5d68;
        case 0x1c5d6cu: goto label_1c5d6c;
        case 0x1c5d70u: goto label_1c5d70;
        case 0x1c5d74u: goto label_1c5d74;
        case 0x1c5d78u: goto label_1c5d78;
        case 0x1c5d7cu: goto label_1c5d7c;
        case 0x1c5d80u: goto label_1c5d80;
        case 0x1c5d84u: goto label_1c5d84;
        case 0x1c5d88u: goto label_1c5d88;
        case 0x1c5d8cu: goto label_1c5d8c;
        case 0x1c5d90u: goto label_1c5d90;
        case 0x1c5d94u: goto label_1c5d94;
        case 0x1c5d98u: goto label_1c5d98;
        case 0x1c5d9cu: goto label_1c5d9c;
        case 0x1c5da0u: goto label_1c5da0;
        case 0x1c5da4u: goto label_1c5da4;
        case 0x1c5da8u: goto label_1c5da8;
        case 0x1c5dacu: goto label_1c5dac;
        case 0x1c5db0u: goto label_1c5db0;
        case 0x1c5db4u: goto label_1c5db4;
        case 0x1c5db8u: goto label_1c5db8;
        case 0x1c5dbcu: goto label_1c5dbc;
        case 0x1c5dc0u: goto label_1c5dc0;
        case 0x1c5dc4u: goto label_1c5dc4;
        case 0x1c5dc8u: goto label_1c5dc8;
        case 0x1c5dccu: goto label_1c5dcc;
        case 0x1c5dd0u: goto label_1c5dd0;
        case 0x1c5dd4u: goto label_1c5dd4;
        case 0x1c5dd8u: goto label_1c5dd8;
        case 0x1c5ddcu: goto label_1c5ddc;
        case 0x1c5de0u: goto label_1c5de0;
        case 0x1c5de4u: goto label_1c5de4;
        case 0x1c5de8u: goto label_1c5de8;
        case 0x1c5decu: goto label_1c5dec;
        case 0x1c5df0u: goto label_1c5df0;
        case 0x1c5df4u: goto label_1c5df4;
        case 0x1c5df8u: goto label_1c5df8;
        case 0x1c5dfcu: goto label_1c5dfc;
        case 0x1c5e00u: goto label_1c5e00;
        case 0x1c5e04u: goto label_1c5e04;
        case 0x1c5e08u: goto label_1c5e08;
        case 0x1c5e0cu: goto label_1c5e0c;
        case 0x1c5e10u: goto label_1c5e10;
        case 0x1c5e14u: goto label_1c5e14;
        case 0x1c5e18u: goto label_1c5e18;
        case 0x1c5e1cu: goto label_1c5e1c;
        case 0x1c5e20u: goto label_1c5e20;
        case 0x1c5e24u: goto label_1c5e24;
        case 0x1c5e28u: goto label_1c5e28;
        case 0x1c5e2cu: goto label_1c5e2c;
        case 0x1c5e30u: goto label_1c5e30;
        case 0x1c5e34u: goto label_1c5e34;
        case 0x1c5e38u: goto label_1c5e38;
        case 0x1c5e3cu: goto label_1c5e3c;
        case 0x1c5e40u: goto label_1c5e40;
        case 0x1c5e44u: goto label_1c5e44;
        case 0x1c5e48u: goto label_1c5e48;
        case 0x1c5e4cu: goto label_1c5e4c;
        case 0x1c5e50u: goto label_1c5e50;
        case 0x1c5e54u: goto label_1c5e54;
        case 0x1c5e58u: goto label_1c5e58;
        case 0x1c5e5cu: goto label_1c5e5c;
        case 0x1c5e60u: goto label_1c5e60;
        case 0x1c5e64u: goto label_1c5e64;
        case 0x1c5e68u: goto label_1c5e68;
        case 0x1c5e6cu: goto label_1c5e6c;
        case 0x1c5e70u: goto label_1c5e70;
        case 0x1c5e74u: goto label_1c5e74;
        case 0x1c5e78u: goto label_1c5e78;
        case 0x1c5e7cu: goto label_1c5e7c;
        case 0x1c5e80u: goto label_1c5e80;
        case 0x1c5e84u: goto label_1c5e84;
        case 0x1c5e88u: goto label_1c5e88;
        case 0x1c5e8cu: goto label_1c5e8c;
        case 0x1c5e90u: goto label_1c5e90;
        case 0x1c5e94u: goto label_1c5e94;
        case 0x1c5e98u: goto label_1c5e98;
        case 0x1c5e9cu: goto label_1c5e9c;
        case 0x1c5ea0u: goto label_1c5ea0;
        case 0x1c5ea4u: goto label_1c5ea4;
        case 0x1c5ea8u: goto label_1c5ea8;
        case 0x1c5eacu: goto label_1c5eac;
        case 0x1c5eb0u: goto label_1c5eb0;
        case 0x1c5eb4u: goto label_1c5eb4;
        case 0x1c5eb8u: goto label_1c5eb8;
        case 0x1c5ebcu: goto label_1c5ebc;
        case 0x1c5ec0u: goto label_1c5ec0;
        case 0x1c5ec4u: goto label_1c5ec4;
        case 0x1c5ec8u: goto label_1c5ec8;
        case 0x1c5eccu: goto label_1c5ecc;
        case 0x1c5ed0u: goto label_1c5ed0;
        case 0x1c5ed4u: goto label_1c5ed4;
        case 0x1c5ed8u: goto label_1c5ed8;
        case 0x1c5edcu: goto label_1c5edc;
        case 0x1c5ee0u: goto label_1c5ee0;
        case 0x1c5ee4u: goto label_1c5ee4;
        case 0x1c5ee8u: goto label_1c5ee8;
        case 0x1c5eecu: goto label_1c5eec;
        case 0x1c5ef0u: goto label_1c5ef0;
        case 0x1c5ef4u: goto label_1c5ef4;
        case 0x1c5ef8u: goto label_1c5ef8;
        case 0x1c5efcu: goto label_1c5efc;
        case 0x1c5f00u: goto label_1c5f00;
        case 0x1c5f04u: goto label_1c5f04;
        case 0x1c5f08u: goto label_1c5f08;
        case 0x1c5f0cu: goto label_1c5f0c;
        case 0x1c5f10u: goto label_1c5f10;
        case 0x1c5f14u: goto label_1c5f14;
        case 0x1c5f18u: goto label_1c5f18;
        case 0x1c5f1cu: goto label_1c5f1c;
        case 0x1c5f20u: goto label_1c5f20;
        case 0x1c5f24u: goto label_1c5f24;
        case 0x1c5f28u: goto label_1c5f28;
        case 0x1c5f2cu: goto label_1c5f2c;
        case 0x1c5f30u: goto label_1c5f30;
        case 0x1c5f34u: goto label_1c5f34;
        case 0x1c5f38u: goto label_1c5f38;
        case 0x1c5f3cu: goto label_1c5f3c;
        default: break;
    }

    ctx->pc = 0x1c3fc0u;

label_1c3fc0:
    // 0x1c3fc0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1c3fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_1c3fc4:
    // 0x1c3fc4: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x1c3fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
label_1c3fc8:
    // 0x1c3fc8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c3fc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c3fcc:
    // 0x1c3fcc: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x1c3fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
label_1c3fd0:
    // 0x1c3fd0: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1c3fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_1c3fd4:
    // 0x1c3fd4: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x1c3fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
label_1c3fd8:
    // 0x1c3fd8: 0x7fb30140  sq          $s3, 0x140($sp)
    ctx->pc = 0x1c3fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 19));
label_1c3fdc:
    // 0x1c3fdc: 0x7fb40130  sq          $s4, 0x130($sp)
    ctx->pc = 0x1c3fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 20));
label_1c3fe0:
    // 0x1c3fe0: 0x7fb50120  sq          $s5, 0x120($sp)
    ctx->pc = 0x1c3fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 21));
label_1c3fe4:
    // 0x1c3fe4: 0x7fb60110  sq          $s6, 0x110($sp)
    ctx->pc = 0x1c3fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 22));
label_1c3fe8:
    // 0x1c3fe8: 0x7fb70100  sq          $s7, 0x100($sp)
    ctx->pc = 0x1c3fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 23));
label_1c3fec:
    // 0x1c3fec: 0x7fbe00f0  sq          $fp, 0xF0($sp)
    ctx->pc = 0x1c3fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 30));
label_1c3ff0:
    // 0x1c3ff0: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x1c3ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
label_1c3ff4:
    // 0x1c3ff4: 0xc0a4bd4  jal         func_292F50
label_1c3ff8:
    if (ctx->pc == 0x1C3FF8u) {
        ctx->pc = 0x1C3FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3FF4u;
        // 0x1c3ff8: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3FFCu;
        goto label_1c3ffc;
    }
    ctx->pc = 0x1C3FF4u;
    SET_GPR_U32(ctx, 31, 0x1C3FFCu);
    ctx->pc = 0x1C3FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3FF4u;
    // 0x1c3ff8: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1C3FF4u, 0x1C3FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3FFCu;
label_1c3ffc:
    // 0x1c3ffc: 0xc621002c  lwc1        $f1, 0x2C($s1)
    ctx->pc = 0x1c3ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c4000:
    // 0x1c4000: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1c4000u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1c4004:
    // 0x1c4004: 0xe621002c  swc1        $f1, 0x2C($s1)
    ctx->pc = 0x1c4004u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
label_1c4008:
    // 0x1c4008: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1c4008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c400c:
    // 0x1c400c: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x1c400cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c4010:
    // 0x1c4010: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1c4010u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1c4014:
    // 0x1c4014: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c4014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c4018:
    // 0x1c4018: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c4018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c401c:
    // 0x1c401c: 0xc071b2e  jal         func_1C6CB8
label_1c4020:
    if (ctx->pc == 0x1C4020u) {
        ctx->pc = 0x1C4020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C401Cu;
        // 0x1c4020: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4024u;
        goto label_1c4024;
    }
    ctx->pc = 0x1C401Cu;
    SET_GPR_U32(ctx, 31, 0x1C4024u);
    ctx->pc = 0x1C4020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C401Cu;
    // 0x1c4020: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6CB8u, 0x1C401Cu, 0x1C4024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4024u;
label_1c4024:
    // 0x1c4024: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1c4024u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1c4028:
    // 0x1c4028: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x1c4028u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1c402c:
    // 0x1c402c: 0x104007b7  beqz        $v0, . + 4 + (0x7B7 << 2)
label_1c4030:
    if (ctx->pc == 0x1C4030u) {
        ctx->pc = 0x1C4030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C402Cu;
        // 0x1c4030: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4034u;
        goto label_1c4034;
    }
    ctx->pc = 0x1C402Cu;
    {
        const bool branch_taken_0x1c402c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C402Cu;
        // 0x1c4030: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c402c) {
            ctx->pc = 0x1C5F0Cu;
            goto label_1c5f0c;
        }
    }
    ctx->pc = 0x1C4034u;
label_1c4034:
    // 0x1c4034: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1c4034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_1c4038:
    // 0x1c4038: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c4038u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1c403c:
    // 0x1c403c: 0x24429da0  addiu       $v0, $v0, -0x6260
    ctx->pc = 0x1c403cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942112));
label_1c4040:
    // 0x1c4040: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c4040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1c4044:
    // 0x1c4044: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1c4044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c4048:
    // 0x1c4048: 0x800008  jr          $a0
label_1c404c:
    if (ctx->pc == 0x1C404Cu) {
        ctx->pc = 0x1C4050u;
        goto label_1c4050;
    }
    ctx->pc = 0x1C4048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C4050u: goto label_1c4050;
            case 0x1C4738u: goto label_1c4738;
            case 0x1C4C48u: goto label_1c4c48;
            case 0x1C4C54u: goto label_1c4c54;
            case 0x1C5268u: goto label_1c5268;
            case 0x1C5274u: goto label_1c5274;
            case 0x1C5A84u: goto label_1c5a84;
            case 0x1C5F04u: goto label_1c5f04;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4048u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C4050u;
label_1c4050:
    // 0x1c4050: 0xc6220130  lwc1        $f2, 0x130($s1)
    ctx->pc = 0x1c4050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c4054:
    // 0x1c4054: 0xc6200134  lwc1        $f0, 0x134($s1)
    ctx->pc = 0x1c4054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c4058:
    // 0x1c4058: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c4058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1c405c:
    // 0x1c405c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1c405cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1c4060:
    // 0x1c4060: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x1c4060u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1c4064:
    // 0x1c4064: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x1c4064u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c4068:
    // 0x1c4068: 0x0  nop
    ctx->pc = 0x1c4068u;
    // NOP
label_1c406c:
    // 0x1c406c: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
label_1c4070:
    if (ctx->pc == 0x1C4070u) {
        ctx->pc = 0x1C4070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C406Cu;
        // 0x1c4070: 0xc6230030  lwc1        $f3, 0x30($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4074u;
        goto label_1c4074;
    }
    ctx->pc = 0x1C406Cu;
    {
        const bool branch_taken_0x1c406c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c406c) {
            ctx->pc = 0x1C4070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C406Cu;
            // 0x1c4070: 0xc6230030  lwc1        $f3, 0x30($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4098u;
            goto label_1c4098;
        }
    }
    ctx->pc = 0x1C4074u;
label_1c4074:
    // 0x1c4074: 0x0  nop
    ctx->pc = 0x1c4074u;
    // NOP
label_1c4078:
    // 0x1c4078: 0x0  nop
    ctx->pc = 0x1c4078u;
    // NOP
label_1c407c:
    // 0x1c407c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1c407cu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
label_1c4080:
    // 0x1c4080: 0x0  nop
    ctx->pc = 0x1c4080u;
    // NOP
label_1c4084:
    // 0x1c4084: 0x0  nop
    ctx->pc = 0x1c4084u;
    // NOP
label_1c4088:
    // 0x1c4088: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1c4088u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[1]);
label_1c408c:
    // 0x1c408c: 0xe6200134  swc1        $f0, 0x134($s1)
    ctx->pc = 0x1c408cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 308), bits); }
label_1c4090:
    // 0x1c4090: 0xe6210130  swc1        $f1, 0x130($s1)
    ctx->pc = 0x1c4090u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 304), bits); }
label_1c4094:
    // 0x1c4094: 0xc6230030  lwc1        $f3, 0x30($s1)
    ctx->pc = 0x1c4094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1c4098:
    // 0x1c4098: 0xc6260130  lwc1        $f6, 0x130($s1)
    ctx->pc = 0x1c4098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1c409c:
    // 0x1c409c: 0xc6200134  lwc1        $f0, 0x134($s1)
    ctx->pc = 0x1c409cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c40a0:
    // 0x1c40a0: 0x46061842  mul.s       $f1, $f3, $f6
    ctx->pc = 0x1c40a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
label_1c40a4:
    // 0x1c40a4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c40a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1c40a8:
    // 0x1c40a8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c40a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c40ac:
    // 0x1c40ac: 0x46003140  add.s       $f5, $f6, $f0
    ctx->pc = 0x1c40acu;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
label_1c40b0:
    // 0x1c40b0: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1c40b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_1c40b4:
    // 0x1c40b4: 0xe6210034  swc1        $f1, 0x34($s1)
    ctx->pc = 0x1c40b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
label_1c40b8:
    // 0x1c40b8: 0x46052101  sub.s       $f4, $f4, $f5
    ctx->pc = 0x1c40b8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
label_1c40bc:
    // 0x1c40bc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1c40bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1c40c0:
    // 0x1c40c0: 0xe620003c  swc1        $f0, 0x3C($s1)
    ctx->pc = 0x1c40c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
label_1c40c4:
    // 0x1c40c4: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x1c40c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_1c40c8:
    // 0x1c40c8: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x1c40c8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_1c40cc:
    // 0x1c40cc: 0x46022080  add.s       $f2, $f4, $f2
    ctx->pc = 0x1c40ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
label_1c40d0:
    // 0x1c40d0: 0xe6230038  swc1        $f3, 0x38($s1)
    ctx->pc = 0x1c40d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
label_1c40d4:
    // 0x1c40d4: 0x0  nop
    ctx->pc = 0x1c40d4u;
    // NOP
label_1c40d8:
    // 0x1c40d8: 0x0  nop
    ctx->pc = 0x1c40d8u;
    // NOP
label_1c40dc:
    // 0x1c40dc: 0x46022103  div.s       $f4, $f4, $f2
    ctx->pc = 0x1c40dcu;
    ctx->f[4] = ps2FpuDivide(ctx->fcr31, ctx->f[4], ctx->f[2]);
label_1c40e0:
    // 0x1c40e0: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x1c40e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c40e4:
    // 0x1c40e4: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1c40e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c40e8:
    // 0x1c40e8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1c40e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1c40ec:
    // 0x1c40ec: 0x262300b0  addiu       $v1, $s1, 0xB0
    ctx->pc = 0x1c40ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
label_1c40f0:
    // 0x1c40f0: 0x262200d0  addiu       $v0, $s1, 0xD0
    ctx->pc = 0x1c40f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
label_1c40f4:
    // 0x1c40f4: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x1c40f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c40f8:
    // 0x1c40f8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1c40f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c40fc:
    // 0x1c40fc: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1c40fcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c4100:
    // 0x1c4100: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c4100u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c4104:
    // 0x1c4104: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1c4104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4108:
    // 0x1c4108: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1c4108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1c410c:
    // 0x1c410c: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x1c410cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1c4110:
    // 0x1c4110: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1c4110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4114:
    // 0x1c4114: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1c4114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c4118:
    // 0x1c4118: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x1c4118u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1c411c:
    // 0x1c411c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1c411cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c4120:
    // 0x1c4120: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x1c4120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c4124:
    // 0x1c4124: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1c4124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1c4128:
    // 0x1c4128: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1c4128u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1c412c:
    // 0x1c412c: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x1c412cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1c4130:
    // 0x1c4130: 0xd9240000  lqc2        $vf4, 0x0($t1)
    ctx->pc = 0x1c4130u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
label_1c4134:
    // 0x1c4134: 0xf8c40010  sqc2        $vf4, 0x10($a2)
    ctx->pc = 0x1c4134u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4138:
    // 0x1c4138: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1c4138u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c413c:
    // 0x1c413c: 0x44082000  mfc1        $t0, $f4
    ctx->pc = 0x1c413cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1c4140:
    // 0x1c4140: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1c4140u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1c4144:
    // 0x1c4144: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1c4144u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c4148:
    // 0x1c4148: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1c4148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c414c:
    // 0x1c414c: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x1c414cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1c4150:
    // 0x1c4150: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1c4150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4154:
    // 0x1c4154: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1c4154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c4158:
    // 0x1c4158: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1c4158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c415c:
    // 0x1c415c: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x1c415cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c4160:
    // 0x1c4160: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1c4160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1c4164:
    // 0x1c4164: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x1c4164u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1c4168:
    // 0x1c4168: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x1c4168u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1c416c:
    // 0x1c416c: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x1c416cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c4170:
    // 0x1c4170: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x1c4170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c4174:
    // 0x1c4174: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x1c4174u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1c4178:
    // 0x1c4178: 0x262300c0  addiu       $v1, $s1, 0xC0
    ctx->pc = 0x1c4178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
label_1c417c:
    // 0x1c417c: 0x262200e0  addiu       $v0, $s1, 0xE0
    ctx->pc = 0x1c417cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_1c4180:
    // 0x1c4180: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x1c4180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c4184:
    // 0x1c4184: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1c4184u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c4188:
    // 0x1c4188: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1c4188u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c418c:
    // 0x1c418c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c418cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c4190:
    // 0x1c4190: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1c4190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4194:
    // 0x1c4194: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c4194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1c4198:
    // 0x1c4198: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1c4198u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1c419c:
    // 0x1c419c: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1c419cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c41a0:
    // 0x1c41a0: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1c41a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c41a4:
    // 0x1c41a4: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1c41a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c41a8:
    // 0x1c41a8: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x1c41a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c41ac:
    // 0x1c41ac: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1c41acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1c41b0:
    // 0x1c41b0: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x1c41b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1c41b4:
    // 0x1c41b4: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x1c41b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1c41b8:
    // 0x1c41b8: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x1c41b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1c41bc:
    // 0x1c41bc: 0xf8e40010  sqc2        $vf4, 0x10($a3)
    ctx->pc = 0x1c41bcu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c41c0:
    // 0x1c41c0: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1c41c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1c41c4:
    // 0x1c41c4: 0x44082000  mfc1        $t0, $f4
    ctx->pc = 0x1c41c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1c41c8:
    // 0x1c41c8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1c41c8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1c41cc:
    // 0x1c41cc: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1c41ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c41d0:
    // 0x1c41d0: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1c41d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c41d4:
    // 0x1c41d4: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1c41d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1c41d8:
    // 0x1c41d8: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1c41d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c41dc:
    // 0x1c41dc: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1c41dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c41e0:
    // 0x1c41e0: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1c41e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c41e4:
    // 0x1c41e4: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x1c41e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c41e8:
    // 0x1c41e8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1c41e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1c41ec:
    // 0x1c41ec: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1c41ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1c41f0:
    // 0x1c41f0: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x1c41f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1c41f4:
    // 0x1c41f4: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x1c41f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c41f8:
    // 0x1c41f8: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x1c41f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c41fc:
    // 0x1c41fc: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x1c41fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c4200:
    // 0x1c4200: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c4200u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c4204:
    // 0x1c4204: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1c4204u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1c4208:
    // 0x1c4208: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x1c4208u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c420c:
    // 0x1c420c: 0x0  nop
    ctx->pc = 0x1c420cu;
    // NOP
label_1c4210:
    // 0x1c4210: 0x45000032  bc1f        . + 4 + (0x32 << 2)
label_1c4214:
    if (ctx->pc == 0x1C4214u) {
        ctx->pc = 0x1C4214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4210u;
        // 0x1c4214: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4218u;
        goto label_1c4218;
    }
    ctx->pc = 0x1C4210u;
    {
        const bool branch_taken_0x1c4210 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C4214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4210u;
        // 0x1c4214: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4210) {
            ctx->pc = 0x1C42DCu;
            goto label_1c42dc;
        }
    }
    ctx->pc = 0x1C4218u;
label_1c4218:
    // 0x1c4218: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1c4218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1c421c:
    // 0x1c421c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1c421cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1c4220:
    // 0x1c4220: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x1c4220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c4224:
    // 0x1c4224: 0xd9240000  lqc2        $vf4, 0x0($t1)
    ctx->pc = 0x1c4224u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
label_1c4228:
    // 0x1c4228: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1c4228u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c422c:
    // 0x1c422c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c422cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c4230:
    // 0x1c4230: 0xf8840010  sqc2        $vf4, 0x10($a0)
    ctx->pc = 0x1c4230u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4234:
    // 0x1c4234: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x1c4234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1c4238:
    // 0x1c4238: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1c4238u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c423c:
    // 0x1c423c: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1c423cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4240:
    // 0x1c4240: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x1c4240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c4244:
    // 0x1c4244: 0x0  nop
    ctx->pc = 0x1c4244u;
    // NOP
label_1c4248:
    // 0x1c4248: 0x0  nop
    ctx->pc = 0x1c4248u;
    // NOP
label_1c424c:
    // 0x1c424c: 0x460530c3  div.s       $f3, $f6, $f5
    ctx->pc = 0x1c424cu;
    ctx->f[3] = ps2FpuDivide(ctx->fcr31, ctx->f[6], ctx->f[5]);
label_1c4250:
    // 0x1c4250: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x1c4250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c4254:
    // 0x1c4254: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x1c4254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c4258:
    // 0x1c4258: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x1c4258u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1c425c:
    // 0x1c425c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1c425cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_1c4260:
    // 0x1c4260: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x1c4260u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_1c4264:
    // 0x1c4264: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x1c4264u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_1c4268:
    // 0x1c4268: 0xf8840010  sqc2        $vf4, 0x10($a0)
    ctx->pc = 0x1c4268u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c426c:
    // 0x1c426c: 0xdba400a0  lqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x1c426cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1c4270:
    // 0x1c4270: 0x44081800  mfc1        $t0, $f3
    ctx->pc = 0x1c4270u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1c4274:
    // 0x1c4274: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1c4274u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1c4278:
    // 0x1c4278: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1c4278u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c427c:
    // 0x1c427c: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x1c427cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4280:
    // 0x1c4280: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1c4280u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c4284:
    // 0x1c4284: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1c4284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4288:
    // 0x1c4288: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x1c4288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c428c:
    // 0x1c428c: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x1c428cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c4290:
    // 0x1c4290: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x1c4290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c4294:
    // 0x1c4294: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1c4294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1c4298:
    // 0x1c4298: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x1c4298u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1c429c:
    // 0x1c429c: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x1c429cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1c42a0:
    // 0x1c42a0: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x1c42a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c42a4:
    // 0x1c42a4: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1c42a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1c42a8:
    // 0x1c42a8: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x1c42a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_1c42ac:
    // 0x1c42ac: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1c42acu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c42b0:
    // 0x1c42b0: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c42b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c42b4:
    // 0x1c42b4: 0xf8840010  sqc2        $vf4, 0x10($a0)
    ctx->pc = 0x1c42b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c42b8:
    // 0x1c42b8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1c42b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c42bc:
    // 0x1c42bc: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1c42bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c42c0:
    // 0x1c42c0: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x1c42c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c42c4:
    // 0x1c42c4: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x1c42c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c42c8:
    // 0x1c42c8: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x1c42c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c42cc:
    // 0x1c42cc: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1c42ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1c42d0:
    // 0x1c42d0: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x1c42d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1c42d4:
    // 0x1c42d4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c42d8:
    if (ctx->pc == 0x1C42D8u) {
        ctx->pc = 0x1C42D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C42D4u;
        // 0x1c42d8: 0xe7a20088  swc1        $f2, 0x88($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C42DCu;
        goto label_1c42dc;
    }
    ctx->pc = 0x1C42D4u;
    {
        const bool branch_taken_0x1c42d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C42D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C42D4u;
        // 0x1c42d8: 0xe7a20088  swc1        $f2, 0x88($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c42d4) {
            ctx->pc = 0x1C42F4u;
            goto label_1c42f4;
        }
    }
    ctx->pc = 0x1C42DCu;
label_1c42dc:
    // 0x1c42dc: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x1c42dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_1c42e0:
    // 0x1c42e0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1c42e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1c42e4:
    // 0x1c42e4: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1c42e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1c42e8:
    // 0x1c42e8: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1c42e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1c42ec:
    // 0x1c42ec: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1c42ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1c42f0:
    // 0x1c42f0: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1c42f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1c42f4:
    // 0x1c42f4: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x1c42f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c42f8:
    // 0x1c42f8: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x1c42f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c42fc:
    // 0x1c42fc: 0xfba000b0  sqc2        $vf0, 0xB0($sp)
    ctx->pc = 0x1c42fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c4300:
    // 0x1c4300: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c4300u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c4304:
    // 0x1c4304: 0x0  nop
    ctx->pc = 0x1c4304u;
    // NOP
label_1c4308:
    // 0x1c4308: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x1c4308u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c430c:
    // 0x1c430c: 0x0  nop
    ctx->pc = 0x1c430cu;
    // NOP
label_1c4310:
    // 0x1c4310: 0x45000034  bc1f        . + 4 + (0x34 << 2)
label_1c4314:
    if (ctx->pc == 0x1C4314u) {
        ctx->pc = 0x1C4314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4310u;
        // 0x1c4314: 0x27a300c0  addiu       $v1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4318u;
        goto label_1c4318;
    }
    ctx->pc = 0x1C4310u;
    {
        const bool branch_taken_0x1c4310 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C4314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4310u;
        // 0x1c4314: 0x27a300c0  addiu       $v1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4310) {
            ctx->pc = 0x1C43E4u;
            goto label_1c43e4;
        }
    }
    ctx->pc = 0x1C4318u;
label_1c4318:
    // 0x1c4318: 0xfba000d0  sqc2        $vf0, 0xD0($sp)
    ctx->pc = 0x1c4318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c431c:
    // 0x1c431c: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x1c431cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_1c4320:
    // 0x1c4320: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x1c4320u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_1c4324:
    // 0x1c4324: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c4324u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c4328:
    // 0x1c4328: 0xf8640010  sqc2        $vf4, 0x10($v1)
    ctx->pc = 0x1c4328u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c432c:
    // 0x1c432c: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x1c432cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1c4330:
    // 0x1c4330: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c4330u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c4334:
    // 0x1c4334: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x1c4334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4338:
    // 0x1c4338: 0xc6200130  lwc1        $f0, 0x130($s1)
    ctx->pc = 0x1c4338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c433c:
    // 0x1c433c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1c433cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1c4340:
    // 0x1c4340: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x1c4340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c4344:
    // 0x1c4344: 0xc7a200c4  lwc1        $f2, 0xC4($sp)
    ctx->pc = 0x1c4344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c4348:
    // 0x1c4348: 0x0  nop
    ctx->pc = 0x1c4348u;
    // NOP
label_1c434c:
    // 0x1c434c: 0x0  nop
    ctx->pc = 0x1c434cu;
    // NOP
label_1c4350:
    // 0x1c4350: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x1c4350u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[5]);
label_1c4354:
    // 0x1c4354: 0xc7a300c8  lwc1        $f3, 0xC8($sp)
    ctx->pc = 0x1c4354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1c4358:
    // 0x1c4358: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x1c4358u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1c435c:
    // 0x1c435c: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x1c435cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1c4360:
    // 0x1c4360: 0xe7a30098  swc1        $f3, 0x98($sp)
    ctx->pc = 0x1c4360u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1c4364:
    // 0x1c4364: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x1c4364u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1c4368:
    // 0x1c4368: 0xf8640010  sqc2        $vf4, 0x10($v1)
    ctx->pc = 0x1c4368u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c436c:
    // 0x1c436c: 0xdba400d0  lqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x1c436cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1c4370:
    // 0x1c4370: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1c4370u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1c4374:
    // 0x1c4374: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1c4374u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1c4378:
    // 0x1c4378: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1c4378u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c437c:
    // 0x1c437c: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x1c437cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4380:
    // 0x1c4380: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c4380u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c4384:
    // 0x1c4384: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x1c4384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4388:
    // 0x1c4388: 0xc7a200c0  lwc1        $f2, 0xC0($sp)
    ctx->pc = 0x1c4388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c438c:
    // 0x1c438c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c438cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1c4390:
    // 0x1c4390: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x1c4390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c4394:
    // 0x1c4394: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x1c4394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c4398:
    // 0x1c4398: 0xe7a200a0  swc1        $f2, 0xA0($sp)
    ctx->pc = 0x1c4398u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1c439c:
    // 0x1c439c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1c439cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1c43a0:
    // 0x1c43a0: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x1c43a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_1c43a4:
    // 0x1c43a4: 0xfba000d0  sqc2        $vf0, 0xD0($sp)
    ctx->pc = 0x1c43a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c43a8:
    // 0x1c43a8: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x1c43a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1c43ac:
    // 0x1c43ac: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x1c43acu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1c43b0:
    // 0x1c43b0: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c43b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c43b4:
    // 0x1c43b4: 0xf8640010  sqc2        $vf4, 0x10($v1)
    ctx->pc = 0x1c43b4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c43b8:
    // 0x1c43b8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c43b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c43bc:
    // 0x1c43bc: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x1c43bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c43c0:
    // 0x1c43c0: 0xc7a200c0  lwc1        $f2, 0xC0($sp)
    ctx->pc = 0x1c43c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c43c4:
    // 0x1c43c4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1c43c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1c43c8:
    // 0x1c43c8: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x1c43c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c43cc:
    // 0x1c43cc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1c43ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c43d0:
    // 0x1c43d0: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1c43d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c43d4:
    // 0x1c43d4: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x1c43d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1c43d8:
    // 0x1c43d8: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x1c43d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_1c43dc:
    // 0x1c43dc: 0x10000009  b           . + 4 + (0x9 << 2)
label_1c43e0:
    if (ctx->pc == 0x1C43E0u) {
        ctx->pc = 0x1C43E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C43DCu;
        // 0x1c43e0: 0xe7a000b8  swc1        $f0, 0xB8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C43E4u;
        goto label_1c43e4;
    }
    ctx->pc = 0x1C43DCu;
    {
        const bool branch_taken_0x1c43dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C43E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C43DCu;
        // 0x1c43e0: 0xe7a000b8  swc1        $f0, 0xB8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c43dc) {
            ctx->pc = 0x1C4404u;
            goto label_1c4404;
        }
    }
    ctx->pc = 0x1C43E4u;
label_1c43e4:
    // 0x1c43e4: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1c43e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_1c43e8:
    // 0x1c43e8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1c43e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1c43ec:
    // 0x1c43ec: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1c43ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1c43f0:
    // 0x1c43f0: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x1c43f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1c43f4:
    // 0x1c43f4: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1c43f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1c43f8:
    // 0x1c43f8: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1c43f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_1c43fc:
    // 0x1c43fc: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1c43fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1c4400:
    // 0x1c4400: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1c4400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_1c4404:
    // 0x1c4404: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x1c4404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c4408:
    // 0x1c4408: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c4408u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c440c:
    // 0x1c440c: 0x0  nop
    ctx->pc = 0x1c440cu;
    // NOP
label_1c4410:
    // 0x1c4410: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c4410u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c4414:
    // 0x1c4414: 0x0  nop
    ctx->pc = 0x1c4414u;
    // NOP
label_1c4418:
    // 0x1c4418: 0x45000031  bc1f        . + 4 + (0x31 << 2)
label_1c441c:
    if (ctx->pc == 0x1C441Cu) {
        ctx->pc = 0x1C441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4418u;
        // 0x1c441c: 0x262200f0  addiu       $v0, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4420u;
        goto label_1c4420;
    }
    ctx->pc = 0x1C4418u;
    {
        const bool branch_taken_0x1c4418 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4418u;
        // 0x1c441c: 0x262200f0  addiu       $v0, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4418) {
            ctx->pc = 0x1C44E0u;
            goto label_1c44e0;
        }
    }
    ctx->pc = 0x1C4420u;
label_1c4420:
    // 0x1c4420: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1c4420u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_1c4424:
    // 0x1c4424: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1c4424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_1c4428:
    // 0x1c4428: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c4428u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c442c:
    // 0x1c442c: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x1c442cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1c4430:
    // 0x1c4430: 0x0  nop
    ctx->pc = 0x1c4430u;
    // NOP
label_1c4434:
    // 0x1c4434: 0x0  nop
    ctx->pc = 0x1c4434u;
    // NOP
label_1c4438:
    // 0x1c4438: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1c4438u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[0]);
label_1c443c:
    // 0x1c443c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1c443cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c4440:
    // 0x1c4440: 0xf8840010  sqc2        $vf4, 0x10($a0)
    ctx->pc = 0x1c4440u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4444:
    // 0x1c4444: 0xdba400d0  lqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x1c4444u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1c4448:
    // 0x1c4448: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1c4448u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1c444c:
    // 0x1c444c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1c444cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1c4450:
    // 0x1c4450: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1c4450u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c4454:
    // 0x1c4454: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x1c4454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4458:
    // 0x1c4458: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x1c4458u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_1c445c:
    // 0x1c445c: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x1c445cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4460:
    // 0x1c4460: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1c4460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c4464:
    // 0x1c4464: 0x10c40006  beq         $a2, $a0, . + 4 + (0x6 << 2)
label_1c4468:
    if (ctx->pc == 0x1C4468u) {
        ctx->pc = 0x1C4468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4464u;
        // 0x1c4468: 0xc7a000c0  lwc1        $f0, 0xC0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C446Cu;
        goto label_1c446c;
    }
    ctx->pc = 0x1C4464u;
    {
        const bool branch_taken_0x1c4464 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x1C4468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4464u;
        // 0x1c4468: 0xc7a000c0  lwc1        $f0, 0xC0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4464) {
            ctx->pc = 0x1C4480u;
            goto label_1c4480;
        }
    }
    ctx->pc = 0x1C446Cu;
label_1c446c:
    // 0x1c446c: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x1c446cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c4470:
    // 0x1c4470: 0xe62000f0  swc1        $f0, 0xF0($s1)
    ctx->pc = 0x1c4470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 240), bits); }
label_1c4474:
    // 0x1c4474: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x1c4474u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_1c4478:
    // 0x1c4478: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1c4478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c447c:
    // 0x1c447c: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x1c447cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_1c4480:
    // 0x1c4480: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x1c4480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c4484:
    // 0x1c4484: 0x26230110  addiu       $v1, $s1, 0x110
    ctx->pc = 0x1c4484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
label_1c4488:
    // 0x1c4488: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x1c4488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1c448c:
    // 0x1c448c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1c448cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_1c4490:
    // 0x1c4490: 0x0  nop
    ctx->pc = 0x1c4490u;
    // NOP
label_1c4494:
    // 0x1c4494: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1c4494u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[0]);
label_1c4498:
    // 0x1c4498: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c4498u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c449c:
    // 0x1c449c: 0xf8840010  sqc2        $vf4, 0x10($a0)
    ctx->pc = 0x1c449cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c44a0:
    // 0x1c44a0: 0xdba400d0  lqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x1c44a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1c44a4:
    // 0x1c44a4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1c44a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1c44a8:
    // 0x1c44a8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1c44a8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1c44ac:
    // 0x1c44ac: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1c44acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c44b0:
    // 0x1c44b0: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x1c44b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c44b4:
    // 0x1c44b4: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x1c44b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_1c44b8:
    // 0x1c44b8: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x1c44b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c44bc:
    // 0x1c44bc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1c44bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1c44c0:
    // 0x1c44c0: 0x10a40010  beq         $a1, $a0, . + 4 + (0x10 << 2)
label_1c44c4:
    if (ctx->pc == 0x1C44C4u) {
        ctx->pc = 0x1C44C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44C0u;
        // 0x1c44c4: 0xc7a000c0  lwc1        $f0, 0xC0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C44C8u;
        goto label_1c44c8;
    }
    ctx->pc = 0x1C44C0u;
    {
        const bool branch_taken_0x1c44c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x1C44C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44C0u;
        // 0x1c44c4: 0xc7a000c0  lwc1        $f0, 0xC0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c44c0) {
            ctx->pc = 0x1C4504u;
            goto label_1c4504;
        }
    }
    ctx->pc = 0x1C44C8u;
label_1c44c8:
    // 0x1c44c8: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x1c44c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c44cc:
    // 0x1c44cc: 0xe6200110  swc1        $f0, 0x110($s1)
    ctx->pc = 0x1c44ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 272), bits); }
label_1c44d0:
    // 0x1c44d0: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x1c44d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_1c44d4:
    // 0x1c44d4: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1c44d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c44d8:
    // 0x1c44d8: 0x1000000a  b           . + 4 + (0xA << 2)
label_1c44dc:
    if (ctx->pc == 0x1C44DCu) {
        ctx->pc = 0x1C44DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44D8u;
        // 0x1c44dc: 0xe4a00008  swc1        $f0, 0x8($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C44E0u;
        goto label_1c44e0;
    }
    ctx->pc = 0x1C44D8u;
    {
        const bool branch_taken_0x1c44d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C44DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44D8u;
        // 0x1c44dc: 0xe4a00008  swc1        $f0, 0x8($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c44d8) {
            ctx->pc = 0x1C4504u;
            goto label_1c4504;
        }
    }
    ctx->pc = 0x1C44E0u;
label_1c44e0:
    // 0x1c44e0: 0xe62100f0  swc1        $f1, 0xF0($s1)
    ctx->pc = 0x1c44e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 240), bits); }
label_1c44e4:
    // 0x1c44e4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c44e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1c44e8:
    // 0x1c44e8: 0x26230110  addiu       $v1, $s1, 0x110
    ctx->pc = 0x1c44e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
label_1c44ec:
    // 0x1c44ec: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1c44ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1c44f0:
    // 0x1c44f0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1c44f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c44f4:
    // 0x1c44f4: 0xe6210110  swc1        $f1, 0x110($s1)
    ctx->pc = 0x1c44f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 272), bits); }
label_1c44f8:
    // 0x1c44f8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1c44f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1c44fc:
    // 0x1c44fc: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x1c44fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1c4500:
    // 0x1c4500: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1c4500u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1c4504:
    // 0x1c4504: 0xc620003c  lwc1        $f0, 0x3C($s1)
    ctx->pc = 0x1c4504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c4508:
    // 0x1c4508: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c4508u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c450c:
    // 0x1c450c: 0x0  nop
    ctx->pc = 0x1c450cu;
    // NOP
label_1c4510:
    // 0x1c4510: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c4510u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c4514:
    // 0x1c4514: 0x0  nop
    ctx->pc = 0x1c4514u;
    // NOP
label_1c4518:
    // 0x1c4518: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
label_1c451c:
    if (ctx->pc == 0x1C451Cu) {
        ctx->pc = 0x1C451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4518u;
        // 0x1c451c: 0x27a20080  addiu       $v0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4520u;
        goto label_1c4520;
    }
    ctx->pc = 0x1C4518u;
    {
        const bool branch_taken_0x1c4518 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4518u;
        // 0x1c451c: 0x27a20080  addiu       $v0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4518) {
            ctx->pc = 0x1C45D8u;
            goto label_1c45d8;
        }
    }
    ctx->pc = 0x1C4520u;
label_1c4520:
    // 0x1c4520: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1c4520u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_1c4524:
    // 0x1c4524: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x1c4524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
label_1c4528:
    // 0x1c4528: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c4528u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c452c:
    // 0x1c452c: 0x26230100  addiu       $v1, $s1, 0x100
    ctx->pc = 0x1c452cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_1c4530:
    // 0x1c4530: 0x0  nop
    ctx->pc = 0x1c4530u;
    // NOP
label_1c4534:
    // 0x1c4534: 0x0  nop
    ctx->pc = 0x1c4534u;
    // NOP
label_1c4538:
    // 0x1c4538: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1c4538u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[0]);
label_1c453c:
    // 0x1c453c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c453cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c4540:
    // 0x1c4540: 0xf8840010  sqc2        $vf4, 0x10($a0)
    ctx->pc = 0x1c4540u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4544:
    // 0x1c4544: 0xdba400d0  lqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x1c4544u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1c4548:
    // 0x1c4548: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1c4548u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1c454c:
    // 0x1c454c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1c454cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1c4550:
    // 0x1c4550: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1c4550u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c4554:
    // 0x1c4554: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x1c4554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4558:
    // 0x1c4558: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x1c4558u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_1c455c:
    // 0x1c455c: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x1c455cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4560:
    // 0x1c4560: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
label_1c4564:
    if (ctx->pc == 0x1C4564u) {
        ctx->pc = 0x1C4564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4560u;
        // 0x1c4564: 0xc7a000c0  lwc1        $f0, 0xC0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4568u;
        goto label_1c4568;
    }
    ctx->pc = 0x1C4560u;
    {
        const bool branch_taken_0x1c4560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1C4564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4560u;
        // 0x1c4564: 0xc7a000c0  lwc1        $f0, 0xC0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4560) {
            ctx->pc = 0x1C457Cu;
            goto label_1c457c;
        }
    }
    ctx->pc = 0x1C4568u;
label_1c4568:
    // 0x1c4568: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x1c4568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c456c:
    // 0x1c456c: 0xe6200100  swc1        $f0, 0x100($s1)
    ctx->pc = 0x1c456cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 256), bits); }
label_1c4570:
    // 0x1c4570: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1c4570u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1c4574:
    // 0x1c4574: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1c4574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c4578:
    // 0x1c4578: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1c4578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1c457c:
    // 0x1c457c: 0xc620003c  lwc1        $f0, 0x3C($s1)
    ctx->pc = 0x1c457cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c4580:
    // 0x1c4580: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x1c4580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1c4584:
    // 0x1c4584: 0x26230120  addiu       $v1, $s1, 0x120
    ctx->pc = 0x1c4584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
label_1c4588:
    // 0x1c4588: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1c4588u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_1c458c:
    // 0x1c458c: 0x0  nop
    ctx->pc = 0x1c458cu;
    // NOP
label_1c4590:
    // 0x1c4590: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1c4590u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[0]);
label_1c4594:
    // 0x1c4594: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c4594u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c4598:
    // 0x1c4598: 0xf8840010  sqc2        $vf4, 0x10($a0)
    ctx->pc = 0x1c4598u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c459c:
    // 0x1c459c: 0xdba400d0  lqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x1c459cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1c45a0:
    // 0x1c45a0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1c45a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1c45a4:
    // 0x1c45a4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1c45a4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1c45a8:
    // 0x1c45a8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1c45a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c45ac:
    // 0x1c45ac: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x1c45acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c45b0:
    // 0x1c45b0: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x1c45b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_1c45b4:
    // 0x1c45b4: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x1c45b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c45b8:
    // 0x1c45b8: 0x1064000f  beq         $v1, $a0, . + 4 + (0xF << 2)
label_1c45bc:
    if (ctx->pc == 0x1C45BCu) {
        ctx->pc = 0x1C45BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C45B8u;
        // 0x1c45bc: 0xc7a000c0  lwc1        $f0, 0xC0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C45C0u;
        goto label_1c45c0;
    }
    ctx->pc = 0x1C45B8u;
    {
        const bool branch_taken_0x1c45b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1C45BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C45B8u;
        // 0x1c45bc: 0xc7a000c0  lwc1        $f0, 0xC0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c45b8) {
            ctx->pc = 0x1C45F8u;
            goto label_1c45f8;
        }
    }
    ctx->pc = 0x1C45C0u;
label_1c45c0:
    // 0x1c45c0: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x1c45c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c45c4:
    // 0x1c45c4: 0xe6200120  swc1        $f0, 0x120($s1)
    ctx->pc = 0x1c45c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 288), bits); }
label_1c45c8:
    // 0x1c45c8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1c45c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1c45cc:
    // 0x1c45cc: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1c45ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c45d0:
    // 0x1c45d0: 0x10000009  b           . + 4 + (0x9 << 2)
label_1c45d4:
    if (ctx->pc == 0x1C45D4u) {
        ctx->pc = 0x1C45D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C45D0u;
        // 0x1c45d4: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C45D8u;
        goto label_1c45d8;
    }
    ctx->pc = 0x1C45D0u;
    {
        const bool branch_taken_0x1c45d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C45D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C45D0u;
        // 0x1c45d4: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c45d0) {
            ctx->pc = 0x1C45F8u;
            goto label_1c45f8;
        }
    }
    ctx->pc = 0x1C45D8u;
label_1c45d8:
    // 0x1c45d8: 0xe6210100  swc1        $f1, 0x100($s1)
    ctx->pc = 0x1c45d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 256), bits); }
label_1c45dc:
    // 0x1c45dc: 0x26220100  addiu       $v0, $s1, 0x100
    ctx->pc = 0x1c45dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_1c45e0:
    // 0x1c45e0: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1c45e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1c45e4:
    // 0x1c45e4: 0x26230120  addiu       $v1, $s1, 0x120
    ctx->pc = 0x1c45e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
label_1c45e8:
    // 0x1c45e8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c45e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1c45ec:
    // 0x1c45ec: 0xe6210120  swc1        $f1, 0x120($s1)
    ctx->pc = 0x1c45ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 288), bits); }
label_1c45f0:
    // 0x1c45f0: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x1c45f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1c45f4:
    // 0x1c45f4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1c45f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1c45f8:
    // 0x1c45f8: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x1c45f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c45fc:
    // 0x1c45fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c45fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c4600:
    // 0x1c4600: 0x0  nop
    ctx->pc = 0x1c4600u;
    // NOP
label_1c4604:
    // 0x1c4604: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c4604u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c4608:
    // 0x1c4608: 0x0  nop
    ctx->pc = 0x1c4608u;
    // NOP
label_1c460c:
    // 0x1c460c: 0x45000020  bc1f        . + 4 + (0x20 << 2)
label_1c4610:
    if (ctx->pc == 0x1C4610u) {
        ctx->pc = 0x1C4610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C460Cu;
        // 0x1c4610: 0x27a20020  addiu       $v0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4614u;
        goto label_1c4614;
    }
    ctx->pc = 0x1C460Cu;
    {
        const bool branch_taken_0x1c460c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C4610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C460Cu;
        // 0x1c4610: 0x27a20020  addiu       $v0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c460c) {
            ctx->pc = 0x1C4690u;
            goto label_1c4690;
        }
    }
    ctx->pc = 0x1C4614u;
label_1c4614:
    // 0x1c4614: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c4614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1c4618:
    // 0x1c4618: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c4618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c461c:
    // 0x1c461c: 0x26230050  addiu       $v1, $s1, 0x50
    ctx->pc = 0x1c461cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_1c4620:
    // 0x1c4620: 0x0  nop
    ctx->pc = 0x1c4620u;
    // NOP
label_1c4624:
    // 0x1c4624: 0x0  nop
    ctx->pc = 0x1c4624u;
    // NOP
label_1c4628:
    // 0x1c4628: 0x46011003  div.s       $f0, $f2, $f1
    ctx->pc = 0x1c4628u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[1]);
label_1c462c:
    // 0x1c462c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c462cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c4630:
    // 0x1c4630: 0xf8840010  sqc2        $vf4, 0x10($a0)
    ctx->pc = 0x1c4630u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4634:
    // 0x1c4634: 0xdba400d0  lqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x1c4634u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1c4638:
    // 0x1c4638: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1c4638u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1c463c:
    // 0x1c463c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1c463cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1c4640:
    // 0x1c4640: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1c4640u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c4644:
    // 0x1c4644: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x1c4644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4648:
    // 0x1c4648: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x1c4648u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_1c464c:
    // 0x1c464c: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x1c464cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4650:
    // 0x1c4650: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
label_1c4654:
    if (ctx->pc == 0x1C4654u) {
        ctx->pc = 0x1C4654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4650u;
        // 0x1c4654: 0xc7a000c0  lwc1        $f0, 0xC0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4658u;
        goto label_1c4658;
    }
    ctx->pc = 0x1C4650u;
    {
        const bool branch_taken_0x1c4650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1C4654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4650u;
        // 0x1c4654: 0xc7a000c0  lwc1        $f0, 0xC0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4650) {
            ctx->pc = 0x1C466Cu;
            goto label_1c466c;
        }
    }
    ctx->pc = 0x1C4658u;
label_1c4658:
    // 0x1c4658: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x1c4658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c465c:
    // 0x1c465c: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x1c465cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
label_1c4660:
    // 0x1c4660: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1c4660u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1c4664:
    // 0x1c4664: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1c4664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c4668:
    // 0x1c4668: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1c4668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1c466c:
    // 0x1c466c: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x1c466cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c4670:
    // 0x1c4670: 0x26220060  addiu       $v0, $s1, 0x60
    ctx->pc = 0x1c4670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_1c4674:
    // 0x1c4674: 0x0  nop
    ctx->pc = 0x1c4674u;
    // NOP
label_1c4678:
    // 0x1c4678: 0x0  nop
    ctx->pc = 0x1c4678u;
    // NOP
label_1c467c:
    // 0x1c467c: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1c467cu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[0]);
label_1c4680:
    // 0x1c4680: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x1c4680u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_1c4684:
    // 0x1c4684: 0xf8840010  sqc2        $vf4, 0x10($a0)
    ctx->pc = 0x1c4684u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4688:
    // 0x1c4688: 0x10000017  b           . + 4 + (0x17 << 2)
label_1c468c:
    if (ctx->pc == 0x1C468Cu) {
        ctx->pc = 0x1C4690u;
        goto label_1c4690;
    }
    ctx->pc = 0x1C4688u;
    {
        const bool branch_taken_0x1c4688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4688) {
            ctx->pc = 0x1C46E8u;
            goto label_1c46e8;
        }
    }
    ctx->pc = 0x1C4690u;
label_1c4690:
    // 0x1c4690: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x1c4690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c4694:
    // 0x1c4694: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x1c4694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_1c4698:
    // 0x1c4698: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x1c4698u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_1c469c:
    // 0x1c469c: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x1c469cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c46a0:
    // 0x1c46a0: 0xdba400d0  lqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x1c46a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1c46a4:
    // 0x1c46a4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1c46a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1c46a8:
    // 0x1c46a8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1c46a8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1c46ac:
    // 0x1c46ac: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1c46acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c46b0:
    // 0x1c46b0: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x1c46b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c46b4:
    // 0x1c46b4: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x1c46b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_1c46b8:
    // 0x1c46b8: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x1c46b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c46bc:
    // 0x1c46bc: 0x10440006  beq         $v0, $a0, . + 4 + (0x6 << 2)
label_1c46c0:
    if (ctx->pc == 0x1C46C0u) {
        ctx->pc = 0x1C46C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C46BCu;
        // 0x1c46c0: 0xc7a000c0  lwc1        $f0, 0xC0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C46C4u;
        goto label_1c46c4;
    }
    ctx->pc = 0x1C46BCu;
    {
        const bool branch_taken_0x1c46bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1C46C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C46BCu;
        // 0x1c46c0: 0xc7a000c0  lwc1        $f0, 0xC0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c46bc) {
            ctx->pc = 0x1C46D8u;
            goto label_1c46d8;
        }
    }
    ctx->pc = 0x1C46C4u;
label_1c46c4:
    // 0x1c46c4: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x1c46c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c46c8:
    // 0x1c46c8: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x1c46c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
label_1c46cc:
    // 0x1c46cc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c46ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1c46d0:
    // 0x1c46d0: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1c46d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c46d4:
    // 0x1c46d4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1c46d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1c46d8:
    // 0x1c46d8: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x1c46d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c46dc:
    // 0x1c46dc: 0x26220060  addiu       $v0, $s1, 0x60
    ctx->pc = 0x1c46dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_1c46e0:
    // 0x1c46e0: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x1c46e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1c46e4:
    // 0x1c46e4: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x1c46e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c46e8:
    // 0x1c46e8: 0xdba400d0  lqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x1c46e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1c46ec:
    // 0x1c46ec: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1c46ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1c46f0:
    // 0x1c46f0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1c46f0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1c46f4:
    // 0x1c46f4: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1c46f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c46f8:
    // 0x1c46f8: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x1c46f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c46fc:
    // 0x1c46fc: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x1c46fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_1c4700:
    // 0x1c4700: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x1c4700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4704:
    // 0x1c4704: 0x10440006  beq         $v0, $a0, . + 4 + (0x6 << 2)
label_1c4708:
    if (ctx->pc == 0x1C4708u) {
        ctx->pc = 0x1C4708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4704u;
        // 0x1c4708: 0xc7a000c0  lwc1        $f0, 0xC0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C470Cu;
        goto label_1c470c;
    }
    ctx->pc = 0x1C4704u;
    {
        const bool branch_taken_0x1c4704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1C4708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4704u;
        // 0x1c4708: 0xc7a000c0  lwc1        $f0, 0xC0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4704) {
            ctx->pc = 0x1C4720u;
            goto label_1c4720;
        }
    }
    ctx->pc = 0x1C470Cu;
label_1c470c:
    // 0x1c470c: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x1c470cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c4710:
    // 0x1c4710: 0xe6200060  swc1        $f0, 0x60($s1)
    ctx->pc = 0x1c4710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
label_1c4714:
    // 0x1c4714: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c4714u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1c4718:
    // 0x1c4718: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1c4718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c471c:
    // 0x1c471c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1c471cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1c4720:
    // 0x1c4720: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1c4720u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1c4724:
    // 0x1c4724: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c4724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1c4728:
    // 0x1c4728: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c4728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c472c:
    // 0x1c472c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c472cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1c4730:
    // 0x1c4730: 0xe620002c  swc1        $f0, 0x2C($s1)
    ctx->pc = 0x1c4730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
label_1c4734:
    // 0x1c4734: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x1c4734u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_1c4738:
    // 0x1c4738: 0xc622002c  lwc1        $f2, 0x2C($s1)
    ctx->pc = 0x1c4738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c473c:
    // 0x1c473c: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x1c473cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c4740:
    // 0x1c4740: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1c4740u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c4744:
    // 0x1c4744: 0x0  nop
    ctx->pc = 0x1c4744u;
    // NOP
label_1c4748:
    // 0x1c4748: 0x4502013d  bc1fl       . + 4 + (0x13D << 2)
label_1c474c:
    if (ctx->pc == 0x1C474Cu) {
        ctx->pc = 0x1C474Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4748u;
        // 0x1c474c: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4750u;
        goto label_1c4750;
    }
    ctx->pc = 0x1C4748u;
    {
        const bool branch_taken_0x1c4748 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c4748) {
            ctx->pc = 0x1C474Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4748u;
            // 0x1c474c: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4C40u;
            goto label_1c4c40;
        }
    }
    ctx->pc = 0x1C4750u;
label_1c4750:
    // 0x1c4750: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x1c4750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c4754:
    // 0x1c4754: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1c4754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c4758:
    // 0x1c4758: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x1c4758u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_1c475c:
    // 0x1c475c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c475cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1c4760:
    // 0x1c4760: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c4760u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c4764:
    // 0x1c4764: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x1c4764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1c4768:
    // 0x1c4768: 0x262200f0  addiu       $v0, $s1, 0xF0
    ctx->pc = 0x1c4768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
label_1c476c:
    // 0x1c476c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1c476cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1c4770:
    // 0x1c4770: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c4770u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c4774:
    // 0x1c4774: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1c4774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4778:
    // 0x1c4778: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1c4778u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c477c:
    // 0x1c477c: 0x44081000  mfc1        $t0, $f2
    ctx->pc = 0x1c477cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1c4780:
    // 0x1c4780: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1c4780u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1c4784:
    // 0x1c4784: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1c4784u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c4788:
    // 0x1c4788: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1c4788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c478c:
    // 0x1c478c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1c478cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c4790:
    // 0x1c4790: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1c4790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4794:
    // 0x1c4794: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x1c4794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1c4798:
    // 0x1c4798: 0x26220110  addiu       $v0, $s1, 0x110
    ctx->pc = 0x1c4798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
label_1c479c:
    // 0x1c479c: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x1c479cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c47a0:
    // 0x1c47a0: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x1c47a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c47a4:
    // 0x1c47a4: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x1c47a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1c47a8:
    // 0x1c47a8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1c47a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1c47ac:
    // 0x1c47ac: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x1c47acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1c47b0:
    // 0x1c47b0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c47b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c47b4:
    // 0x1c47b4: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1c47b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c47b8:
    // 0x1c47b8: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1c47b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c47bc:
    // 0x1c47bc: 0x44081000  mfc1        $t0, $f2
    ctx->pc = 0x1c47bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1c47c0:
    // 0x1c47c0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1c47c0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1c47c4:
    // 0x1c47c4: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1c47c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c47c8:
    // 0x1c47c8: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1c47c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c47cc:
    // 0x1c47cc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1c47ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c47d0:
    // 0x1c47d0: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1c47d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c47d4:
    // 0x1c47d4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1c47d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c47d8:
    // 0x1c47d8: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x1c47d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1c47dc:
    // 0x1c47dc: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1c47dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c47e0:
    // 0x1c47e0: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x1c47e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1c47e4:
    // 0x1c47e4: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x1c47e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c47e8:
    // 0x1c47e8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1c47e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1c47ec:
    // 0x1c47ec: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1c47ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1c47f0:
    // 0x1c47f0: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x1c47f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1c47f4:
    // 0x1c47f4: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x1c47f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_1c47f8:
    // 0x1c47f8: 0xfa440010  sqc2        $vf4, 0x10($s2)
    ctx->pc = 0x1c47f8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c47fc:
    // 0x1c47fc: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1c47fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c4800:
    // 0x1c4800: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x1c4800u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c4804:
    // 0x1c4804: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c4804u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c4808:
    // 0x1c4808: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1c4808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c480c:
    // 0x1c480c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1c480cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c4810:
    // 0x1c4810: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1c4810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4814:
    // 0x1c4814: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x1c4814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c4818:
    // 0x1c4818: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1c4818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1c481c:
    // 0x1c481c: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x1c481cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c4820:
    // 0x1c4820: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x1c4820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c4824:
    // 0x1c4824: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x1c4824u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1c4828:
    // 0x1c4828: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1c4828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1c482c:
    // 0x1c482c: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x1c482cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1c4830:
    // 0x1c4830: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c4830u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c4834:
    // 0x1c4834: 0xfa440010  sqc2        $vf4, 0x10($s2)
    ctx->pc = 0x1c4834u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4838:
    // 0x1c4838: 0xda440010  lqc2        $vf4, 0x10($s2)
    ctx->pc = 0x1c4838u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_1c483c:
    // 0x1c483c: 0xd9450000  lqc2        $vf5, 0x0($t2)
    ctx->pc = 0x1c483cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
label_1c4840:
    // 0x1c4840: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c4840u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c4844:
    // 0x1c4844: 0xfa440010  sqc2        $vf4, 0x10($s2)
    ctx->pc = 0x1c4844u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4848:
    // 0x1c4848: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1c4848u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c484c:
    // 0x1c484c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1c484cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4850:
    // 0x1c4850: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x1c4850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c4854:
    // 0x1c4854: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1c4854u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c4858:
    // 0x1c4858: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x1c4858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c485c:
    // 0x1c485c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c485cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c4860:
    // 0x1c4860: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1c4860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c4864:
    // 0x1c4864: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x1c4864u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1c4868:
    // 0x1c4868: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x1c4868u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1c486c:
    // 0x1c486c: 0x240b82d  daddu       $s7, $s2, $zero
    ctx->pc = 0x1c486cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c4870:
    // 0x1c4870: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x1c4870u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1c4874:
    // 0x1c4874: 0xc071cc4  jal         func_1C7310
label_1c4878:
    if (ctx->pc == 0x1C4878u) {
        ctx->pc = 0x1C4878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4874u;
        // 0x1c4878: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C487Cu;
        goto label_1c487c;
    }
    ctx->pc = 0x1C4874u;
    SET_GPR_U32(ctx, 31, 0x1C487Cu);
    ctx->pc = 0x1C4878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4874u;
    // 0x1c4878: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7310u, 0x1C4874u, 0x1C487Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C487Cu;
label_1c487c:
    // 0x1c487c: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x1c487cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_1c4880:
    // 0x1c4880: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c4880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_1c4884:
    // 0x1c4884: 0x5440005c  bnel        $v0, $zero, . + 4 + (0x5C << 2)
label_1c4888:
    if (ctx->pc == 0x1C4888u) {
        ctx->pc = 0x1C4888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4884u;
        // 0x1c4888: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C488Cu;
        goto label_1c488c;
    }
    ctx->pc = 0x1C4884u;
    {
        const bool branch_taken_0x1c4884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4884) {
            ctx->pc = 0x1C4888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4884u;
            // 0x1c4888: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C49F8u;
            goto label_1c49f8;
        }
    }
    ctx->pc = 0x1C488Cu;
label_1c488c:
    // 0x1c488c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1c488cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1c4890:
    // 0x1c4890: 0x50400059  beql        $v0, $zero, . + 4 + (0x59 << 2)
label_1c4894:
    if (ctx->pc == 0x1C4894u) {
        ctx->pc = 0x1C4894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4890u;
        // 0x1c4894: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4898u;
        goto label_1c4898;
    }
    ctx->pc = 0x1C4890u;
    {
        const bool branch_taken_0x1c4890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4890) {
            ctx->pc = 0x1C4894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4890u;
            // 0x1c4894: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C49F8u;
            goto label_1c49f8;
        }
    }
    ctx->pc = 0x1C4898u;
label_1c4898:
    // 0x1c4898: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x1c4898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1c489c:
    // 0x1c489c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c489cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c48a0:
    // 0x1c48a0: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1c48a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c48a4:
    // 0x1c48a4: 0xdae40010  lqc2        $vf4, 0x10($s7)
    ctx->pc = 0x1c48a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 16)));
label_1c48a8:
    // 0x1c48a8: 0xda850000  lqc2        $vf5, 0x0($s4)
    ctx->pc = 0x1c48a8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_1c48ac:
    // 0x1c48ac: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c48acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c48b0:
    // 0x1c48b0: 0xfae40010  sqc2        $vf4, 0x10($s7)
    ctx->pc = 0x1c48b0u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c48b4:
    // 0x1c48b4: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x1c48b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_1c48b8:
    // 0x1c48b8: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1c48b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c48bc:
    // 0x1c48bc: 0x10570006  beq         $v0, $s7, . + 4 + (0x6 << 2)
label_1c48c0:
    if (ctx->pc == 0x1C48C0u) {
        ctx->pc = 0x1C48C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C48BCu;
        // 0x1c48c0: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C48C4u;
        goto label_1c48c4;
    }
    ctx->pc = 0x1C48BCu;
    {
        const bool branch_taken_0x1c48bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        ctx->pc = 0x1C48C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C48BCu;
        // 0x1c48c0: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c48bc) {
            ctx->pc = 0x1C48D8u;
            goto label_1c48d8;
        }
    }
    ctx->pc = 0x1C48C4u;
label_1c48c4:
    // 0x1c48c4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1c48c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1c48c8:
    // 0x1c48c8: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1c48c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c48cc:
    // 0x1c48cc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c48ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1c48d0:
    // 0x1c48d0: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1c48d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c48d4:
    // 0x1c48d4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1c48d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1c48d8:
    // 0x1c48d8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c48d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c48dc:
    // 0x1c48dc: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1c48dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c48e0:
    // 0x1c48e0: 0x2630000c  addiu       $s0, $s1, 0xC
    ctx->pc = 0x1c48e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_1c48e4:
    // 0x1c48e4: 0x0  nop
    ctx->pc = 0x1c48e4u;
    // NOP
label_1c48e8:
    // 0x1c48e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c48e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c48ec:
    // 0x1c48ec: 0x5040003e  beql        $v0, $zero, . + 4 + (0x3E << 2)
label_1c48f0:
    if (ctx->pc == 0x1C48F0u) {
        ctx->pc = 0x1C48F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C48ECu;
        // 0x1c48f0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C48F4u;
        goto label_1c48f4;
    }
    ctx->pc = 0x1C48ECu;
    {
        const bool branch_taken_0x1c48ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c48ec) {
            ctx->pc = 0x1C48F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C48ECu;
            // 0x1c48f0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C49E8u;
            goto label_1c49e8;
        }
    }
    ctx->pc = 0x1C48F4u;
label_1c48f4:
    // 0x1c48f4: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1c48f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_1c48f8:
    // 0x1c48f8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c48f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c48fc:
    // 0x1c48fc: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1c48fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4900:
    // 0x1c4900: 0xda440010  lqc2        $vf4, 0x10($s2)
    ctx->pc = 0x1c4900u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_1c4904:
    // 0x1c4904: 0xda850000  lqc2        $vf5, 0x0($s4)
    ctx->pc = 0x1c4904u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_1c4908:
    // 0x1c4908: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c4908u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c490c:
    // 0x1c490c: 0xfa440010  sqc2        $vf4, 0x10($s2)
    ctx->pc = 0x1c490cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4910:
    // 0x1c4910: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x1c4910u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_1c4914:
    // 0x1c4914: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1c4914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4918:
    // 0x1c4918: 0x10520006  beq         $v0, $s2, . + 4 + (0x6 << 2)
label_1c491c:
    if (ctx->pc == 0x1C491Cu) {
        ctx->pc = 0x1C491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4918u;
        // 0x1c491c: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4920u;
        goto label_1c4920;
    }
    ctx->pc = 0x1C4918u;
    {
        const bool branch_taken_0x1c4918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x1C491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4918u;
        // 0x1c491c: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4918) {
            ctx->pc = 0x1C4934u;
            goto label_1c4934;
        }
    }
    ctx->pc = 0x1C4920u;
label_1c4920:
    // 0x1c4920: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1c4920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1c4924:
    // 0x1c4924: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1c4924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c4928:
    // 0x1c4928: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c4928u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1c492c:
    // 0x1c492c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1c492cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c4930:
    // 0x1c4930: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1c4930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1c4934:
    // 0x1c4934: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c4934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c4938:
    // 0x1c4938: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c4938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c493c:
    // 0x1c493c: 0x946302fe  lhu         $v1, 0x2FE($v1)
    ctx->pc = 0x1c493cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 766)));
label_1c4940:
    // 0x1c4940: 0x28620100  slti        $v0, $v1, 0x100
    ctx->pc = 0x1c4940u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
label_1c4944:
    // 0x1c4944: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c4948:
    if (ctx->pc == 0x1C4948u) {
        ctx->pc = 0x1C4948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4944u;
        // 0x1c4948: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C494Cu;
        goto label_1c494c;
    }
    ctx->pc = 0x1C4944u;
    {
        const bool branch_taken_0x1c4944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4944u;
        // 0x1c4948: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4944) {
            ctx->pc = 0x1C4954u;
            goto label_1c4954;
        }
    }
    ctx->pc = 0x1C494Cu;
label_1c494c:
    // 0x1c494c: 0x286201ff  slti        $v0, $v1, 0x1FF
    ctx->pc = 0x1c494cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)511) ? 1 : 0);
label_1c4950:
    // 0x1c4950: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c4950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c4954:
    // 0x1c4954: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c4954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c4958:
    // 0x1c4958: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_1c495c:
    if (ctx->pc == 0x1C495Cu) {
        ctx->pc = 0x1C495Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4958u;
        // 0x1c495c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4960u;
        goto label_1c4960;
    }
    ctx->pc = 0x1C4958u;
    {
        const bool branch_taken_0x1c4958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4958) {
            ctx->pc = 0x1C495Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4958u;
            // 0x1c495c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C49C0u;
            goto label_1c49c0;
        }
    }
    ctx->pc = 0x1C4960u;
label_1c4960:
    // 0x1c4960: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x1c4960u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
label_1c4964:
    // 0x1c4964: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c4968:
    if (ctx->pc == 0x1C4968u) {
        ctx->pc = 0x1C4968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4964u;
        // 0x1c4968: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C496Cu;
        goto label_1c496c;
    }
    ctx->pc = 0x1C4964u;
    {
        const bool branch_taken_0x1c4964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4964u;
        // 0x1c4968: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4964) {
            ctx->pc = 0x1C4974u;
            goto label_1c4974;
        }
    }
    ctx->pc = 0x1C496Cu;
label_1c496c:
    // 0x1c496c: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x1c496cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_1c4970:
    // 0x1c4970: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c4970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c4974:
    // 0x1c4974: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c4974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c4978:
    // 0x1c4978: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_1c497c:
    if (ctx->pc == 0x1C497Cu) {
        ctx->pc = 0x1C497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4978u;
        // 0x1c497c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4980u;
        goto label_1c4980;
    }
    ctx->pc = 0x1C4978u;
    {
        const bool branch_taken_0x1c4978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4978) {
            ctx->pc = 0x1C497Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4978u;
            // 0x1c497c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C49C0u;
            goto label_1c49c0;
        }
    }
    ctx->pc = 0x1C4980u;
label_1c4980:
    // 0x1c4980: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x1c4980u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_1c4984:
    // 0x1c4984: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c4988:
    if (ctx->pc == 0x1C4988u) {
        ctx->pc = 0x1C4988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4984u;
        // 0x1c4988: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C498Cu;
        goto label_1c498c;
    }
    ctx->pc = 0x1C4984u;
    {
        const bool branch_taken_0x1c4984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4984u;
        // 0x1c4988: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4984) {
            ctx->pc = 0x1C4994u;
            goto label_1c4994;
        }
    }
    ctx->pc = 0x1C498Cu;
label_1c498c:
    // 0x1c498c: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x1c498cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
label_1c4990:
    // 0x1c4990: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c4990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c4994:
    // 0x1c4994: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c4994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c4998:
    // 0x1c4998: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_1c499c:
    if (ctx->pc == 0x1C499Cu) {
        ctx->pc = 0x1C499Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4998u;
        // 0x1c499c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C49A0u;
        goto label_1c49a0;
    }
    ctx->pc = 0x1C4998u;
    {
        const bool branch_taken_0x1c4998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4998) {
            ctx->pc = 0x1C499Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4998u;
            // 0x1c499c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C49C0u;
            goto label_1c49c0;
        }
    }
    ctx->pc = 0x1C49A0u;
label_1c49a0:
    // 0x1c49a0: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x1c49a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
label_1c49a4:
    // 0x1c49a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c49a8:
    if (ctx->pc == 0x1C49A8u) {
        ctx->pc = 0x1C49A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C49A4u;
        // 0x1c49a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C49ACu;
        goto label_1c49ac;
    }
    ctx->pc = 0x1C49A4u;
    {
        const bool branch_taken_0x1c49a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C49A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C49A4u;
        // 0x1c49a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c49a4) {
            ctx->pc = 0x1C49B4u;
            goto label_1c49b4;
        }
    }
    ctx->pc = 0x1C49ACu;
label_1c49ac:
    // 0x1c49ac: 0x28620600  slti        $v0, $v1, 0x600
    ctx->pc = 0x1c49acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1536) ? 1 : 0);
label_1c49b0:
    // 0x1c49b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c49b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c49b4:
    // 0x1c49b4: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c49b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c49b8:
    // 0x1c49b8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1c49bc:
    if (ctx->pc == 0x1C49BCu) {
        ctx->pc = 0x1C49BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C49B8u;
        // 0x1c49bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C49C0u;
        goto label_1c49c0;
    }
    ctx->pc = 0x1C49B8u;
    {
        const bool branch_taken_0x1c49b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c49b8) {
            ctx->pc = 0x1C49BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C49B8u;
            // 0x1c49bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C49C0u;
            goto label_1c49c0;
        }
    }
    ctx->pc = 0x1C49C0u;
label_1c49c0:
    // 0x1c49c0: 0x54b60009  bnel        $a1, $s6, . + 4 + (0x9 << 2)
label_1c49c4:
    if (ctx->pc == 0x1C49C4u) {
        ctx->pc = 0x1C49C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C49C0u;
        // 0x1c49c4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C49C8u;
        goto label_1c49c8;
    }
    ctx->pc = 0x1C49C0u;
    {
        const bool branch_taken_0x1c49c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 22));
        if (branch_taken_0x1c49c0) {
            ctx->pc = 0x1C49C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C49C0u;
            // 0x1c49c4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C49E8u;
            goto label_1c49e8;
        }
    }
    ctx->pc = 0x1C49C8u;
label_1c49c8:
    // 0x1c49c8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c49c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c49cc:
    // 0x1c49cc: 0x8c820214  lw          $v0, 0x214($a0)
    ctx->pc = 0x1c49ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 532)));
label_1c49d0:
    // 0x1c49d0: 0x8c8500f0  lw          $a1, 0xF0($a0)
    ctx->pc = 0x1c49d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_1c49d4:
    // 0x1c49d4: 0x84430070  lh          $v1, 0x70($v0)
    ctx->pc = 0x1c49d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1c49d8:
    // 0x1c49d8: 0x8c460074  lw          $a2, 0x74($v0)
    ctx->pc = 0x1c49d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1c49dc:
    // 0x1c49dc: 0xc0f809  jalr        $a2
label_1c49e0:
    if (ctx->pc == 0x1C49E0u) {
        ctx->pc = 0x1C49E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C49DCu;
        // 0x1c49e0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C49E4u;
        goto label_1c49e4;
    }
    ctx->pc = 0x1C49DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1C49E4u);
        ctx->pc = 0x1C49E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C49DCu;
        // 0x1c49e0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C49DCu, 0x1C49E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C49E4u;
label_1c49e4:
    // 0x1c49e4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1c49e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1c49e8:
    // 0x1c49e8: 0x2e620008  sltiu       $v0, $s3, 0x8
    ctx->pc = 0x1c49e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1c49ec:
    // 0x1c49ec: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
label_1c49f0:
    if (ctx->pc == 0x1C49F0u) {
        ctx->pc = 0x1C49F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C49ECu;
        // 0x1c49f0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C49F4u;
        goto label_1c49f4;
    }
    ctx->pc = 0x1C49ECu;
    {
        const bool branch_taken_0x1c49ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C49F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C49ECu;
        // 0x1c49f0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c49ec) {
            ctx->pc = 0x1C48E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c48e8;
        }
    }
    ctx->pc = 0x1C49F4u;
label_1c49f4:
    // 0x1c49f4: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x1c49f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_1c49f8:
    // 0x1c49f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c49f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1c49fc:
    // 0x1c49fc: 0x14400544  bnez        $v0, . + 4 + (0x544 << 2)
label_1c4a00:
    if (ctx->pc == 0x1C4A00u) {
        ctx->pc = 0x1C4A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C49FCu;
        // 0x1c4a00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4A04u;
        goto label_1c4a04;
    }
    ctx->pc = 0x1C49FCu;
    {
        const bool branch_taken_0x1c49fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C49FCu;
        // 0x1c4a00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c49fc) {
            ctx->pc = 0x1C5F10u;
            goto label_1c5f10;
        }
    }
    ctx->pc = 0x1C4A04u;
label_1c4a04:
    // 0x1c4a04: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1c4a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1c4a08:
    // 0x1c4a08: 0x50400541  beql        $v0, $zero, . + 4 + (0x541 << 2)
label_1c4a0c:
    if (ctx->pc == 0x1C4A0Cu) {
        ctx->pc = 0x1C4A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A08u;
        // 0x1c4a0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4A10u;
        goto label_1c4a10;
    }
    ctx->pc = 0x1C4A08u;
    {
        const bool branch_taken_0x1c4a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4a08) {
            ctx->pc = 0x1C4A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4A08u;
            // 0x1c4a0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5F10u;
            goto label_1c5f10;
        }
    }
    ctx->pc = 0x1C4A10u;
label_1c4a10:
    // 0x1c4a10: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x1c4a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c4a14:
    // 0x1c4a14: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x1c4a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c4a18:
    // 0x1c4a18: 0x24430100  addiu       $v1, $v0, 0x100
    ctx->pc = 0x1c4a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
label_1c4a1c:
    // 0x1c4a1c: 0x52a30008  beql        $s5, $v1, . + 4 + (0x8 << 2)
label_1c4a20:
    if (ctx->pc == 0x1C4A20u) {
        ctx->pc = 0x1C4A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A1Cu;
        // 0x1c4a20: 0x27a30070  addiu       $v1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4A24u;
        goto label_1c4a24;
    }
    ctx->pc = 0x1C4A1Cu;
    {
        const bool branch_taken_0x1c4a1c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c4a1c) {
            ctx->pc = 0x1C4A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4A1Cu;
            // 0x1c4a20: 0x27a30070  addiu       $v1, $sp, 0x70 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4A40u;
            goto label_1c4a40;
        }
    }
    ctx->pc = 0x1C4A24u;
label_1c4a24:
    // 0x1c4a24: 0xc4400100  lwc1        $f0, 0x100($v0)
    ctx->pc = 0x1c4a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c4a28:
    // 0x1c4a28: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1c4a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1c4a2c:
    // 0x1c4a2c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1c4a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c4a30:
    // 0x1c4a30: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x1c4a30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1c4a34:
    // 0x1c4a34: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1c4a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c4a38:
    // 0x1c4a38: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1c4a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1c4a3c:
    // 0x1c4a3c: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x1c4a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1c4a40:
    // 0x1c4a40: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x1c4a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1c4a44:
    // 0x1c4a44: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x1c4a44u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_1c4a48:
    // 0x1c4a48: 0xf8440010  sqc2        $vf4, 0x10($v0)
    ctx->pc = 0x1c4a48u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4a4c:
    // 0x1c4a4c: 0xdae40030  lqc2        $vf4, 0x30($s7)
    ctx->pc = 0x1c4a4cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 48)));
label_1c4a50:
    // 0x1c4a50: 0xdbc50000  lqc2        $vf5, 0x0($fp)
    ctx->pc = 0x1c4a50u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_1c4a54:
    // 0x1c4a54: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c4a54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c4a58:
    // 0x1c4a58: 0xfae40030  sqc2        $vf4, 0x30($s7)
    ctx->pc = 0x1c4a58u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4a5c:
    // 0x1c4a5c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1c4a5cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c4a60:
    // 0x1c4a60: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1c4a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4a64:
    // 0x1c4a64: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1c4a64u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c4a68:
    // 0x1c4a68: 0x12f60006  beq         $s7, $s6, . + 4 + (0x6 << 2)
label_1c4a6c:
    if (ctx->pc == 0x1C4A6Cu) {
        ctx->pc = 0x1C4A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A68u;
        // 0x1c4a6c: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4A70u;
        goto label_1c4a70;
    }
    ctx->pc = 0x1C4A68u;
    {
        const bool branch_taken_0x1c4a68 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 22));
        ctx->pc = 0x1C4A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A68u;
        // 0x1c4a6c: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4a68) {
            ctx->pc = 0x1C4A84u;
            goto label_1c4a84;
        }
    }
    ctx->pc = 0x1C4A70u;
label_1c4a70:
    // 0x1c4a70: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1c4a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c4a74:
    // 0x1c4a74: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1c4a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1c4a78:
    // 0x1c4a78: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x1c4a78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
label_1c4a7c:
    // 0x1c4a7c: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x1c4a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c4a80:
    // 0x1c4a80: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x1c4a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
label_1c4a84:
    // 0x1c4a84: 0xc07df68  jal         func_1F7DA0
label_1c4a88:
    if (ctx->pc == 0x1C4A88u) {
        ctx->pc = 0x1C4A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A84u;
        // 0x1c4a88: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4A8Cu;
        goto label_1c4a8c;
    }
    ctx->pc = 0x1C4A84u;
    SET_GPR_U32(ctx, 31, 0x1C4A8Cu);
    ctx->pc = 0x1C4A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4A84u;
    // 0x1c4a88: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x1C4A84u, 0x1C4A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4A8Cu;
label_1c4a8c:
    // 0x1c4a8c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1c4a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1c4a90:
    // 0x1c4a90: 0x24620100  addiu       $v0, $v1, 0x100
    ctx->pc = 0x1c4a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
label_1c4a94:
    // 0x1c4a94: 0x10570006  beq         $v0, $s7, . + 4 + (0x6 << 2)
label_1c4a98:
    if (ctx->pc == 0x1C4A98u) {
        ctx->pc = 0x1C4A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A94u;
        // 0x1c4a98: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4A9Cu;
        goto label_1c4a9c;
    }
    ctx->pc = 0x1C4A94u;
    {
        const bool branch_taken_0x1c4a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        ctx->pc = 0x1C4A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A94u;
        // 0x1c4a98: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4a94) {
            ctx->pc = 0x1C4AB0u;
            goto label_1c4ab0;
        }
    }
    ctx->pc = 0x1C4A9Cu;
label_1c4a9c:
    // 0x1c4a9c: 0xe4600100  swc1        $f0, 0x100($v1)
    ctx->pc = 0x1c4a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 256), bits); }
label_1c4aa0:
    // 0x1c4aa0: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1c4aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c4aa4:
    // 0x1c4aa4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c4aa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1c4aa8:
    // 0x1c4aa8: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1c4aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c4aac:
    // 0x1c4aac: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1c4aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1c4ab0:
    // 0x1c4ab0: 0xc0527ae  jal         func_149EB8
label_1c4ab4:
    if (ctx->pc == 0x1C4AB4u) {
        ctx->pc = 0x1C4AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4AB0u;
        // 0x1c4ab4: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4AB8u;
        goto label_1c4ab8;
    }
    ctx->pc = 0x1C4AB0u;
    SET_GPR_U32(ctx, 31, 0x1C4AB8u);
    ctx->pc = 0x1C4AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4AB0u;
    // 0x1c4ab4: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1C4AB0u, 0x1C4AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4AB8u;
label_1c4ab8:
    // 0x1c4ab8: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x1c4ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c4abc:
    // 0x1c4abc: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1c4abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1c4ac0:
    // 0x1c4ac0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1c4ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1c4ac4:
    // 0x1c4ac4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1c4ac4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4ac8:
    // 0x1c4ac8: 0x2632000c  addiu       $s2, $s1, 0xC
    ctx->pc = 0x1c4ac8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_1c4acc:
    // 0x1c4acc: 0xc051f18  jal         func_147C60
label_1c4ad0:
    if (ctx->pc == 0x1C4AD0u) {
        ctx->pc = 0x1C4AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4ACCu;
        // 0x1c4ad0: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4AD4u;
        goto label_1c4ad4;
    }
    ctx->pc = 0x1C4ACCu;
    SET_GPR_U32(ctx, 31, 0x1C4AD4u);
    ctx->pc = 0x1C4AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4ACCu;
    // 0x1c4ad0: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x1C4ACCu, 0x1C4AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4AD4u;
label_1c4ad4:
    // 0x1c4ad4: 0x27b40080  addiu       $s4, $sp, 0x80
    ctx->pc = 0x1c4ad4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1c4ad8:
    // 0x1c4ad8: 0x27b30090  addiu       $s3, $sp, 0x90
    ctx->pc = 0x1c4ad8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1c4adc:
    // 0x1c4adc: 0x0  nop
    ctx->pc = 0x1c4adcu;
    // NOP
label_1c4ae0:
    // 0x1c4ae0: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x1c4ae0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c4ae4:
    // 0x1c4ae4: 0x52000051  beql        $s0, $zero, . + 4 + (0x51 << 2)
label_1c4ae8:
    if (ctx->pc == 0x1C4AE8u) {
        ctx->pc = 0x1C4AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4AE4u;
        // 0x1c4ae8: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4AECu;
        goto label_1c4aec;
    }
    ctx->pc = 0x1C4AE4u;
    {
        const bool branch_taken_0x1c4ae4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4ae4) {
            ctx->pc = 0x1C4AE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4AE4u;
            // 0x1c4ae8: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4C2Cu;
            goto label_1c4c2c;
        }
    }
    ctx->pc = 0x1C4AECu;
label_1c4aec:
    // 0x1c4aec: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x1c4aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c4af0:
    // 0x1c4af0: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1c4af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_1c4af4:
    // 0x1c4af4: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x1c4af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c4af8:
    // 0x1c4af8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c4af8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c4afc:
    // 0x1c4afc: 0xdac50000  lqc2        $vf5, 0x0($s6)
    ctx->pc = 0x1c4afcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_1c4b00:
    // 0x1c4b00: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c4b00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c4b04:
    // 0x1c4b04: 0xfa840010  sqc2        $vf4, 0x10($s4)
    ctx->pc = 0x1c4b04u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4b08:
    // 0x1c4b08: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1c4b08u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_1c4b0c:
    // 0x1c4b0c: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1c4b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4b10:
    // 0x1c4b10: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1c4b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1c4b14:
    // 0x1c4b14: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c4b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1c4b18:
    // 0x1c4b18: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1c4b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c4b1c:
    // 0x1c4b1c: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x1c4b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c4b20:
    // 0x1c4b20: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1c4b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_1c4b24:
    // 0x1c4b24: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x1c4b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c4b28:
    // 0x1c4b28: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1c4b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1c4b2c:
    // 0x1c4b2c: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x1c4b2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1c4b30:
    // 0x1c4b30: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x1c4b30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1c4b34:
    // 0x1c4b34: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1c4b34u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1c4b38:
    // 0x1c4b38: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1c4b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4b3c:
    // 0x1c4b3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c4b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c4b40:
    // 0x1c4b40: 0xc0c28ac  jal         func_30A2B0
label_1c4b44:
    if (ctx->pc == 0x1C4B44u) {
        ctx->pc = 0x1C4B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4B40u;
        // 0x1c4b44: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4B48u;
        goto label_1c4b48;
    }
    ctx->pc = 0x1C4B40u;
    SET_GPR_U32(ctx, 31, 0x1C4B48u);
    ctx->pc = 0x1C4B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4B40u;
    // 0x1c4b44: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x1C4B40u, 0x1C4B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4B48u;
label_1c4b48:
    // 0x1c4b48: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1c4b48u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_1c4b4c:
    // 0x1c4b4c: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1c4b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4b50:
    // 0x1c4b50: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1c4b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_1c4b54:
    // 0x1c4b54: 0x10540006  beq         $v0, $s4, . + 4 + (0x6 << 2)
label_1c4b58:
    if (ctx->pc == 0x1C4B58u) {
        ctx->pc = 0x1C4B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4B54u;
        // 0x1c4b58: 0xc7a00080  lwc1        $f0, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4B5Cu;
        goto label_1c4b5c;
    }
    ctx->pc = 0x1C4B54u;
    {
        const bool branch_taken_0x1c4b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x1C4B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4B54u;
        // 0x1c4b58: 0xc7a00080  lwc1        $f0, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4b54) {
            ctx->pc = 0x1C4B70u;
            goto label_1c4b70;
        }
    }
    ctx->pc = 0x1C4B5Cu;
label_1c4b5c:
    // 0x1c4b5c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1c4b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1c4b60:
    // 0x1c4b60: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x1c4b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c4b64:
    // 0x1c4b64: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c4b64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1c4b68:
    // 0x1c4b68: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x1c4b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c4b6c:
    // 0x1c4b6c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1c4b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1c4b70:
    // 0x1c4b70: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1c4b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c4b74:
    // 0x1c4b74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c4b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4b78:
    // 0x1c4b78: 0x946302fe  lhu         $v1, 0x2FE($v1)
    ctx->pc = 0x1c4b78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 766)));
label_1c4b7c:
    // 0x1c4b7c: 0x28620100  slti        $v0, $v1, 0x100
    ctx->pc = 0x1c4b7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
label_1c4b80:
    // 0x1c4b80: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c4b84:
    if (ctx->pc == 0x1C4B84u) {
        ctx->pc = 0x1C4B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4B80u;
        // 0x1c4b84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4B88u;
        goto label_1c4b88;
    }
    ctx->pc = 0x1C4B80u;
    {
        const bool branch_taken_0x1c4b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4B80u;
        // 0x1c4b84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4b80) {
            ctx->pc = 0x1C4B90u;
            goto label_1c4b90;
        }
    }
    ctx->pc = 0x1C4B88u;
label_1c4b88:
    // 0x1c4b88: 0x286201ff  slti        $v0, $v1, 0x1FF
    ctx->pc = 0x1c4b88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)511) ? 1 : 0);
label_1c4b8c:
    // 0x1c4b8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c4b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c4b90:
    // 0x1c4b90: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c4b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c4b94:
    // 0x1c4b94: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
label_1c4b98:
    if (ctx->pc == 0x1C4B98u) {
        ctx->pc = 0x1C4B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4B94u;
        // 0x1c4b98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4B9Cu;
        goto label_1c4b9c;
    }
    ctx->pc = 0x1C4B94u;
    {
        const bool branch_taken_0x1c4b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4b94) {
            ctx->pc = 0x1C4B98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4B94u;
            // 0x1c4b98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4C00u;
            goto label_1c4c00;
        }
    }
    ctx->pc = 0x1C4B9Cu;
label_1c4b9c:
    // 0x1c4b9c: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x1c4b9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
label_1c4ba0:
    // 0x1c4ba0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c4ba4:
    if (ctx->pc == 0x1C4BA4u) {
        ctx->pc = 0x1C4BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4BA0u;
        // 0x1c4ba4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4BA8u;
        goto label_1c4ba8;
    }
    ctx->pc = 0x1C4BA0u;
    {
        const bool branch_taken_0x1c4ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4BA0u;
        // 0x1c4ba4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4ba0) {
            ctx->pc = 0x1C4BB0u;
            goto label_1c4bb0;
        }
    }
    ctx->pc = 0x1C4BA8u;
label_1c4ba8:
    // 0x1c4ba8: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x1c4ba8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_1c4bac:
    // 0x1c4bac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c4bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c4bb0:
    // 0x1c4bb0: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c4bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c4bb4:
    // 0x1c4bb4: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_1c4bb8:
    if (ctx->pc == 0x1C4BB8u) {
        ctx->pc = 0x1C4BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4BB4u;
        // 0x1c4bb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4BBCu;
        goto label_1c4bbc;
    }
    ctx->pc = 0x1C4BB4u;
    {
        const bool branch_taken_0x1c4bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4bb4) {
            ctx->pc = 0x1C4BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4BB4u;
            // 0x1c4bb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4C00u;
            goto label_1c4c00;
        }
    }
    ctx->pc = 0x1C4BBCu;
label_1c4bbc:
    // 0x1c4bbc: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x1c4bbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_1c4bc0:
    // 0x1c4bc0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c4bc4:
    if (ctx->pc == 0x1C4BC4u) {
        ctx->pc = 0x1C4BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4BC0u;
        // 0x1c4bc4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4BC8u;
        goto label_1c4bc8;
    }
    ctx->pc = 0x1C4BC0u;
    {
        const bool branch_taken_0x1c4bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4BC0u;
        // 0x1c4bc4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4bc0) {
            ctx->pc = 0x1C4BD0u;
            goto label_1c4bd0;
        }
    }
    ctx->pc = 0x1C4BC8u;
label_1c4bc8:
    // 0x1c4bc8: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x1c4bc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
label_1c4bcc:
    // 0x1c4bcc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c4bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c4bd0:
    // 0x1c4bd0: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c4bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c4bd4:
    // 0x1c4bd4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_1c4bd8:
    if (ctx->pc == 0x1C4BD8u) {
        ctx->pc = 0x1C4BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4BD4u;
        // 0x1c4bd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4BDCu;
        goto label_1c4bdc;
    }
    ctx->pc = 0x1C4BD4u;
    {
        const bool branch_taken_0x1c4bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4bd4) {
            ctx->pc = 0x1C4BD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4BD4u;
            // 0x1c4bd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4C00u;
            goto label_1c4c00;
        }
    }
    ctx->pc = 0x1C4BDCu;
label_1c4bdc:
    // 0x1c4bdc: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x1c4bdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
label_1c4be0:
    // 0x1c4be0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c4be4:
    if (ctx->pc == 0x1C4BE4u) {
        ctx->pc = 0x1C4BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4BE0u;
        // 0x1c4be4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4BE8u;
        goto label_1c4be8;
    }
    ctx->pc = 0x1C4BE0u;
    {
        const bool branch_taken_0x1c4be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4BE0u;
        // 0x1c4be4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4be0) {
            ctx->pc = 0x1C4BF0u;
            goto label_1c4bf0;
        }
    }
    ctx->pc = 0x1C4BE8u;
label_1c4be8:
    // 0x1c4be8: 0x28620600  slti        $v0, $v1, 0x600
    ctx->pc = 0x1c4be8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1536) ? 1 : 0);
label_1c4bec:
    // 0x1c4bec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c4becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c4bf0:
    // 0x1c4bf0: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c4bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c4bf4:
    // 0x1c4bf4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1c4bf8:
    if (ctx->pc == 0x1C4BF8u) {
        ctx->pc = 0x1C4BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4BF4u;
        // 0x1c4bf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4BFCu;
        goto label_1c4bfc;
    }
    ctx->pc = 0x1C4BF4u;
    {
        const bool branch_taken_0x1c4bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4BF4u;
        // 0x1c4bf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4bf4) {
            ctx->pc = 0x1C4C04u;
            goto label_1c4c04;
        }
    }
    ctx->pc = 0x1C4BFCu;
label_1c4bfc:
    // 0x1c4bfc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c4bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c4c00:
    // 0x1c4c00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c4c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c4c04:
    // 0x1c4c04: 0x54a20009  bnel        $a1, $v0, . + 4 + (0x9 << 2)
label_1c4c08:
    if (ctx->pc == 0x1C4C08u) {
        ctx->pc = 0x1C4C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4C04u;
        // 0x1c4c08: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4C0Cu;
        goto label_1c4c0c;
    }
    ctx->pc = 0x1C4C04u;
    {
        const bool branch_taken_0x1c4c04 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c4c04) {
            ctx->pc = 0x1C4C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4C04u;
            // 0x1c4c08: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4C2Cu;
            goto label_1c4c2c;
        }
    }
    ctx->pc = 0x1C4C0Cu;
label_1c4c0c:
    // 0x1c4c0c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1c4c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c4c10:
    // 0x1c4c10: 0x8c820214  lw          $v0, 0x214($a0)
    ctx->pc = 0x1c4c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 532)));
label_1c4c14:
    // 0x1c4c14: 0x8c8500f0  lw          $a1, 0xF0($a0)
    ctx->pc = 0x1c4c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_1c4c18:
    // 0x1c4c18: 0x84430070  lh          $v1, 0x70($v0)
    ctx->pc = 0x1c4c18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1c4c1c:
    // 0x1c4c1c: 0x8c460074  lw          $a2, 0x74($v0)
    ctx->pc = 0x1c4c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1c4c20:
    // 0x1c4c20: 0xc0f809  jalr        $a2
label_1c4c24:
    if (ctx->pc == 0x1C4C24u) {
        ctx->pc = 0x1C4C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4C20u;
        // 0x1c4c24: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4C28u;
        goto label_1c4c28;
    }
    ctx->pc = 0x1C4C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1C4C28u);
        ctx->pc = 0x1C4C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4C20u;
        // 0x1c4c24: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4C20u, 0x1C4C28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C4C28u;
label_1c4c28:
    // 0x1c4c28: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1c4c28u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1c4c2c:
    // 0x1c4c2c: 0x2ea20008  sltiu       $v0, $s5, 0x8
    ctx->pc = 0x1c4c2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1c4c30:
    // 0x1c4c30: 0x1440ffab  bnez        $v0, . + 4 + (-0x55 << 2)
label_1c4c34:
    if (ctx->pc == 0x1C4C34u) {
        ctx->pc = 0x1C4C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4C30u;
        // 0x1c4c34: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4C38u;
        goto label_1c4c38;
    }
    ctx->pc = 0x1C4C30u;
    {
        const bool branch_taken_0x1c4c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4C30u;
        // 0x1c4c34: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4c30) {
            ctx->pc = 0x1C4AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4ae0;
        }
    }
    ctx->pc = 0x1C4C38u;
label_1c4c38:
    // 0x1c4c38: 0x100004b5  b           . + 4 + (0x4B5 << 2)
label_1c4c3c:
    if (ctx->pc == 0x1C4C3Cu) {
        ctx->pc = 0x1C4C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4C38u;
        // 0x1c4c3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4C40u;
        goto label_1c4c40;
    }
    ctx->pc = 0x1C4C38u;
    {
        const bool branch_taken_0x1c4c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4C38u;
        // 0x1c4c3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4c38) {
            ctx->pc = 0x1C5F10u;
            goto label_1c5f10;
        }
    }
    ctx->pc = 0x1C4C40u;
label_1c4c40:
    // 0x1c4c40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c4c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1c4c44:
    // 0x1c4c44: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x1c4c44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_1c4c48:
    // 0x1c4c48: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1c4c48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1c4c4c:
    // 0x1c4c4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c4c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1c4c50:
    // 0x1c4c50: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x1c4c50u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_1c4c54:
    // 0x1c4c54: 0xc6240034  lwc1        $f4, 0x34($s1)
    ctx->pc = 0x1c4c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1c4c58:
    // 0x1c4c58: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x1c4c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c4c5c:
    // 0x1c4c5c: 0xc625002c  lwc1        $f5, 0x2C($s1)
    ctx->pc = 0x1c4c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1c4c60:
    // 0x1c4c60: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x1c4c60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_1c4c64:
    // 0x1c4c64: 0x46002836  c.le.s      $f5, $f0
    ctx->pc = 0x1c4c64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c4c68:
    // 0x1c4c68: 0x0  nop
    ctx->pc = 0x1c4c68u;
    // NOP
label_1c4c6c:
    // 0x1c4c6c: 0x4502017c  bc1fl       . + 4 + (0x17C << 2)
label_1c4c70:
    if (ctx->pc == 0x1C4C70u) {
        ctx->pc = 0x1C4C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4C6Cu;
        // 0x1c4c70: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4C74u;
        goto label_1c4c74;
    }
    ctx->pc = 0x1C4C6Cu;
    {
        const bool branch_taken_0x1c4c6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c4c6c) {
            ctx->pc = 0x1C4C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4C6Cu;
            // 0x1c4c70: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5260u;
            goto label_1c5260;
        }
    }
    ctx->pc = 0x1C4C74u;
label_1c4c74:
    // 0x1c4c74: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x1c4c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c4c78:
    // 0x1c4c78: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1c4c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c4c7c:
    // 0x1c4c7c: 0x46042042  mul.s       $f1, $f4, $f4
    ctx->pc = 0x1c4c7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
label_1c4c80:
    // 0x1c4c80: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c4c80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1c4c84:
    // 0x1c4c84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c4c84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c4c88:
    // 0x1c4c88: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x1c4c88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1c4c8c:
    // 0x1c4c8c: 0x262200f0  addiu       $v0, $s1, 0xF0
    ctx->pc = 0x1c4c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
label_1c4c90:
    // 0x1c4c90: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1c4c90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1c4c94:
    // 0x1c4c94: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c4c94u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c4c98:
    // 0x1c4c98: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1c4c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4c9c:
    // 0x1c4c9c: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1c4c9cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c4ca0:
    // 0x1c4ca0: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x1c4ca0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1c4ca4:
    // 0x1c4ca4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1c4ca4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1c4ca8:
    // 0x1c4ca8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1c4ca8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c4cac:
    // 0x1c4cac: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1c4cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4cb0:
    // 0x1c4cb0: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1c4cb0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_1c4cb4:
    // 0x1c4cb4: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1c4cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4cb8:
    // 0x1c4cb8: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x1c4cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1c4cbc:
    // 0x1c4cbc: 0x26220110  addiu       $v0, $s1, 0x110
    ctx->pc = 0x1c4cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
label_1c4cc0:
    // 0x1c4cc0: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x1c4cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c4cc4:
    // 0x1c4cc4: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x1c4cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c4cc8:
    // 0x1c4cc8: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x1c4cc8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1c4ccc:
    // 0x1c4ccc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1c4cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1c4cd0:
    // 0x1c4cd0: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x1c4cd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1c4cd4:
    // 0x1c4cd4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c4cd4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c4cd8:
    // 0x1c4cd8: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1c4cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4cdc:
    // 0x1c4cdc: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1c4cdcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c4ce0:
    // 0x1c4ce0: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x1c4ce0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1c4ce4:
    // 0x1c4ce4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1c4ce4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1c4ce8:
    // 0x1c4ce8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1c4ce8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c4cec:
    // 0x1c4cec: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1c4cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4cf0:
    // 0x1c4cf0: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1c4cf0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_1c4cf4:
    // 0x1c4cf4: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1c4cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4cf8:
    // 0x1c4cf8: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1c4cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c4cfc:
    // 0x1c4cfc: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1c4cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c4d00:
    // 0x1c4d00: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x1c4d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c4d04:
    // 0x1c4d04: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1c4d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1c4d08:
    // 0x1c4d08: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1c4d08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1c4d0c:
    // 0x1c4d0c: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x1c4d0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1c4d10:
    // 0x1c4d10: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x1c4d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c4d14:
    // 0x1c4d14: 0x460428c1  sub.s       $f3, $f5, $f4
    ctx->pc = 0x1c4d14u;
    ctx->f[3] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_1c4d18:
    // 0x1c4d18: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x1c4d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1c4d1c:
    // 0x1c4d1c: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x1c4d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_1c4d20:
    // 0x1c4d20: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c4d20u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c4d24:
    // 0x1c4d24: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1c4d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4d28:
    // 0x1c4d28: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1c4d28u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1c4d2c:
    // 0x1c4d2c: 0x44081800  mfc1        $t0, $f3
    ctx->pc = 0x1c4d2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1c4d30:
    // 0x1c4d30: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1c4d30u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1c4d34:
    // 0x1c4d34: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1c4d34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c4d38:
    // 0x1c4d38: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1c4d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4d3c:
    // 0x1c4d3c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1c4d3cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c4d40:
    // 0x1c4d40: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1c4d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4d44:
    // 0x1c4d44: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x1c4d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c4d48:
    // 0x1c4d48: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1c4d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1c4d4c:
    // 0x1c4d4c: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x1c4d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c4d50:
    // 0x1c4d50: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x1c4d50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1c4d54:
    // 0x1c4d54: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1c4d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c4d58:
    // 0x1c4d58: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x1c4d58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1c4d5c:
    // 0x1c4d5c: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x1c4d5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1c4d60:
    // 0x1c4d60: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1c4d60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1c4d64:
    // 0x1c4d64: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x1c4d64u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_1c4d68:
    // 0x1c4d68: 0xfa440010  sqc2        $vf4, 0x10($s2)
    ctx->pc = 0x1c4d68u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4d6c:
    // 0x1c4d6c: 0xda440010  lqc2        $vf4, 0x10($s2)
    ctx->pc = 0x1c4d6cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_1c4d70:
    // 0x1c4d70: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x1c4d70u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1c4d74:
    // 0x1c4d74: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c4d74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c4d78:
    // 0x1c4d78: 0xfa440010  sqc2        $vf4, 0x10($s2)
    ctx->pc = 0x1c4d78u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4d7c:
    // 0x1c4d7c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1c4d7cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c4d80:
    // 0x1c4d80: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1c4d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4d84:
    // 0x1c4d84: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x1c4d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c4d88:
    // 0x1c4d88: 0x26220060  addiu       $v0, $s1, 0x60
    ctx->pc = 0x1c4d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_1c4d8c:
    // 0x1c4d8c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1c4d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c4d90:
    // 0x1c4d90: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x1c4d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c4d94:
    // 0x1c4d94: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x1c4d94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1c4d98:
    // 0x1c4d98: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1c4d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1c4d9c:
    // 0x1c4d9c: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x1c4d9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1c4da0:
    // 0x1c4da0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c4da0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c4da4:
    // 0x1c4da4: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1c4da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4da8:
    // 0x1c4da8: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1c4da8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1c4dac:
    // 0x1c4dac: 0x44081800  mfc1        $t0, $f3
    ctx->pc = 0x1c4dacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1c4db0:
    // 0x1c4db0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1c4db0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1c4db4:
    // 0x1c4db4: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1c4db4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c4db8:
    // 0x1c4db8: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1c4db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4dbc:
    // 0x1c4dbc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1c4dbcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c4dc0:
    // 0x1c4dc0: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1c4dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4dc4:
    // 0x1c4dc4: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x1c4dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c4dc8:
    // 0x1c4dc8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1c4dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1c4dcc:
    // 0x1c4dcc: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1c4dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c4dd0:
    // 0x1c4dd0: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x1c4dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c4dd4:
    // 0x1c4dd4: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x1c4dd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1c4dd8:
    // 0x1c4dd8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1c4dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1c4ddc:
    // 0x1c4ddc: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x1c4ddcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1c4de0:
    // 0x1c4de0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c4de0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c4de4:
    // 0x1c4de4: 0xfa440010  sqc2        $vf4, 0x10($s2)
    ctx->pc = 0x1c4de4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4de8:
    // 0x1c4de8: 0xda440010  lqc2        $vf4, 0x10($s2)
    ctx->pc = 0x1c4de8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_1c4dec:
    // 0x1c4dec: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x1c4decu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1c4df0:
    // 0x1c4df0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c4df0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c4df4:
    // 0x1c4df4: 0xfa440010  sqc2        $vf4, 0x10($s2)
    ctx->pc = 0x1c4df4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4df8:
    // 0x1c4df8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1c4df8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c4dfc:
    // 0x1c4dfc: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1c4dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4e00:
    // 0x1c4e00: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1c4e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c4e04:
    // 0x1c4e04: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1c4e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c4e08:
    // 0x1c4e08: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x1c4e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c4e0c:
    // 0x1c4e0c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1c4e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1c4e10:
    // 0x1c4e10: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1c4e10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1c4e14:
    // 0x1c4e14: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x1c4e14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1c4e18:
    // 0x1c4e18: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x1c4e18u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_1c4e1c:
    // 0x1c4e1c: 0xfa440010  sqc2        $vf4, 0x10($s2)
    ctx->pc = 0x1c4e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4e20:
    // 0x1c4e20: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1c4e20u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1c4e24:
    // 0x1c4e24: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x1c4e24u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c4e28:
    // 0x1c4e28: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c4e28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c4e2c:
    // 0x1c4e2c: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1c4e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4e30:
    // 0x1c4e30: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1c4e30u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c4e34:
    // 0x1c4e34: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1c4e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4e38:
    // 0x1c4e38: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1c4e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c4e3c:
    // 0x1c4e3c: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1c4e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c4e40:
    // 0x1c4e40: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x1c4e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c4e44:
    // 0x1c4e44: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1c4e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1c4e48:
    // 0x1c4e48: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x1c4e48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1c4e4c:
    // 0x1c4e4c: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x1c4e4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1c4e50:
    // 0x1c4e50: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c4e50u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c4e54:
    // 0x1c4e54: 0xfa440010  sqc2        $vf4, 0x10($s2)
    ctx->pc = 0x1c4e54u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4e58:
    // 0x1c4e58: 0xda440010  lqc2        $vf4, 0x10($s2)
    ctx->pc = 0x1c4e58u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_1c4e5c:
    // 0x1c4e5c: 0xd9450000  lqc2        $vf5, 0x0($t2)
    ctx->pc = 0x1c4e5cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
label_1c4e60:
    // 0x1c4e60: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c4e60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c4e64:
    // 0x1c4e64: 0xfa440010  sqc2        $vf4, 0x10($s2)
    ctx->pc = 0x1c4e64u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4e68:
    // 0x1c4e68: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1c4e68u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c4e6c:
    // 0x1c4e6c: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1c4e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4e70:
    // 0x1c4e70: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x1c4e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c4e74:
    // 0x1c4e74: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1c4e74u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c4e78:
    // 0x1c4e78: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x1c4e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c4e7c:
    // 0x1c4e7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c4e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c4e80:
    // 0x1c4e80: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1c4e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c4e84:
    // 0x1c4e84: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x1c4e84u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1c4e88:
    // 0x1c4e88: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x1c4e88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1c4e8c:
    // 0x1c4e8c: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x1c4e8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c4e90:
    // 0x1c4e90: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x1c4e90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1c4e94:
    // 0x1c4e94: 0xc071cc4  jal         func_1C7310
label_1c4e98:
    if (ctx->pc == 0x1C4E98u) {
        ctx->pc = 0x1C4E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4E94u;
        // 0x1c4e98: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4E9Cu;
        goto label_1c4e9c;
    }
    ctx->pc = 0x1C4E94u;
    SET_GPR_U32(ctx, 31, 0x1C4E9Cu);
    ctx->pc = 0x1C4E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4E94u;
    // 0x1c4e98: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7310u, 0x1C4E94u, 0x1C4E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4E9Cu;
label_1c4e9c:
    // 0x1c4e9c: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x1c4e9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_1c4ea0:
    // 0x1c4ea0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c4ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_1c4ea4:
    // 0x1c4ea4: 0x5440005c  bnel        $v0, $zero, . + 4 + (0x5C << 2)
label_1c4ea8:
    if (ctx->pc == 0x1C4EA8u) {
        ctx->pc = 0x1C4EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4EA4u;
        // 0x1c4ea8: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4EACu;
        goto label_1c4eac;
    }
    ctx->pc = 0x1C4EA4u;
    {
        const bool branch_taken_0x1c4ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4ea4) {
            ctx->pc = 0x1C4EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4EA4u;
            // 0x1c4ea8: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5018u;
            goto label_1c5018;
        }
    }
    ctx->pc = 0x1C4EACu;
label_1c4eac:
    // 0x1c4eac: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1c4eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1c4eb0:
    // 0x1c4eb0: 0x50400059  beql        $v0, $zero, . + 4 + (0x59 << 2)
label_1c4eb4:
    if (ctx->pc == 0x1C4EB4u) {
        ctx->pc = 0x1C4EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4EB0u;
        // 0x1c4eb4: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4EB8u;
        goto label_1c4eb8;
    }
    ctx->pc = 0x1C4EB0u;
    {
        const bool branch_taken_0x1c4eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4eb0) {
            ctx->pc = 0x1C4EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4EB0u;
            // 0x1c4eb4: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5018u;
            goto label_1c5018;
        }
    }
    ctx->pc = 0x1C4EB8u;
label_1c4eb8:
    // 0x1c4eb8: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x1c4eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1c4ebc:
    // 0x1c4ebc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c4ebcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c4ec0:
    // 0x1c4ec0: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1c4ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4ec4:
    // 0x1c4ec4: 0xdaa40010  lqc2        $vf4, 0x10($s5)
    ctx->pc = 0x1c4ec4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 16)));
label_1c4ec8:
    // 0x1c4ec8: 0xda850000  lqc2        $vf5, 0x0($s4)
    ctx->pc = 0x1c4ec8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_1c4ecc:
    // 0x1c4ecc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c4eccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c4ed0:
    // 0x1c4ed0: 0xfaa40010  sqc2        $vf4, 0x10($s5)
    ctx->pc = 0x1c4ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4ed4:
    // 0x1c4ed4: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x1c4ed4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_1c4ed8:
    // 0x1c4ed8: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1c4ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4edc:
    // 0x1c4edc: 0x10550006  beq         $v0, $s5, . + 4 + (0x6 << 2)
label_1c4ee0:
    if (ctx->pc == 0x1C4EE0u) {
        ctx->pc = 0x1C4EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4EDCu;
        // 0x1c4ee0: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4EE4u;
        goto label_1c4ee4;
    }
    ctx->pc = 0x1C4EDCu;
    {
        const bool branch_taken_0x1c4edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x1C4EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4EDCu;
        // 0x1c4ee0: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4edc) {
            ctx->pc = 0x1C4EF8u;
            goto label_1c4ef8;
        }
    }
    ctx->pc = 0x1C4EE4u;
label_1c4ee4:
    // 0x1c4ee4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1c4ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1c4ee8:
    // 0x1c4ee8: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1c4ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c4eec:
    // 0x1c4eec: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c4eecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1c4ef0:
    // 0x1c4ef0: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1c4ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c4ef4:
    // 0x1c4ef4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1c4ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1c4ef8:
    // 0x1c4ef8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c4ef8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4efc:
    // 0x1c4efc: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1c4efcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c4f00:
    // 0x1c4f00: 0x2630000c  addiu       $s0, $s1, 0xC
    ctx->pc = 0x1c4f00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_1c4f04:
    // 0x1c4f04: 0x0  nop
    ctx->pc = 0x1c4f04u;
    // NOP
label_1c4f08:
    // 0x1c4f08: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c4f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c4f0c:
    // 0x1c4f0c: 0x5040003e  beql        $v0, $zero, . + 4 + (0x3E << 2)
label_1c4f10:
    if (ctx->pc == 0x1C4F10u) {
        ctx->pc = 0x1C4F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F0Cu;
        // 0x1c4f10: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4F14u;
        goto label_1c4f14;
    }
    ctx->pc = 0x1C4F0Cu;
    {
        const bool branch_taken_0x1c4f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4f0c) {
            ctx->pc = 0x1C4F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4F0Cu;
            // 0x1c4f10: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5008u;
            goto label_1c5008;
        }
    }
    ctx->pc = 0x1C4F14u;
label_1c4f14:
    // 0x1c4f14: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1c4f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_1c4f18:
    // 0x1c4f18: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c4f18u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c4f1c:
    // 0x1c4f1c: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1c4f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4f20:
    // 0x1c4f20: 0xda440010  lqc2        $vf4, 0x10($s2)
    ctx->pc = 0x1c4f20u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_1c4f24:
    // 0x1c4f24: 0xda850000  lqc2        $vf5, 0x0($s4)
    ctx->pc = 0x1c4f24u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_1c4f28:
    // 0x1c4f28: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c4f28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c4f2c:
    // 0x1c4f2c: 0xfa440010  sqc2        $vf4, 0x10($s2)
    ctx->pc = 0x1c4f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4f30:
    // 0x1c4f30: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x1c4f30u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_1c4f34:
    // 0x1c4f34: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1c4f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c4f38:
    // 0x1c4f38: 0x10520006  beq         $v0, $s2, . + 4 + (0x6 << 2)
label_1c4f3c:
    if (ctx->pc == 0x1C4F3Cu) {
        ctx->pc = 0x1C4F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F38u;
        // 0x1c4f3c: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4F40u;
        goto label_1c4f40;
    }
    ctx->pc = 0x1C4F38u;
    {
        const bool branch_taken_0x1c4f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x1C4F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F38u;
        // 0x1c4f3c: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f38) {
            ctx->pc = 0x1C4F54u;
            goto label_1c4f54;
        }
    }
    ctx->pc = 0x1C4F40u;
label_1c4f40:
    // 0x1c4f40: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1c4f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1c4f44:
    // 0x1c4f44: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1c4f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c4f48:
    // 0x1c4f48: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c4f48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1c4f4c:
    // 0x1c4f4c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1c4f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c4f50:
    // 0x1c4f50: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1c4f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1c4f54:
    // 0x1c4f54: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c4f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c4f58:
    // 0x1c4f58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c4f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4f5c:
    // 0x1c4f5c: 0x946302fe  lhu         $v1, 0x2FE($v1)
    ctx->pc = 0x1c4f5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 766)));
label_1c4f60:
    // 0x1c4f60: 0x28620100  slti        $v0, $v1, 0x100
    ctx->pc = 0x1c4f60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
label_1c4f64:
    // 0x1c4f64: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c4f68:
    if (ctx->pc == 0x1C4F68u) {
        ctx->pc = 0x1C4F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F64u;
        // 0x1c4f68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4F6Cu;
        goto label_1c4f6c;
    }
    ctx->pc = 0x1C4F64u;
    {
        const bool branch_taken_0x1c4f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F64u;
        // 0x1c4f68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f64) {
            ctx->pc = 0x1C4F74u;
            goto label_1c4f74;
        }
    }
    ctx->pc = 0x1C4F6Cu;
label_1c4f6c:
    // 0x1c4f6c: 0x286201ff  slti        $v0, $v1, 0x1FF
    ctx->pc = 0x1c4f6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)511) ? 1 : 0);
label_1c4f70:
    // 0x1c4f70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c4f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c4f74:
    // 0x1c4f74: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c4f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c4f78:
    // 0x1c4f78: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_1c4f7c:
    if (ctx->pc == 0x1C4F7Cu) {
        ctx->pc = 0x1C4F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F78u;
        // 0x1c4f7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4F80u;
        goto label_1c4f80;
    }
    ctx->pc = 0x1C4F78u;
    {
        const bool branch_taken_0x1c4f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4f78) {
            ctx->pc = 0x1C4F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4F78u;
            // 0x1c4f7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4FE0u;
            goto label_1c4fe0;
        }
    }
    ctx->pc = 0x1C4F80u;
label_1c4f80:
    // 0x1c4f80: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x1c4f80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
label_1c4f84:
    // 0x1c4f84: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c4f88:
    if (ctx->pc == 0x1C4F88u) {
        ctx->pc = 0x1C4F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F84u;
        // 0x1c4f88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4F8Cu;
        goto label_1c4f8c;
    }
    ctx->pc = 0x1C4F84u;
    {
        const bool branch_taken_0x1c4f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F84u;
        // 0x1c4f88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f84) {
            ctx->pc = 0x1C4F94u;
            goto label_1c4f94;
        }
    }
    ctx->pc = 0x1C4F8Cu;
label_1c4f8c:
    // 0x1c4f8c: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x1c4f8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_1c4f90:
    // 0x1c4f90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c4f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c4f94:
    // 0x1c4f94: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c4f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c4f98:
    // 0x1c4f98: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_1c4f9c:
    if (ctx->pc == 0x1C4F9Cu) {
        ctx->pc = 0x1C4F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F98u;
        // 0x1c4f9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4FA0u;
        goto label_1c4fa0;
    }
    ctx->pc = 0x1C4F98u;
    {
        const bool branch_taken_0x1c4f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4f98) {
            ctx->pc = 0x1C4F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4F98u;
            // 0x1c4f9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4FE0u;
            goto label_1c4fe0;
        }
    }
    ctx->pc = 0x1C4FA0u;
label_1c4fa0:
    // 0x1c4fa0: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x1c4fa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_1c4fa4:
    // 0x1c4fa4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c4fa8:
    if (ctx->pc == 0x1C4FA8u) {
        ctx->pc = 0x1C4FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4FA4u;
        // 0x1c4fa8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4FACu;
        goto label_1c4fac;
    }
    ctx->pc = 0x1C4FA4u;
    {
        const bool branch_taken_0x1c4fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4FA4u;
        // 0x1c4fa8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4fa4) {
            ctx->pc = 0x1C4FB4u;
            goto label_1c4fb4;
        }
    }
    ctx->pc = 0x1C4FACu;
label_1c4fac:
    // 0x1c4fac: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x1c4facu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
label_1c4fb0:
    // 0x1c4fb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c4fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c4fb4:
    // 0x1c4fb4: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c4fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c4fb8:
    // 0x1c4fb8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_1c4fbc:
    if (ctx->pc == 0x1C4FBCu) {
        ctx->pc = 0x1C4FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4FB8u;
        // 0x1c4fbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4FC0u;
        goto label_1c4fc0;
    }
    ctx->pc = 0x1C4FB8u;
    {
        const bool branch_taken_0x1c4fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4fb8) {
            ctx->pc = 0x1C4FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4FB8u;
            // 0x1c4fbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4FE0u;
            goto label_1c4fe0;
        }
    }
    ctx->pc = 0x1C4FC0u;
label_1c4fc0:
    // 0x1c4fc0: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x1c4fc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
label_1c4fc4:
    // 0x1c4fc4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c4fc8:
    if (ctx->pc == 0x1C4FC8u) {
        ctx->pc = 0x1C4FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4FC4u;
        // 0x1c4fc8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4FCCu;
        goto label_1c4fcc;
    }
    ctx->pc = 0x1C4FC4u;
    {
        const bool branch_taken_0x1c4fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4FC4u;
        // 0x1c4fc8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4fc4) {
            ctx->pc = 0x1C4FD4u;
            goto label_1c4fd4;
        }
    }
    ctx->pc = 0x1C4FCCu;
label_1c4fcc:
    // 0x1c4fcc: 0x28620600  slti        $v0, $v1, 0x600
    ctx->pc = 0x1c4fccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1536) ? 1 : 0);
label_1c4fd0:
    // 0x1c4fd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c4fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c4fd4:
    // 0x1c4fd4: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c4fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c4fd8:
    // 0x1c4fd8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1c4fdc:
    if (ctx->pc == 0x1C4FDCu) {
        ctx->pc = 0x1C4FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4FD8u;
        // 0x1c4fdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4FE0u;
        goto label_1c4fe0;
    }
    ctx->pc = 0x1C4FD8u;
    {
        const bool branch_taken_0x1c4fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4fd8) {
            ctx->pc = 0x1C4FDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4FD8u;
            // 0x1c4fdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4FE0u;
            goto label_1c4fe0;
        }
    }
    ctx->pc = 0x1C4FE0u;
label_1c4fe0:
    // 0x1c4fe0: 0x54b70009  bnel        $a1, $s7, . + 4 + (0x9 << 2)
label_1c4fe4:
    if (ctx->pc == 0x1C4FE4u) {
        ctx->pc = 0x1C4FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4FE0u;
        // 0x1c4fe4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4FE8u;
        goto label_1c4fe8;
    }
    ctx->pc = 0x1C4FE0u;
    {
        const bool branch_taken_0x1c4fe0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 23));
        if (branch_taken_0x1c4fe0) {
            ctx->pc = 0x1C4FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4FE0u;
            // 0x1c4fe4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5008u;
            goto label_1c5008;
        }
    }
    ctx->pc = 0x1C4FE8u;
label_1c4fe8:
    // 0x1c4fe8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c4fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c4fec:
    // 0x1c4fec: 0x8c820214  lw          $v0, 0x214($a0)
    ctx->pc = 0x1c4fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 532)));
label_1c4ff0:
    // 0x1c4ff0: 0x8c8500f0  lw          $a1, 0xF0($a0)
    ctx->pc = 0x1c4ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_1c4ff4:
    // 0x1c4ff4: 0x84430070  lh          $v1, 0x70($v0)
    ctx->pc = 0x1c4ff4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1c4ff8:
    // 0x1c4ff8: 0x8c460074  lw          $a2, 0x74($v0)
    ctx->pc = 0x1c4ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1c4ffc:
    // 0x1c4ffc: 0xc0f809  jalr        $a2
label_1c5000:
    if (ctx->pc == 0x1C5000u) {
        ctx->pc = 0x1C5000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4FFCu;
        // 0x1c5000: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5004u;
        goto label_1c5004;
    }
    ctx->pc = 0x1C4FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1C5004u);
        ctx->pc = 0x1C5000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4FFCu;
        // 0x1c5000: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4FFCu, 0x1C5004u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C5004u;
label_1c5004:
    // 0x1c5004: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1c5004u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1c5008:
    // 0x1c5008: 0x2e620008  sltiu       $v0, $s3, 0x8
    ctx->pc = 0x1c5008u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1c500c:
    // 0x1c500c: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
label_1c5010:
    if (ctx->pc == 0x1C5010u) {
        ctx->pc = 0x1C5010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C500Cu;
        // 0x1c5010: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5014u;
        goto label_1c5014;
    }
    ctx->pc = 0x1C500Cu;
    {
        const bool branch_taken_0x1c500c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C500Cu;
        // 0x1c5010: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c500c) {
            ctx->pc = 0x1C4F08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4f08;
        }
    }
    ctx->pc = 0x1C5014u;
label_1c5014:
    // 0x1c5014: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x1c5014u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_1c5018:
    // 0x1c5018: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c5018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1c501c:
    // 0x1c501c: 0x144003bc  bnez        $v0, . + 4 + (0x3BC << 2)
label_1c5020:
    if (ctx->pc == 0x1C5020u) {
        ctx->pc = 0x1C5020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C501Cu;
        // 0x1c5020: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5024u;
        goto label_1c5024;
    }
    ctx->pc = 0x1C501Cu;
    {
        const bool branch_taken_0x1c501c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C501Cu;
        // 0x1c5020: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c501c) {
            ctx->pc = 0x1C5F10u;
            goto label_1c5f10;
        }
    }
    ctx->pc = 0x1C5024u;
label_1c5024:
    // 0x1c5024: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1c5024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1c5028:
    // 0x1c5028: 0x504003b9  beql        $v0, $zero, . + 4 + (0x3B9 << 2)
label_1c502c:
    if (ctx->pc == 0x1C502Cu) {
        ctx->pc = 0x1C502Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5028u;
        // 0x1c502c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5030u;
        goto label_1c5030;
    }
    ctx->pc = 0x1C5028u;
    {
        const bool branch_taken_0x1c5028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5028) {
            ctx->pc = 0x1C502Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5028u;
            // 0x1c502c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5F10u;
            goto label_1c5f10;
        }
    }
    ctx->pc = 0x1C5030u;
label_1c5030:
    // 0x1c5030: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x1c5030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c5034:
    // 0x1c5034: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x1c5034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c5038:
    // 0x1c5038: 0x24430100  addiu       $v1, $v0, 0x100
    ctx->pc = 0x1c5038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
label_1c503c:
    // 0x1c503c: 0x52c30008  beql        $s6, $v1, . + 4 + (0x8 << 2)
label_1c5040:
    if (ctx->pc == 0x1C5040u) {
        ctx->pc = 0x1C5040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C503Cu;
        // 0x1c5040: 0x27a30080  addiu       $v1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5044u;
        goto label_1c5044;
    }
    ctx->pc = 0x1C503Cu;
    {
        const bool branch_taken_0x1c503c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c503c) {
            ctx->pc = 0x1C5040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C503Cu;
            // 0x1c5040: 0x27a30080  addiu       $v1, $sp, 0x80 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5060u;
            goto label_1c5060;
        }
    }
    ctx->pc = 0x1C5044u;
label_1c5044:
    // 0x1c5044: 0xc4400100  lwc1        $f0, 0x100($v0)
    ctx->pc = 0x1c5044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c5048:
    // 0x1c5048: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1c5048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1c504c:
    // 0x1c504c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1c504cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c5050:
    // 0x1c5050: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x1c5050u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_1c5054:
    // 0x1c5054: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1c5054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c5058:
    // 0x1c5058: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1c5058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_1c505c:
    // 0x1c505c: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x1c505cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1c5060:
    // 0x1c5060: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1c5060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1c5064:
    // 0x1c5064: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x1c5064u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_1c5068:
    // 0x1c5068: 0xf8440010  sqc2        $vf4, 0x10($v0)
    ctx->pc = 0x1c5068u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c506c:
    // 0x1c506c: 0xdaa40030  lqc2        $vf4, 0x30($s5)
    ctx->pc = 0x1c506cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 48)));
label_1c5070:
    // 0x1c5070: 0xdbc50000  lqc2        $vf5, 0x0($fp)
    ctx->pc = 0x1c5070u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_1c5074:
    // 0x1c5074: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c5074u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c5078:
    // 0x1c5078: 0xfaa40030  sqc2        $vf4, 0x30($s5)
    ctx->pc = 0x1c5078u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c507c:
    // 0x1c507c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1c507cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c5080:
    // 0x1c5080: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1c5080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5084:
    // 0x1c5084: 0x12a20007  beq         $s5, $v0, . + 4 + (0x7 << 2)
label_1c5088:
    if (ctx->pc == 0x1C5088u) {
        ctx->pc = 0x1C5088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5084u;
        // 0x1c5088: 0x60f02d  daddu       $fp, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C508Cu;
        goto label_1c508c;
    }
    ctx->pc = 0x1C5084u;
    {
        const bool branch_taken_0x1c5084 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C5088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5084u;
        // 0x1c5088: 0x60f02d  daddu       $fp, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5084) {
            ctx->pc = 0x1C50A4u;
            goto label_1c50a4;
        }
    }
    ctx->pc = 0x1C508Cu;
label_1c508c:
    // 0x1c508c: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1c508cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c5090:
    // 0x1c5090: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x1c5090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c5094:
    // 0x1c5094: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1c5094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1c5098:
    // 0x1c5098: 0xe6a10004  swc1        $f1, 0x4($s5)
    ctx->pc = 0x1c5098u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
label_1c509c:
    // 0x1c509c: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x1c509cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c50a0:
    // 0x1c50a0: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x1c50a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_1c50a4:
    // 0x1c50a4: 0xc07df68  jal         func_1F7DA0
label_1c50a8:
    if (ctx->pc == 0x1C50A8u) {
        ctx->pc = 0x1C50A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C50A4u;
        // 0x1c50a8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C50ACu;
        goto label_1c50ac;
    }
    ctx->pc = 0x1C50A4u;
    SET_GPR_U32(ctx, 31, 0x1C50ACu);
    ctx->pc = 0x1C50A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50A4u;
    // 0x1c50a8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x1C50A4u, 0x1C50ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50ACu;
label_1c50ac:
    // 0x1c50ac: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1c50acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1c50b0:
    // 0x1c50b0: 0x24620100  addiu       $v0, $v1, 0x100
    ctx->pc = 0x1c50b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
label_1c50b4:
    // 0x1c50b4: 0x10550006  beq         $v0, $s5, . + 4 + (0x6 << 2)
label_1c50b8:
    if (ctx->pc == 0x1C50B8u) {
        ctx->pc = 0x1C50B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C50B4u;
        // 0x1c50b8: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C50BCu;
        goto label_1c50bc;
    }
    ctx->pc = 0x1C50B4u;
    {
        const bool branch_taken_0x1c50b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x1C50B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C50B4u;
        // 0x1c50b8: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c50b4) {
            ctx->pc = 0x1C50D0u;
            goto label_1c50d0;
        }
    }
    ctx->pc = 0x1C50BCu;
label_1c50bc:
    // 0x1c50bc: 0xe4600100  swc1        $f0, 0x100($v1)
    ctx->pc = 0x1c50bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 256), bits); }
label_1c50c0:
    // 0x1c50c0: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1c50c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c50c4:
    // 0x1c50c4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c50c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1c50c8:
    // 0x1c50c8: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1c50c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c50cc:
    // 0x1c50cc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1c50ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1c50d0:
    // 0x1c50d0: 0xc0527ae  jal         func_149EB8
label_1c50d4:
    if (ctx->pc == 0x1C50D4u) {
        ctx->pc = 0x1C50D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C50D0u;
        // 0x1c50d4: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C50D8u;
        goto label_1c50d8;
    }
    ctx->pc = 0x1C50D0u;
    SET_GPR_U32(ctx, 31, 0x1C50D8u);
    ctx->pc = 0x1C50D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50D0u;
    // 0x1c50d4: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1C50D0u, 0x1C50D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50D8u;
label_1c50d8:
    // 0x1c50d8: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x1c50d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c50dc:
    // 0x1c50dc: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1c50dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1c50e0:
    // 0x1c50e0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c50e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1c50e4:
    // 0x1c50e4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1c50e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c50e8:
    // 0x1c50e8: 0x2632000c  addiu       $s2, $s1, 0xC
    ctx->pc = 0x1c50e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_1c50ec:
    // 0x1c50ec: 0xc051f18  jal         func_147C60
label_1c50f0:
    if (ctx->pc == 0x1C50F0u) {
        ctx->pc = 0x1C50F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C50ECu;
        // 0x1c50f0: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C50F4u;
        goto label_1c50f4;
    }
    ctx->pc = 0x1C50ECu;
    SET_GPR_U32(ctx, 31, 0x1C50F4u);
    ctx->pc = 0x1C50F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50ECu;
    // 0x1c50f0: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x1C50ECu, 0x1C50F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50F4u;
label_1c50f4:
    // 0x1c50f4: 0x27b40090  addiu       $s4, $sp, 0x90
    ctx->pc = 0x1c50f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1c50f8:
    // 0x1c50f8: 0x27b300a0  addiu       $s3, $sp, 0xA0
    ctx->pc = 0x1c50f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1c50fc:
    // 0x1c50fc: 0x0  nop
    ctx->pc = 0x1c50fcu;
    // NOP
label_1c5100:
    // 0x1c5100: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x1c5100u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c5104:
    // 0x1c5104: 0x52000051  beql        $s0, $zero, . + 4 + (0x51 << 2)
label_1c5108:
    if (ctx->pc == 0x1C5108u) {
        ctx->pc = 0x1C5108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5104u;
        // 0x1c5108: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C510Cu;
        goto label_1c510c;
    }
    ctx->pc = 0x1C5104u;
    {
        const bool branch_taken_0x1c5104 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5104) {
            ctx->pc = 0x1C5108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5104u;
            // 0x1c5108: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C524Cu;
            goto label_1c524c;
        }
    }
    ctx->pc = 0x1C510Cu;
label_1c510c:
    // 0x1c510c: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x1c510cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c5110:
    // 0x1c5110: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1c5110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_1c5114:
    // 0x1c5114: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x1c5114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c5118:
    // 0x1c5118: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x1c5118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1c511c:
    // 0x1c511c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c511cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c5120:
    // 0x1c5120: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x1c5120u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c5124:
    // 0x1c5124: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c5124u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c5128:
    // 0x1c5128: 0xfa840010  sqc2        $vf4, 0x10($s4)
    ctx->pc = 0x1c5128u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c512c:
    // 0x1c512c: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1c512cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_1c5130:
    // 0x1c5130: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1c5130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5134:
    // 0x1c5134: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1c5134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1c5138:
    // 0x1c5138: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x1c5138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c513c:
    // 0x1c513c: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x1c513cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c5140:
    // 0x1c5140: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1c5140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_1c5144:
    // 0x1c5144: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x1c5144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c5148:
    // 0x1c5148: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1c5148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1c514c:
    // 0x1c514c: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x1c514cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1c5150:
    // 0x1c5150: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x1c5150u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_1c5154:
    // 0x1c5154: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x1c5154u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_1c5158:
    // 0x1c5158: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x1c5158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c515c:
    // 0x1c515c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c515cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c5160:
    // 0x1c5160: 0xc0c28ac  jal         func_30A2B0
label_1c5164:
    if (ctx->pc == 0x1C5164u) {
        ctx->pc = 0x1C5164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5160u;
        // 0x1c5164: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5168u;
        goto label_1c5168;
    }
    ctx->pc = 0x1C5160u;
    SET_GPR_U32(ctx, 31, 0x1C5168u);
    ctx->pc = 0x1C5164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5160u;
    // 0x1c5164: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x1C5160u, 0x1C5168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5168u;
label_1c5168:
    // 0x1c5168: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1c5168u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_1c516c:
    // 0x1c516c: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1c516cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5170:
    // 0x1c5170: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1c5170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_1c5174:
    // 0x1c5174: 0x10540006  beq         $v0, $s4, . + 4 + (0x6 << 2)
label_1c5178:
    if (ctx->pc == 0x1C5178u) {
        ctx->pc = 0x1C5178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5174u;
        // 0x1c5178: 0xc7a00090  lwc1        $f0, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C517Cu;
        goto label_1c517c;
    }
    ctx->pc = 0x1C5174u;
    {
        const bool branch_taken_0x1c5174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x1C5178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5174u;
        // 0x1c5178: 0xc7a00090  lwc1        $f0, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5174) {
            ctx->pc = 0x1C5190u;
            goto label_1c5190;
        }
    }
    ctx->pc = 0x1C517Cu;
label_1c517c:
    // 0x1c517c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1c517cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1c5180:
    // 0x1c5180: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x1c5180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c5184:
    // 0x1c5184: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c5184u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1c5188:
    // 0x1c5188: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x1c5188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c518c:
    // 0x1c518c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1c518cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1c5190:
    // 0x1c5190: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1c5190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c5194:
    // 0x1c5194: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c5194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c5198:
    // 0x1c5198: 0x946302fe  lhu         $v1, 0x2FE($v1)
    ctx->pc = 0x1c5198u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 766)));
label_1c519c:
    // 0x1c519c: 0x28620100  slti        $v0, $v1, 0x100
    ctx->pc = 0x1c519cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
label_1c51a0:
    // 0x1c51a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c51a4:
    if (ctx->pc == 0x1C51A4u) {
        ctx->pc = 0x1C51A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51A0u;
        // 0x1c51a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C51A8u;
        goto label_1c51a8;
    }
    ctx->pc = 0x1C51A0u;
    {
        const bool branch_taken_0x1c51a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C51A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51A0u;
        // 0x1c51a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c51a0) {
            ctx->pc = 0x1C51B0u;
            goto label_1c51b0;
        }
    }
    ctx->pc = 0x1C51A8u;
label_1c51a8:
    // 0x1c51a8: 0x286201ff  slti        $v0, $v1, 0x1FF
    ctx->pc = 0x1c51a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)511) ? 1 : 0);
label_1c51ac:
    // 0x1c51ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c51acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c51b0:
    // 0x1c51b0: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c51b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c51b4:
    // 0x1c51b4: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
label_1c51b8:
    if (ctx->pc == 0x1C51B8u) {
        ctx->pc = 0x1C51B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51B4u;
        // 0x1c51b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C51BCu;
        goto label_1c51bc;
    }
    ctx->pc = 0x1C51B4u;
    {
        const bool branch_taken_0x1c51b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c51b4) {
            ctx->pc = 0x1C51B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C51B4u;
            // 0x1c51b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5220u;
            goto label_1c5220;
        }
    }
    ctx->pc = 0x1C51BCu;
label_1c51bc:
    // 0x1c51bc: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x1c51bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
label_1c51c0:
    // 0x1c51c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c51c4:
    if (ctx->pc == 0x1C51C4u) {
        ctx->pc = 0x1C51C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51C0u;
        // 0x1c51c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C51C8u;
        goto label_1c51c8;
    }
    ctx->pc = 0x1C51C0u;
    {
        const bool branch_taken_0x1c51c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C51C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51C0u;
        // 0x1c51c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c51c0) {
            ctx->pc = 0x1C51D0u;
            goto label_1c51d0;
        }
    }
    ctx->pc = 0x1C51C8u;
label_1c51c8:
    // 0x1c51c8: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x1c51c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_1c51cc:
    // 0x1c51cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c51ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c51d0:
    // 0x1c51d0: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c51d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c51d4:
    // 0x1c51d4: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_1c51d8:
    if (ctx->pc == 0x1C51D8u) {
        ctx->pc = 0x1C51D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51D4u;
        // 0x1c51d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C51DCu;
        goto label_1c51dc;
    }
    ctx->pc = 0x1C51D4u;
    {
        const bool branch_taken_0x1c51d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c51d4) {
            ctx->pc = 0x1C51D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C51D4u;
            // 0x1c51d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5220u;
            goto label_1c5220;
        }
    }
    ctx->pc = 0x1C51DCu;
label_1c51dc:
    // 0x1c51dc: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x1c51dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_1c51e0:
    // 0x1c51e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c51e4:
    if (ctx->pc == 0x1C51E4u) {
        ctx->pc = 0x1C51E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51E0u;
        // 0x1c51e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C51E8u;
        goto label_1c51e8;
    }
    ctx->pc = 0x1C51E0u;
    {
        const bool branch_taken_0x1c51e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C51E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51E0u;
        // 0x1c51e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c51e0) {
            ctx->pc = 0x1C51F0u;
            goto label_1c51f0;
        }
    }
    ctx->pc = 0x1C51E8u;
label_1c51e8:
    // 0x1c51e8: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x1c51e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
label_1c51ec:
    // 0x1c51ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c51ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c51f0:
    // 0x1c51f0: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c51f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c51f4:
    // 0x1c51f4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_1c51f8:
    if (ctx->pc == 0x1C51F8u) {
        ctx->pc = 0x1C51F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51F4u;
        // 0x1c51f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C51FCu;
        goto label_1c51fc;
    }
    ctx->pc = 0x1C51F4u;
    {
        const bool branch_taken_0x1c51f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c51f4) {
            ctx->pc = 0x1C51F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C51F4u;
            // 0x1c51f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5220u;
            goto label_1c5220;
        }
    }
    ctx->pc = 0x1C51FCu;
label_1c51fc:
    // 0x1c51fc: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x1c51fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
label_1c5200:
    // 0x1c5200: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c5204:
    if (ctx->pc == 0x1C5204u) {
        ctx->pc = 0x1C5204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5200u;
        // 0x1c5204: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5208u;
        goto label_1c5208;
    }
    ctx->pc = 0x1C5200u;
    {
        const bool branch_taken_0x1c5200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5200u;
        // 0x1c5204: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5200) {
            ctx->pc = 0x1C5210u;
            goto label_1c5210;
        }
    }
    ctx->pc = 0x1C5208u;
label_1c5208:
    // 0x1c5208: 0x28620600  slti        $v0, $v1, 0x600
    ctx->pc = 0x1c5208u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1536) ? 1 : 0);
label_1c520c:
    // 0x1c520c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c520cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c5210:
    // 0x1c5210: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c5210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c5214:
    // 0x1c5214: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1c5218:
    if (ctx->pc == 0x1C5218u) {
        ctx->pc = 0x1C5218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5214u;
        // 0x1c5218: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C521Cu;
        goto label_1c521c;
    }
    ctx->pc = 0x1C5214u;
    {
        const bool branch_taken_0x1c5214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5214u;
        // 0x1c5218: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5214) {
            ctx->pc = 0x1C5224u;
            goto label_1c5224;
        }
    }
    ctx->pc = 0x1C521Cu;
label_1c521c:
    // 0x1c521c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c521cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c5220:
    // 0x1c5220: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c5220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c5224:
    // 0x1c5224: 0x54a20009  bnel        $a1, $v0, . + 4 + (0x9 << 2)
label_1c5228:
    if (ctx->pc == 0x1C5228u) {
        ctx->pc = 0x1C5228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5224u;
        // 0x1c5228: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C522Cu;
        goto label_1c522c;
    }
    ctx->pc = 0x1C5224u;
    {
        const bool branch_taken_0x1c5224 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c5224) {
            ctx->pc = 0x1C5228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5224u;
            // 0x1c5228: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C524Cu;
            goto label_1c524c;
        }
    }
    ctx->pc = 0x1C522Cu;
label_1c522c:
    // 0x1c522c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1c522cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c5230:
    // 0x1c5230: 0x8c820214  lw          $v0, 0x214($a0)
    ctx->pc = 0x1c5230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 532)));
label_1c5234:
    // 0x1c5234: 0x8c8500f0  lw          $a1, 0xF0($a0)
    ctx->pc = 0x1c5234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_1c5238:
    // 0x1c5238: 0x84430070  lh          $v1, 0x70($v0)
    ctx->pc = 0x1c5238u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1c523c:
    // 0x1c523c: 0x8c460074  lw          $a2, 0x74($v0)
    ctx->pc = 0x1c523cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1c5240:
    // 0x1c5240: 0xc0f809  jalr        $a2
label_1c5244:
    if (ctx->pc == 0x1C5244u) {
        ctx->pc = 0x1C5244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5240u;
        // 0x1c5244: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5248u;
        goto label_1c5248;
    }
    ctx->pc = 0x1C5240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1C5248u);
        ctx->pc = 0x1C5244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5240u;
        // 0x1c5244: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5240u, 0x1C5248u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C5248u;
label_1c5248:
    // 0x1c5248: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1c5248u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1c524c:
    // 0x1c524c: 0x2ea20008  sltiu       $v0, $s5, 0x8
    ctx->pc = 0x1c524cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1c5250:
    // 0x1c5250: 0x1440ffab  bnez        $v0, . + 4 + (-0x55 << 2)
label_1c5254:
    if (ctx->pc == 0x1C5254u) {
        ctx->pc = 0x1C5254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5250u;
        // 0x1c5254: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5258u;
        goto label_1c5258;
    }
    ctx->pc = 0x1C5250u;
    {
        const bool branch_taken_0x1c5250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5250u;
        // 0x1c5254: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5250) {
            ctx->pc = 0x1C5100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c5100;
        }
    }
    ctx->pc = 0x1C5258u;
label_1c5258:
    // 0x1c5258: 0x1000032d  b           . + 4 + (0x32D << 2)
label_1c525c:
    if (ctx->pc == 0x1C525Cu) {
        ctx->pc = 0x1C525Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5258u;
        // 0x1c525c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5260u;
        goto label_1c5260;
    }
    ctx->pc = 0x1C5258u;
    {
        const bool branch_taken_0x1c5258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C525Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5258u;
        // 0x1c525c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5258) {
            ctx->pc = 0x1C5F10u;
            goto label_1c5f10;
        }
    }
    ctx->pc = 0x1C5260u;
label_1c5260:
    // 0x1c5260: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c5260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1c5264:
    // 0x1c5264: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x1c5264u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_1c5268:
    // 0x1c5268: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1c5268u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1c526c:
    // 0x1c526c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c526cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1c5270:
    // 0x1c5270: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x1c5270u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_1c5274:
    // 0x1c5274: 0xc6220034  lwc1        $f2, 0x34($s1)
    ctx->pc = 0x1c5274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c5278:
    // 0x1c5278: 0xc6270038  lwc1        $f7, 0x38($s1)
    ctx->pc = 0x1c5278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1c527c:
    // 0x1c527c: 0xc620003c  lwc1        $f0, 0x3C($s1)
    ctx->pc = 0x1c527cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c5280:
    // 0x1c5280: 0x46071180  add.s       $f6, $f2, $f7
    ctx->pc = 0x1c5280u;
    ctx->f[6] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
label_1c5284:
    // 0x1c5284: 0xc624002c  lwc1        $f4, 0x2C($s1)
    ctx->pc = 0x1c5284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1c5288:
    // 0x1c5288: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x1c5288u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
label_1c528c:
    // 0x1c528c: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x1c528cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c5290:
    // 0x1c5290: 0x0  nop
    ctx->pc = 0x1c5290u;
    // NOP
label_1c5294:
    // 0x1c5294: 0x450201f9  bc1fl       . + 4 + (0x1F9 << 2)
label_1c5298:
    if (ctx->pc == 0x1C5298u) {
        ctx->pc = 0x1C5298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5294u;
        // 0x1c5298: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C529Cu;
        goto label_1c529c;
    }
    ctx->pc = 0x1C5294u;
    {
        const bool branch_taken_0x1c5294 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c5294) {
            ctx->pc = 0x1C5298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5294u;
            // 0x1c5298: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5A7Cu;
            goto label_1c5a7c;
        }
    }
    ctx->pc = 0x1C529Cu;
label_1c529c:
    // 0x1c529c: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x1c529cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c52a0:
    // 0x1c52a0: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1c52a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c52a4:
    // 0x1c52a4: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x1c52a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_1c52a8:
    // 0x1c52a8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c52a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1c52ac:
    // 0x1c52ac: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1c52acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1c52b0:
    // 0x1c52b0: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1c52b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1c52b4:
    // 0x1c52b4: 0x262200f0  addiu       $v0, $s1, 0xF0
    ctx->pc = 0x1c52b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
label_1c52b8:
    // 0x1c52b8: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x1c52b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_1c52bc:
    // 0x1c52bc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c52bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c52c0:
    // 0x1c52c0: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1c52c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c52c4:
    // 0x1c52c4: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1c52c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c52c8:
    // 0x1c52c8: 0x44081000  mfc1        $t0, $f2
    ctx->pc = 0x1c52c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1c52cc:
    // 0x1c52cc: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1c52ccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1c52d0:
    // 0x1c52d0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1c52d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c52d4:
    // 0x1c52d4: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1c52d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c52d8:
    // 0x1c52d8: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x1c52d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_1c52dc:
    // 0x1c52dc: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1c52dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c52e0:
    // 0x1c52e0: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x1c52e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1c52e4:
    // 0x1c52e4: 0x26220110  addiu       $v0, $s1, 0x110
    ctx->pc = 0x1c52e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
label_1c52e8:
    // 0x1c52e8: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x1c52e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c52ec:
    // 0x1c52ec: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x1c52ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c52f0:
    // 0x1c52f0: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x1c52f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1c52f4:
    // 0x1c52f4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1c52f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1c52f8:
    // 0x1c52f8: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x1c52f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1c52fc:
    // 0x1c52fc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c52fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c5300:
    // 0x1c5300: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1c5300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5304:
    // 0x1c5304: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1c5304u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c5308:
    // 0x1c5308: 0x44081000  mfc1        $t0, $f2
    ctx->pc = 0x1c5308u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1c530c:
    // 0x1c530c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1c530cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1c5310:
    // 0x1c5310: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1c5310u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c5314:
    // 0x1c5314: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1c5314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5318:
    // 0x1c5318: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x1c5318u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_1c531c:
    // 0x1c531c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1c531cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5320:
    // 0x1c5320: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1c5320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c5324:
    // 0x1c5324: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1c5324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c5328:
    // 0x1c5328: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x1c5328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c532c:
    // 0x1c532c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1c532cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1c5330:
    // 0x1c5330: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1c5330u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1c5334:
    // 0x1c5334: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x1c5334u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1c5338:
    // 0x1c5338: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x1c5338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c533c:
    // 0x1c533c: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x1c533cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c5340:
    // 0x1c5340: 0x46062101  sub.s       $f4, $f4, $f6
    ctx->pc = 0x1c5340u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
label_1c5344:
    // 0x1c5344: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1c5344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1c5348:
    // 0x1c5348: 0x26230050  addiu       $v1, $s1, 0x50
    ctx->pc = 0x1c5348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_1c534c:
    // 0x1c534c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1c534cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c5350:
    // 0x1c5350: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1c5350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5354:
    // 0x1c5354: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1c5354u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1c5358:
    // 0x1c5358: 0x44083800  mfc1        $t0, $f7
    ctx->pc = 0x1c5358u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1c535c:
    // 0x1c535c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1c535cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1c5360:
    // 0x1c5360: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1c5360u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c5364:
    // 0x1c5364: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1c5364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5368:
    // 0x1c5368: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c5368u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c536c:
    // 0x1c536c: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1c536cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5370:
    // 0x1c5370: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x1c5370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c5374:
    // 0x1c5374: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1c5374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1c5378:
    // 0x1c5378: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x1c5378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c537c:
    // 0x1c537c: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x1c537cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1c5380:
    // 0x1c5380: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x1c5380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c5384:
    // 0x1c5384: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x1c5384u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1c5388:
    // 0x1c5388: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x1c5388u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1c538c:
    // 0x1c538c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1c538cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1c5390:
    // 0x1c5390: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x1c5390u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1c5394:
    // 0x1c5394: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x1c5394u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_1c5398:
    // 0x1c5398: 0xfa040010  sqc2        $vf4, 0x10($s0)
    ctx->pc = 0x1c5398u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c539c:
    // 0x1c539c: 0xda040010  lqc2        $vf4, 0x10($s0)
    ctx->pc = 0x1c539cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_1c53a0:
    // 0x1c53a0: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x1c53a0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1c53a4:
    // 0x1c53a4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c53a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c53a8:
    // 0x1c53a8: 0xfa040010  sqc2        $vf4, 0x10($s0)
    ctx->pc = 0x1c53a8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c53ac:
    // 0x1c53ac: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c53acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c53b0:
    // 0x1c53b0: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1c53b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c53b4:
    // 0x1c53b4: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1c53b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c53b8:
    // 0x1c53b8: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1c53b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c53bc:
    // 0x1c53bc: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x1c53bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c53c0:
    // 0x1c53c0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1c53c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1c53c4:
    // 0x1c53c4: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x1c53c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1c53c8:
    // 0x1c53c8: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x1c53c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1c53cc:
    // 0x1c53cc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1c53ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c53d0:
    // 0x1c53d0: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1c53d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c53d4:
    // 0x1c53d4: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1c53d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1c53d8:
    // 0x1c53d8: 0x44082000  mfc1        $t0, $f4
    ctx->pc = 0x1c53d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1c53dc:
    // 0x1c53dc: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1c53dcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1c53e0:
    // 0x1c53e0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1c53e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c53e4:
    // 0x1c53e4: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1c53e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c53e8:
    // 0x1c53e8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c53e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c53ec:
    // 0x1c53ec: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1c53ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c53f0:
    // 0x1c53f0: 0x460420c2  mul.s       $f3, $f4, $f4
    ctx->pc = 0x1c53f0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
label_1c53f4:
    // 0x1c53f4: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x1c53f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c53f8:
    // 0x1c53f8: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x1c53f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c53fc:
    // 0x1c53fc: 0x26230100  addiu       $v1, $s1, 0x100
    ctx->pc = 0x1c53fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_1c5400:
    // 0x1c5400: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x1c5400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c5404:
    // 0x1c5404: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x1c5404u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_1c5408:
    // 0x1c5408: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x1c5408u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1c540c:
    // 0x1c540c: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x1c540cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1c5410:
    // 0x1c5410: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1c5410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1c5414:
    // 0x1c5414: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1c5414u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c5418:
    // 0x1c5418: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1c5418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c541c:
    // 0x1c541c: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1c541cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1c5420:
    // 0x1c5420: 0x44081800  mfc1        $t0, $f3
    ctx->pc = 0x1c5420u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1c5424:
    // 0x1c5424: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1c5424u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1c5428:
    // 0x1c5428: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1c5428u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c542c:
    // 0x1c542c: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1c542cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5430:
    // 0x1c5430: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c5430u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c5434:
    // 0x1c5434: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1c5434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5438:
    // 0x1c5438: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1c5438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c543c:
    // 0x1c543c: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1c543cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c5440:
    // 0x1c5440: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x1c5440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c5444:
    // 0x1c5444: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1c5444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1c5448:
    // 0x1c5448: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1c5448u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1c544c:
    // 0x1c544c: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x1c544cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1c5450:
    // 0x1c5450: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x1c5450u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_1c5454:
    // 0x1c5454: 0xfa040010  sqc2        $vf4, 0x10($s0)
    ctx->pc = 0x1c5454u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5458:
    // 0x1c5458: 0xda040010  lqc2        $vf4, 0x10($s0)
    ctx->pc = 0x1c5458u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_1c545c:
    // 0x1c545c: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x1c545cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_1c5460:
    // 0x1c5460: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c5460u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c5464:
    // 0x1c5464: 0xfa040010  sqc2        $vf4, 0x10($s0)
    ctx->pc = 0x1c5464u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5468:
    // 0x1c5468: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c5468u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c546c:
    // 0x1c546c: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1c546cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5470:
    // 0x1c5470: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1c5470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c5474:
    // 0x1c5474: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1c5474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c5478:
    // 0x1c5478: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x1c5478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c547c:
    // 0x1c547c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1c547cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1c5480:
    // 0x1c5480: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x1c5480u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1c5484:
    // 0x1c5484: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x1c5484u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1c5488:
    // 0x1c5488: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x1c5488u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_1c548c:
    // 0x1c548c: 0xfa040010  sqc2        $vf4, 0x10($s0)
    ctx->pc = 0x1c548cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5490:
    // 0x1c5490: 0xda040010  lqc2        $vf4, 0x10($s0)
    ctx->pc = 0x1c5490u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_1c5494:
    // 0x1c5494: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x1c5494u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1c5498:
    // 0x1c5498: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c5498u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c549c:
    // 0x1c549c: 0xfa040010  sqc2        $vf4, 0x10($s0)
    ctx->pc = 0x1c549cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c54a0:
    // 0x1c54a0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c54a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c54a4:
    // 0x1c54a4: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1c54a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c54a8:
    // 0x1c54a8: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x1c54a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c54ac:
    // 0x1c54ac: 0x26230060  addiu       $v1, $s1, 0x60
    ctx->pc = 0x1c54acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_1c54b0:
    // 0x1c54b0: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x1c54b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c54b4:
    // 0x1c54b4: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x1c54b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c54b8:
    // 0x1c54b8: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x1c54b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1c54bc:
    // 0x1c54bc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1c54bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1c54c0:
    // 0x1c54c0: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x1c54c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1c54c4:
    // 0x1c54c4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1c54c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c54c8:
    // 0x1c54c8: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1c54c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c54cc:
    // 0x1c54cc: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1c54ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1c54d0:
    // 0x1c54d0: 0x44083800  mfc1        $t0, $f7
    ctx->pc = 0x1c54d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1c54d4:
    // 0x1c54d4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1c54d4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1c54d8:
    // 0x1c54d8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1c54d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c54dc:
    // 0x1c54dc: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1c54dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c54e0:
    // 0x1c54e0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c54e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c54e4:
    // 0x1c54e4: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1c54e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c54e8:
    // 0x1c54e8: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x1c54e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c54ec:
    // 0x1c54ec: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1c54ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1c54f0:
    // 0x1c54f0: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x1c54f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c54f4:
    // 0x1c54f4: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x1c54f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c54f8:
    // 0x1c54f8: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x1c54f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1c54fc:
    // 0x1c54fc: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1c54fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1c5500:
    // 0x1c5500: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x1c5500u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1c5504:
    // 0x1c5504: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x1c5504u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1c5508:
    // 0x1c5508: 0xfa040010  sqc2        $vf4, 0x10($s0)
    ctx->pc = 0x1c5508u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c550c:
    // 0x1c550c: 0xda040010  lqc2        $vf4, 0x10($s0)
    ctx->pc = 0x1c550cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_1c5510:
    // 0x1c5510: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x1c5510u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1c5514:
    // 0x1c5514: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c5514u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c5518:
    // 0x1c5518: 0xfa040010  sqc2        $vf4, 0x10($s0)
    ctx->pc = 0x1c5518u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c551c:
    // 0x1c551c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c551cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c5520:
    // 0x1c5520: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1c5520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5524:
    // 0x1c5524: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1c5524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c5528:
    // 0x1c5528: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1c5528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c552c:
    // 0x1c552c: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x1c552cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c5530:
    // 0x1c5530: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1c5530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1c5534:
    // 0x1c5534: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1c5534u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1c5538:
    // 0x1c5538: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x1c5538u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1c553c:
    // 0x1c553c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1c553cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c5540:
    // 0x1c5540: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1c5540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5544:
    // 0x1c5544: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1c5544u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1c5548:
    // 0x1c5548: 0x44082000  mfc1        $t0, $f4
    ctx->pc = 0x1c5548u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1c554c:
    // 0x1c554c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1c554cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1c5550:
    // 0x1c5550: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1c5550u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c5554:
    // 0x1c5554: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1c5554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5558:
    // 0x1c5558: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c5558u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c555c:
    // 0x1c555c: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1c555cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5560:
    // 0x1c5560: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x1c5560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c5564:
    // 0x1c5564: 0x26230120  addiu       $v1, $s1, 0x120
    ctx->pc = 0x1c5564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
label_1c5568:
    // 0x1c5568: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x1c5568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c556c:
    // 0x1c556c: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x1c556cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c5570:
    // 0x1c5570: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x1c5570u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1c5574:
    // 0x1c5574: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1c5574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1c5578:
    // 0x1c5578: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x1c5578u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1c557c:
    // 0x1c557c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1c557cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c5580:
    // 0x1c5580: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1c5580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5584:
    // 0x1c5584: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1c5584u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1c5588:
    // 0x1c5588: 0x44081800  mfc1        $t0, $f3
    ctx->pc = 0x1c5588u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1c558c:
    // 0x1c558c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1c558cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1c5590:
    // 0x1c5590: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1c5590u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c5594:
    // 0x1c5594: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1c5594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5598:
    // 0x1c5598: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c5598u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c559c:
    // 0x1c559c: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1c559cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c55a0:
    // 0x1c55a0: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1c55a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c55a4:
    // 0x1c55a4: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1c55a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c55a8:
    // 0x1c55a8: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x1c55a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c55ac:
    // 0x1c55ac: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1c55acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1c55b0:
    // 0x1c55b0: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1c55b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1c55b4:
    // 0x1c55b4: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x1c55b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1c55b8:
    // 0x1c55b8: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x1c55b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1c55bc:
    // 0x1c55bc: 0xfa040010  sqc2        $vf4, 0x10($s0)
    ctx->pc = 0x1c55bcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c55c0:
    // 0x1c55c0: 0xda040010  lqc2        $vf4, 0x10($s0)
    ctx->pc = 0x1c55c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_1c55c4:
    // 0x1c55c4: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x1c55c4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_1c55c8:
    // 0x1c55c8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c55c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c55cc:
    // 0x1c55cc: 0xfa040010  sqc2        $vf4, 0x10($s0)
    ctx->pc = 0x1c55ccu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c55d0:
    // 0x1c55d0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c55d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c55d4:
    // 0x1c55d4: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1c55d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c55d8:
    // 0x1c55d8: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1c55d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c55dc:
    // 0x1c55dc: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1c55dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c55e0:
    // 0x1c55e0: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x1c55e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c55e4:
    // 0x1c55e4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1c55e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1c55e8:
    // 0x1c55e8: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1c55e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1c55ec:
    // 0x1c55ec: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x1c55ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1c55f0:
    // 0x1c55f0: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x1c55f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1c55f4:
    // 0x1c55f4: 0xfa040010  sqc2        $vf4, 0x10($s0)
    ctx->pc = 0x1c55f4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c55f8:
    // 0x1c55f8: 0xda040010  lqc2        $vf4, 0x10($s0)
    ctx->pc = 0x1c55f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_1c55fc:
    // 0x1c55fc: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x1c55fcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1c5600:
    // 0x1c5600: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c5600u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c5604:
    // 0x1c5604: 0xfa040010  sqc2        $vf4, 0x10($s0)
    ctx->pc = 0x1c5604u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5608:
    // 0x1c5608: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c5608u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c560c:
    // 0x1c560c: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1c560cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5610:
    // 0x1c5610: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1c5610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c5614:
    // 0x1c5614: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1c5614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c5618:
    // 0x1c5618: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x1c5618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c561c:
    // 0x1c561c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1c561cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1c5620:
    // 0x1c5620: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1c5620u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1c5624:
    // 0x1c5624: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x1c5624u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1c5628:
    // 0x1c5628: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x1c5628u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_1c562c:
    // 0x1c562c: 0xfa040010  sqc2        $vf4, 0x10($s0)
    ctx->pc = 0x1c562cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5630:
    // 0x1c5630: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1c5630u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1c5634:
    // 0x1c5634: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x1c5634u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c5638:
    // 0x1c5638: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c5638u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c563c:
    // 0x1c563c: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1c563cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5640:
    // 0x1c5640: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c5640u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c5644:
    // 0x1c5644: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1c5644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5648:
    // 0x1c5648: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1c5648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c564c:
    // 0x1c564c: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1c564cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c5650:
    // 0x1c5650: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x1c5650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c5654:
    // 0x1c5654: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1c5654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1c5658:
    // 0x1c5658: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x1c5658u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1c565c:
    // 0x1c565c: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x1c565cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1c5660:
    // 0x1c5660: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x1c5660u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1c5664:
    // 0x1c5664: 0xfa040010  sqc2        $vf4, 0x10($s0)
    ctx->pc = 0x1c5664u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5668:
    // 0x1c5668: 0xda040010  lqc2        $vf4, 0x10($s0)
    ctx->pc = 0x1c5668u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_1c566c:
    // 0x1c566c: 0xd9450000  lqc2        $vf5, 0x0($t2)
    ctx->pc = 0x1c566cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
label_1c5670:
    // 0x1c5670: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c5670u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c5674:
    // 0x1c5674: 0xfa040010  sqc2        $vf4, 0x10($s0)
    ctx->pc = 0x1c5674u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5678:
    // 0x1c5678: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c5678u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c567c:
    // 0x1c567c: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1c567cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5680:
    // 0x1c5680: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x1c5680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c5684:
    // 0x1c5684: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c5684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c5688:
    // 0x1c5688: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x1c5688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c568c:
    // 0x1c568c: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1c568cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c5690:
    // 0x1c5690: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x1c5690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c5694:
    // 0x1c5694: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x1c5694u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c5698:
    // 0x1c5698: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x1c5698u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1c569c:
    // 0x1c569c: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x1c569cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1c56a0:
    // 0x1c56a0: 0xc071cc4  jal         func_1C7310
label_1c56a4:
    if (ctx->pc == 0x1C56A4u) {
        ctx->pc = 0x1C56A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C56A0u;
        // 0x1c56a4: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C56A8u;
        goto label_1c56a8;
    }
    ctx->pc = 0x1C56A0u;
    SET_GPR_U32(ctx, 31, 0x1C56A8u);
    ctx->pc = 0x1C56A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C56A0u;
    // 0x1c56a4: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7310u, 0x1C56A0u, 0x1C56A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C56A8u;
label_1c56a8:
    // 0x1c56a8: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x1c56a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_1c56ac:
    // 0x1c56ac: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c56acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_1c56b0:
    // 0x1c56b0: 0x5440005e  bnel        $v0, $zero, . + 4 + (0x5E << 2)
label_1c56b4:
    if (ctx->pc == 0x1C56B4u) {
        ctx->pc = 0x1C56B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C56B0u;
        // 0x1c56b4: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C56B8u;
        goto label_1c56b8;
    }
    ctx->pc = 0x1C56B0u;
    {
        const bool branch_taken_0x1c56b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c56b0) {
            ctx->pc = 0x1C56B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C56B0u;
            // 0x1c56b4: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C582Cu;
            goto label_1c582c;
        }
    }
    ctx->pc = 0x1C56B8u;
label_1c56b8:
    // 0x1c56b8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1c56b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1c56bc:
    // 0x1c56bc: 0x5040005b  beql        $v0, $zero, . + 4 + (0x5B << 2)
label_1c56c0:
    if (ctx->pc == 0x1C56C0u) {
        ctx->pc = 0x1C56C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C56BCu;
        // 0x1c56c0: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C56C4u;
        goto label_1c56c4;
    }
    ctx->pc = 0x1C56BCu;
    {
        const bool branch_taken_0x1c56bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c56bc) {
            ctx->pc = 0x1C56C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C56BCu;
            // 0x1c56c0: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C582Cu;
            goto label_1c582c;
        }
    }
    ctx->pc = 0x1C56C4u;
label_1c56c4:
    // 0x1c56c4: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x1c56c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1c56c8:
    // 0x1c56c8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c56c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c56cc:
    // 0x1c56cc: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1c56ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c56d0:
    // 0x1c56d0: 0xdac40010  lqc2        $vf4, 0x10($s6)
    ctx->pc = 0x1c56d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 16)));
label_1c56d4:
    // 0x1c56d4: 0xda850000  lqc2        $vf5, 0x0($s4)
    ctx->pc = 0x1c56d4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_1c56d8:
    // 0x1c56d8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c56d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c56dc:
    // 0x1c56dc: 0xfac40010  sqc2        $vf4, 0x10($s6)
    ctx->pc = 0x1c56dcu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c56e0:
    // 0x1c56e0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c56e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1c56e4:
    // 0x1c56e4: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1c56e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1c56e8:
    // 0x1c56e8: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1c56e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c56ec:
    // 0x1c56ec: 0x10560006  beq         $v0, $s6, . + 4 + (0x6 << 2)
label_1c56f0:
    if (ctx->pc == 0x1C56F0u) {
        ctx->pc = 0x1C56F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C56ECu;
        // 0x1c56f0: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C56F4u;
        goto label_1c56f4;
    }
    ctx->pc = 0x1C56ECu;
    {
        const bool branch_taken_0x1c56ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x1C56F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C56ECu;
        // 0x1c56f0: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c56ec) {
            ctx->pc = 0x1C5708u;
            goto label_1c5708;
        }
    }
    ctx->pc = 0x1C56F4u;
label_1c56f4:
    // 0x1c56f4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1c56f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1c56f8:
    // 0x1c56f8: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1c56f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c56fc:
    // 0x1c56fc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c56fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1c5700:
    // 0x1c5700: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x1c5700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c5704:
    // 0x1c5704: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1c5704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1c5708:
    // 0x1c5708: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c5708u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c570c:
    // 0x1c570c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1c570cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c5710:
    // 0x1c5710: 0x2632000c  addiu       $s2, $s1, 0xC
    ctx->pc = 0x1c5710u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_1c5714:
    // 0x1c5714: 0x0  nop
    ctx->pc = 0x1c5714u;
    // NOP
label_1c5718:
    // 0x1c5718: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1c5718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c571c:
    // 0x1c571c: 0x5040003f  beql        $v0, $zero, . + 4 + (0x3F << 2)
label_1c5720:
    if (ctx->pc == 0x1C5720u) {
        ctx->pc = 0x1C5720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C571Cu;
        // 0x1c5720: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5724u;
        goto label_1c5724;
    }
    ctx->pc = 0x1C571Cu;
    {
        const bool branch_taken_0x1c571c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c571c) {
            ctx->pc = 0x1C5720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C571Cu;
            // 0x1c5720: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C581Cu;
            goto label_1c581c;
        }
    }
    ctx->pc = 0x1C5724u;
label_1c5724:
    // 0x1c5724: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1c5724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_1c5728:
    // 0x1c5728: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c5728u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c572c:
    // 0x1c572c: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1c572cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5730:
    // 0x1c5730: 0xda040010  lqc2        $vf4, 0x10($s0)
    ctx->pc = 0x1c5730u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_1c5734:
    // 0x1c5734: 0xda850000  lqc2        $vf5, 0x0($s4)
    ctx->pc = 0x1c5734u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_1c5738:
    // 0x1c5738: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c5738u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c573c:
    // 0x1c573c: 0xfa040010  sqc2        $vf4, 0x10($s0)
    ctx->pc = 0x1c573cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5740:
    // 0x1c5740: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x1c5740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1c5744:
    // 0x1c5744: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1c5744u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c5748:
    // 0x1c5748: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1c5748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c574c:
    // 0x1c574c: 0x10500006  beq         $v0, $s0, . + 4 + (0x6 << 2)
label_1c5750:
    if (ctx->pc == 0x1C5750u) {
        ctx->pc = 0x1C5750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C574Cu;
        // 0x1c5750: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5754u;
        goto label_1c5754;
    }
    ctx->pc = 0x1C574Cu;
    {
        const bool branch_taken_0x1c574c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1C5750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C574Cu;
        // 0x1c5750: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c574c) {
            ctx->pc = 0x1C5768u;
            goto label_1c5768;
        }
    }
    ctx->pc = 0x1C5754u;
label_1c5754:
    // 0x1c5754: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1c5754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1c5758:
    // 0x1c5758: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1c5758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c575c:
    // 0x1c575c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c575cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1c5760:
    // 0x1c5760: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x1c5760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c5764:
    // 0x1c5764: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1c5764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1c5768:
    // 0x1c5768: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1c5768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c576c:
    // 0x1c576c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c576cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c5770:
    // 0x1c5770: 0x946302fe  lhu         $v1, 0x2FE($v1)
    ctx->pc = 0x1c5770u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 766)));
label_1c5774:
    // 0x1c5774: 0x28620100  slti        $v0, $v1, 0x100
    ctx->pc = 0x1c5774u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
label_1c5778:
    // 0x1c5778: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c577c:
    if (ctx->pc == 0x1C577Cu) {
        ctx->pc = 0x1C577Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5778u;
        // 0x1c577c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5780u;
        goto label_1c5780;
    }
    ctx->pc = 0x1C5778u;
    {
        const bool branch_taken_0x1c5778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C577Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5778u;
        // 0x1c577c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5778) {
            ctx->pc = 0x1C5788u;
            goto label_1c5788;
        }
    }
    ctx->pc = 0x1C5780u;
label_1c5780:
    // 0x1c5780: 0x286201ff  slti        $v0, $v1, 0x1FF
    ctx->pc = 0x1c5780u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)511) ? 1 : 0);
label_1c5784:
    // 0x1c5784: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c5788:
    // 0x1c5788: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c5788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c578c:
    // 0x1c578c: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_1c5790:
    if (ctx->pc == 0x1C5790u) {
        ctx->pc = 0x1C5790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C578Cu;
        // 0x1c5790: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5794u;
        goto label_1c5794;
    }
    ctx->pc = 0x1C578Cu;
    {
        const bool branch_taken_0x1c578c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c578c) {
            ctx->pc = 0x1C5790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C578Cu;
            // 0x1c5790: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C57F4u;
            goto label_1c57f4;
        }
    }
    ctx->pc = 0x1C5794u;
label_1c5794:
    // 0x1c5794: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x1c5794u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
label_1c5798:
    // 0x1c5798: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c579c:
    if (ctx->pc == 0x1C579Cu) {
        ctx->pc = 0x1C579Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5798u;
        // 0x1c579c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C57A0u;
        goto label_1c57a0;
    }
    ctx->pc = 0x1C5798u;
    {
        const bool branch_taken_0x1c5798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C579Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5798u;
        // 0x1c579c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5798) {
            ctx->pc = 0x1C57A8u;
            goto label_1c57a8;
        }
    }
    ctx->pc = 0x1C57A0u;
label_1c57a0:
    // 0x1c57a0: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x1c57a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_1c57a4:
    // 0x1c57a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c57a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c57a8:
    // 0x1c57a8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c57a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c57ac:
    // 0x1c57ac: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_1c57b0:
    if (ctx->pc == 0x1C57B0u) {
        ctx->pc = 0x1C57B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C57ACu;
        // 0x1c57b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C57B4u;
        goto label_1c57b4;
    }
    ctx->pc = 0x1C57ACu;
    {
        const bool branch_taken_0x1c57ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c57ac) {
            ctx->pc = 0x1C57B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C57ACu;
            // 0x1c57b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C57F4u;
            goto label_1c57f4;
        }
    }
    ctx->pc = 0x1C57B4u;
label_1c57b4:
    // 0x1c57b4: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x1c57b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_1c57b8:
    // 0x1c57b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c57bc:
    if (ctx->pc == 0x1C57BCu) {
        ctx->pc = 0x1C57BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C57B8u;
        // 0x1c57bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C57C0u;
        goto label_1c57c0;
    }
    ctx->pc = 0x1C57B8u;
    {
        const bool branch_taken_0x1c57b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C57BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C57B8u;
        // 0x1c57bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c57b8) {
            ctx->pc = 0x1C57C8u;
            goto label_1c57c8;
        }
    }
    ctx->pc = 0x1C57C0u;
label_1c57c0:
    // 0x1c57c0: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x1c57c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
label_1c57c4:
    // 0x1c57c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c57c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c57c8:
    // 0x1c57c8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c57c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c57cc:
    // 0x1c57cc: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_1c57d0:
    if (ctx->pc == 0x1C57D0u) {
        ctx->pc = 0x1C57D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C57CCu;
        // 0x1c57d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C57D4u;
        goto label_1c57d4;
    }
    ctx->pc = 0x1C57CCu;
    {
        const bool branch_taken_0x1c57cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c57cc) {
            ctx->pc = 0x1C57D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C57CCu;
            // 0x1c57d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C57F4u;
            goto label_1c57f4;
        }
    }
    ctx->pc = 0x1C57D4u;
label_1c57d4:
    // 0x1c57d4: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x1c57d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
label_1c57d8:
    // 0x1c57d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c57dc:
    if (ctx->pc == 0x1C57DCu) {
        ctx->pc = 0x1C57DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C57D8u;
        // 0x1c57dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C57E0u;
        goto label_1c57e0;
    }
    ctx->pc = 0x1C57D8u;
    {
        const bool branch_taken_0x1c57d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C57DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C57D8u;
        // 0x1c57dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c57d8) {
            ctx->pc = 0x1C57E8u;
            goto label_1c57e8;
        }
    }
    ctx->pc = 0x1C57E0u;
label_1c57e0:
    // 0x1c57e0: 0x28620600  slti        $v0, $v1, 0x600
    ctx->pc = 0x1c57e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1536) ? 1 : 0);
label_1c57e4:
    // 0x1c57e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c57e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c57e8:
    // 0x1c57e8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c57e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c57ec:
    // 0x1c57ec: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1c57f0:
    if (ctx->pc == 0x1C57F0u) {
        ctx->pc = 0x1C57F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C57ECu;
        // 0x1c57f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C57F4u;
        goto label_1c57f4;
    }
    ctx->pc = 0x1C57ECu;
    {
        const bool branch_taken_0x1c57ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c57ec) {
            ctx->pc = 0x1C57F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C57ECu;
            // 0x1c57f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C57F4u;
            goto label_1c57f4;
        }
    }
    ctx->pc = 0x1C57F4u;
label_1c57f4:
    // 0x1c57f4: 0x54b50009  bnel        $a1, $s5, . + 4 + (0x9 << 2)
label_1c57f8:
    if (ctx->pc == 0x1C57F8u) {
        ctx->pc = 0x1C57F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C57F4u;
        // 0x1c57f8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C57FCu;
        goto label_1c57fc;
    }
    ctx->pc = 0x1C57F4u;
    {
        const bool branch_taken_0x1c57f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 21));
        if (branch_taken_0x1c57f4) {
            ctx->pc = 0x1C57F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C57F4u;
            // 0x1c57f8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C581Cu;
            goto label_1c581c;
        }
    }
    ctx->pc = 0x1C57FCu;
label_1c57fc:
    // 0x1c57fc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1c57fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c5800:
    // 0x1c5800: 0x8c820214  lw          $v0, 0x214($a0)
    ctx->pc = 0x1c5800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 532)));
label_1c5804:
    // 0x1c5804: 0x8c8500f0  lw          $a1, 0xF0($a0)
    ctx->pc = 0x1c5804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_1c5808:
    // 0x1c5808: 0x84430070  lh          $v1, 0x70($v0)
    ctx->pc = 0x1c5808u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1c580c:
    // 0x1c580c: 0x8c460074  lw          $a2, 0x74($v0)
    ctx->pc = 0x1c580cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1c5810:
    // 0x1c5810: 0xc0f809  jalr        $a2
label_1c5814:
    if (ctx->pc == 0x1C5814u) {
        ctx->pc = 0x1C5814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5810u;
        // 0x1c5814: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5818u;
        goto label_1c5818;
    }
    ctx->pc = 0x1C5810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1C5818u);
        ctx->pc = 0x1C5814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5810u;
        // 0x1c5814: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5810u, 0x1C5818u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C5818u;
label_1c5818:
    // 0x1c5818: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1c5818u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1c581c:
    // 0x1c581c: 0x2e620008  sltiu       $v0, $s3, 0x8
    ctx->pc = 0x1c581cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1c5820:
    // 0x1c5820: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
label_1c5824:
    if (ctx->pc == 0x1C5824u) {
        ctx->pc = 0x1C5824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5820u;
        // 0x1c5824: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5828u;
        goto label_1c5828;
    }
    ctx->pc = 0x1C5820u;
    {
        const bool branch_taken_0x1c5820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5820u;
        // 0x1c5824: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5820) {
            ctx->pc = 0x1C5718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c5718;
        }
    }
    ctx->pc = 0x1C5828u;
label_1c5828:
    // 0x1c5828: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x1c5828u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_1c582c:
    // 0x1c582c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c582cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1c5830:
    // 0x1c5830: 0x144001b7  bnez        $v0, . + 4 + (0x1B7 << 2)
label_1c5834:
    if (ctx->pc == 0x1C5834u) {
        ctx->pc = 0x1C5834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5830u;
        // 0x1c5834: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5838u;
        goto label_1c5838;
    }
    ctx->pc = 0x1C5830u;
    {
        const bool branch_taken_0x1c5830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5830u;
        // 0x1c5834: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5830) {
            ctx->pc = 0x1C5F10u;
            goto label_1c5f10;
        }
    }
    ctx->pc = 0x1C5838u;
label_1c5838:
    // 0x1c5838: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1c5838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1c583c:
    // 0x1c583c: 0x504001b4  beql        $v0, $zero, . + 4 + (0x1B4 << 2)
label_1c5840:
    if (ctx->pc == 0x1C5840u) {
        ctx->pc = 0x1C5840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C583Cu;
        // 0x1c5840: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5844u;
        goto label_1c5844;
    }
    ctx->pc = 0x1C583Cu;
    {
        const bool branch_taken_0x1c583c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c583c) {
            ctx->pc = 0x1C5840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C583Cu;
            // 0x1c5840: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5F10u;
            goto label_1c5f10;
        }
    }
    ctx->pc = 0x1C5844u;
label_1c5844:
    // 0x1c5844: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x1c5844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c5848:
    // 0x1c5848: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x1c5848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c584c:
    // 0x1c584c: 0x24430100  addiu       $v1, $v0, 0x100
    ctx->pc = 0x1c584cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
label_1c5850:
    // 0x1c5850: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c5850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1c5854:
    // 0x1c5854: 0x50830008  beql        $a0, $v1, . + 4 + (0x8 << 2)
label_1c5858:
    if (ctx->pc == 0x1C5858u) {
        ctx->pc = 0x1C5858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5854u;
        // 0x1c5858: 0x27a20090  addiu       $v0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C585Cu;
        goto label_1c585c;
    }
    ctx->pc = 0x1C5854u;
    {
        const bool branch_taken_0x1c5854 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c5854) {
            ctx->pc = 0x1C5858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5854u;
            // 0x1c5858: 0x27a20090  addiu       $v0, $sp, 0x90 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5878u;
            goto label_1c5878;
        }
    }
    ctx->pc = 0x1C585Cu;
label_1c585c:
    // 0x1c585c: 0xc4400100  lwc1        $f0, 0x100($v0)
    ctx->pc = 0x1c585cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c5860:
    // 0x1c5860: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1c5860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1c5864:
    // 0x1c5864: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1c5864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c5868:
    // 0x1c5868: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x1c5868u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1c586c:
    // 0x1c586c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1c586cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c5870:
    // 0x1c5870: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1c5870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1c5874:
    // 0x1c5874: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x1c5874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1c5878:
    // 0x1c5878: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x1c5878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1c587c:
    // 0x1c587c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c587cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1c5880:
    // 0x1c5880: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1c5880u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1c5884:
    // 0x1c5884: 0xf8640010  sqc2        $vf4, 0x10($v1)
    ctx->pc = 0x1c5884u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5888:
    // 0x1c5888: 0xdac40030  lqc2        $vf4, 0x30($s6)
    ctx->pc = 0x1c5888u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 48)));
label_1c588c:
    // 0x1c588c: 0xdbc50000  lqc2        $vf5, 0x0($fp)
    ctx->pc = 0x1c588cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_1c5890:
    // 0x1c5890: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c5890u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c5894:
    // 0x1c5894: 0xfac40030  sqc2        $vf4, 0x30($s6)
    ctx->pc = 0x1c5894u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5898:
    // 0x1c5898: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c5898u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c589c:
    // 0x1c589c: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1c589cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c58a0:
    // 0x1c58a0: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x1c58a0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1c58a4:
    // 0x1c58a4: 0x12de0007  beq         $s6, $fp, . + 4 + (0x7 << 2)
label_1c58a8:
    if (ctx->pc == 0x1C58A8u) {
        ctx->pc = 0x1C58A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C58A4u;
        // 0x1c58a8: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C58ACu;
        goto label_1c58ac;
    }
    ctx->pc = 0x1C58A4u;
    {
        const bool branch_taken_0x1c58a4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 30));
        ctx->pc = 0x1C58A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C58A4u;
        // 0x1c58a8: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c58a4) {
            ctx->pc = 0x1C58C4u;
            goto label_1c58c4;
        }
    }
    ctx->pc = 0x1C58ACu;
label_1c58ac:
    // 0x1c58ac: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1c58acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c58b0:
    // 0x1c58b0: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x1c58b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c58b4:
    // 0x1c58b4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1c58b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1c58b8:
    // 0x1c58b8: 0xe6c10004  swc1        $f1, 0x4($s6)
    ctx->pc = 0x1c58b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
label_1c58bc:
    // 0x1c58bc: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x1c58bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c58c0:
    // 0x1c58c0: 0xe6c00008  swc1        $f0, 0x8($s6)
    ctx->pc = 0x1c58c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
label_1c58c4:
    // 0x1c58c4: 0xc07df68  jal         func_1F7DA0
label_1c58c8:
    if (ctx->pc == 0x1C58C8u) {
        ctx->pc = 0x1C58C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C58C4u;
        // 0x1c58c8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C58CCu;
        goto label_1c58cc;
    }
    ctx->pc = 0x1C58C4u;
    SET_GPR_U32(ctx, 31, 0x1C58CCu);
    ctx->pc = 0x1C58C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C58C4u;
    // 0x1c58c8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x1C58C4u, 0x1C58CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C58CCu;
label_1c58cc:
    // 0x1c58cc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1c58ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1c58d0:
    // 0x1c58d0: 0x24620100  addiu       $v0, $v1, 0x100
    ctx->pc = 0x1c58d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
label_1c58d4:
    // 0x1c58d4: 0x10560006  beq         $v0, $s6, . + 4 + (0x6 << 2)
label_1c58d8:
    if (ctx->pc == 0x1C58D8u) {
        ctx->pc = 0x1C58D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C58D4u;
        // 0x1c58d8: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C58DCu;
        goto label_1c58dc;
    }
    ctx->pc = 0x1C58D4u;
    {
        const bool branch_taken_0x1c58d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x1C58D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C58D4u;
        // 0x1c58d8: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c58d4) {
            ctx->pc = 0x1C58F0u;
            goto label_1c58f0;
        }
    }
    ctx->pc = 0x1C58DCu;
label_1c58dc:
    // 0x1c58dc: 0xe4600100  swc1        $f0, 0x100($v1)
    ctx->pc = 0x1c58dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 256), bits); }
label_1c58e0:
    // 0x1c58e0: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1c58e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c58e4:
    // 0x1c58e4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c58e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1c58e8:
    // 0x1c58e8: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x1c58e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c58ec:
    // 0x1c58ec: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1c58ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1c58f0:
    // 0x1c58f0: 0xc0527ae  jal         func_149EB8
label_1c58f4:
    if (ctx->pc == 0x1C58F4u) {
        ctx->pc = 0x1C58F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C58F0u;
        // 0x1c58f4: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C58F8u;
        goto label_1c58f8;
    }
    ctx->pc = 0x1C58F0u;
    SET_GPR_U32(ctx, 31, 0x1C58F8u);
    ctx->pc = 0x1C58F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C58F0u;
    // 0x1c58f4: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1C58F0u, 0x1C58F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C58F8u;
label_1c58f8:
    // 0x1c58f8: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x1c58f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c58fc:
    // 0x1c58fc: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1c58fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1c5900:
    // 0x1c5900: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1c5900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1c5904:
    // 0x1c5904: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1c5904u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c5908:
    // 0x1c5908: 0x2632000c  addiu       $s2, $s1, 0xC
    ctx->pc = 0x1c5908u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_1c590c:
    // 0x1c590c: 0xc051f18  jal         func_147C60
label_1c5910:
    if (ctx->pc == 0x1C5910u) {
        ctx->pc = 0x1C5910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C590Cu;
        // 0x1c5910: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5914u;
        goto label_1c5914;
    }
    ctx->pc = 0x1C590Cu;
    SET_GPR_U32(ctx, 31, 0x1C5914u);
    ctx->pc = 0x1C5910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C590Cu;
    // 0x1c5910: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x1C590Cu, 0x1C5914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5914u;
label_1c5914:
    // 0x1c5914: 0x27b400a0  addiu       $s4, $sp, 0xA0
    ctx->pc = 0x1c5914u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1c5918:
    // 0x1c5918: 0x27b300b0  addiu       $s3, $sp, 0xB0
    ctx->pc = 0x1c5918u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1c591c:
    // 0x1c591c: 0x0  nop
    ctx->pc = 0x1c591cu;
    // NOP
label_1c5920:
    // 0x1c5920: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x1c5920u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c5924:
    // 0x1c5924: 0x52000050  beql        $s0, $zero, . + 4 + (0x50 << 2)
label_1c5928:
    if (ctx->pc == 0x1C5928u) {
        ctx->pc = 0x1C5928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5924u;
        // 0x1c5928: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C592Cu;
        goto label_1c592c;
    }
    ctx->pc = 0x1C5924u;
    {
        const bool branch_taken_0x1c5924 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5924) {
            ctx->pc = 0x1C5928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5924u;
            // 0x1c5928: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5A68u;
            goto label_1c5a68;
        }
    }
    ctx->pc = 0x1C592Cu;
label_1c592c:
    // 0x1c592c: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x1c592cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c5930:
    // 0x1c5930: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1c5930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_1c5934:
    // 0x1c5934: 0xfba000b0  sqc2        $vf0, 0xB0($sp)
    ctx->pc = 0x1c5934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c5938:
    // 0x1c5938: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c5938u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c593c:
    // 0x1c593c: 0xdbc50000  lqc2        $vf5, 0x0($fp)
    ctx->pc = 0x1c593cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_1c5940:
    // 0x1c5940: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c5940u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c5944:
    // 0x1c5944: 0xfa840010  sqc2        $vf4, 0x10($s4)
    ctx->pc = 0x1c5944u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5948:
    // 0x1c5948: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1c5948u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_1c594c:
    // 0x1c594c: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x1c594cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5950:
    // 0x1c5950: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1c5950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1c5954:
    // 0x1c5954: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1c5954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c5958:
    // 0x1c5958: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x1c5958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c595c:
    // 0x1c595c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1c595cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_1c5960:
    // 0x1c5960: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x1c5960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c5964:
    // 0x1c5964: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1c5964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1c5968:
    // 0x1c5968: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x1c5968u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1c596c:
    // 0x1c596c: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x1c596cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1c5970:
    // 0x1c5970: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x1c5970u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_1c5974:
    // 0x1c5974: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x1c5974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5978:
    // 0x1c5978: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c5978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c597c:
    // 0x1c597c: 0xc0c28ac  jal         func_30A2B0
label_1c5980:
    if (ctx->pc == 0x1C5980u) {
        ctx->pc = 0x1C5980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C597Cu;
        // 0x1c5980: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5984u;
        goto label_1c5984;
    }
    ctx->pc = 0x1C597Cu;
    SET_GPR_U32(ctx, 31, 0x1C5984u);
    ctx->pc = 0x1C5980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C597Cu;
    // 0x1c5980: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x1C597Cu, 0x1C5984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5984u;
label_1c5984:
    // 0x1c5984: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1c5984u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_1c5988:
    // 0x1c5988: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x1c5988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c598c:
    // 0x1c598c: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1c598cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_1c5990:
    // 0x1c5990: 0x10540006  beq         $v0, $s4, . + 4 + (0x6 << 2)
label_1c5994:
    if (ctx->pc == 0x1C5994u) {
        ctx->pc = 0x1C5994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5990u;
        // 0x1c5994: 0xc7a000a0  lwc1        $f0, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5998u;
        goto label_1c5998;
    }
    ctx->pc = 0x1C5990u;
    {
        const bool branch_taken_0x1c5990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x1C5994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5990u;
        // 0x1c5994: 0xc7a000a0  lwc1        $f0, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5990) {
            ctx->pc = 0x1C59ACu;
            goto label_1c59ac;
        }
    }
    ctx->pc = 0x1C5998u;
label_1c5998:
    // 0x1c5998: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1c5998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1c599c:
    // 0x1c599c: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x1c599cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c59a0:
    // 0x1c59a0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c59a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1c59a4:
    // 0x1c59a4: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x1c59a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c59a8:
    // 0x1c59a8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1c59a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1c59ac:
    // 0x1c59ac: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1c59acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c59b0:
    // 0x1c59b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c59b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c59b4:
    // 0x1c59b4: 0x946302fe  lhu         $v1, 0x2FE($v1)
    ctx->pc = 0x1c59b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 766)));
label_1c59b8:
    // 0x1c59b8: 0x28620100  slti        $v0, $v1, 0x100
    ctx->pc = 0x1c59b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
label_1c59bc:
    // 0x1c59bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c59c0:
    if (ctx->pc == 0x1C59C0u) {
        ctx->pc = 0x1C59C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C59BCu;
        // 0x1c59c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C59C4u;
        goto label_1c59c4;
    }
    ctx->pc = 0x1C59BCu;
    {
        const bool branch_taken_0x1c59bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C59C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C59BCu;
        // 0x1c59c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c59bc) {
            ctx->pc = 0x1C59CCu;
            goto label_1c59cc;
        }
    }
    ctx->pc = 0x1C59C4u;
label_1c59c4:
    // 0x1c59c4: 0x286201ff  slti        $v0, $v1, 0x1FF
    ctx->pc = 0x1c59c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)511) ? 1 : 0);
label_1c59c8:
    // 0x1c59c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c59c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c59cc:
    // 0x1c59cc: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c59ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c59d0:
    // 0x1c59d0: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
label_1c59d4:
    if (ctx->pc == 0x1C59D4u) {
        ctx->pc = 0x1C59D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C59D0u;
        // 0x1c59d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C59D8u;
        goto label_1c59d8;
    }
    ctx->pc = 0x1C59D0u;
    {
        const bool branch_taken_0x1c59d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c59d0) {
            ctx->pc = 0x1C59D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C59D0u;
            // 0x1c59d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5A3Cu;
            goto label_1c5a3c;
        }
    }
    ctx->pc = 0x1C59D8u;
label_1c59d8:
    // 0x1c59d8: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x1c59d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
label_1c59dc:
    // 0x1c59dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c59e0:
    if (ctx->pc == 0x1C59E0u) {
        ctx->pc = 0x1C59E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C59DCu;
        // 0x1c59e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C59E4u;
        goto label_1c59e4;
    }
    ctx->pc = 0x1C59DCu;
    {
        const bool branch_taken_0x1c59dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C59E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C59DCu;
        // 0x1c59e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c59dc) {
            ctx->pc = 0x1C59ECu;
            goto label_1c59ec;
        }
    }
    ctx->pc = 0x1C59E4u;
label_1c59e4:
    // 0x1c59e4: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x1c59e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_1c59e8:
    // 0x1c59e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c59e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c59ec:
    // 0x1c59ec: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c59ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c59f0:
    // 0x1c59f0: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_1c59f4:
    if (ctx->pc == 0x1C59F4u) {
        ctx->pc = 0x1C59F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C59F0u;
        // 0x1c59f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C59F8u;
        goto label_1c59f8;
    }
    ctx->pc = 0x1C59F0u;
    {
        const bool branch_taken_0x1c59f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c59f0) {
            ctx->pc = 0x1C59F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C59F0u;
            // 0x1c59f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5A3Cu;
            goto label_1c5a3c;
        }
    }
    ctx->pc = 0x1C59F8u;
label_1c59f8:
    // 0x1c59f8: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x1c59f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_1c59fc:
    // 0x1c59fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c5a00:
    if (ctx->pc == 0x1C5A00u) {
        ctx->pc = 0x1C5A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C59FCu;
        // 0x1c5a00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5A04u;
        goto label_1c5a04;
    }
    ctx->pc = 0x1C59FCu;
    {
        const bool branch_taken_0x1c59fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C59FCu;
        // 0x1c5a00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c59fc) {
            ctx->pc = 0x1C5A0Cu;
            goto label_1c5a0c;
        }
    }
    ctx->pc = 0x1C5A04u;
label_1c5a04:
    // 0x1c5a04: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x1c5a04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
label_1c5a08:
    // 0x1c5a08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c5a0c:
    // 0x1c5a0c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c5a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c5a10:
    // 0x1c5a10: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_1c5a14:
    if (ctx->pc == 0x1C5A14u) {
        ctx->pc = 0x1C5A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A10u;
        // 0x1c5a14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5A18u;
        goto label_1c5a18;
    }
    ctx->pc = 0x1C5A10u;
    {
        const bool branch_taken_0x1c5a10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5a10) {
            ctx->pc = 0x1C5A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5A10u;
            // 0x1c5a14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5A3Cu;
            goto label_1c5a3c;
        }
    }
    ctx->pc = 0x1C5A18u;
label_1c5a18:
    // 0x1c5a18: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x1c5a18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
label_1c5a1c:
    // 0x1c5a1c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c5a20:
    if (ctx->pc == 0x1C5A20u) {
        ctx->pc = 0x1C5A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A1Cu;
        // 0x1c5a20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5A24u;
        goto label_1c5a24;
    }
    ctx->pc = 0x1C5A1Cu;
    {
        const bool branch_taken_0x1c5a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A1Cu;
        // 0x1c5a20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5a1c) {
            ctx->pc = 0x1C5A2Cu;
            goto label_1c5a2c;
        }
    }
    ctx->pc = 0x1C5A24u;
label_1c5a24:
    // 0x1c5a24: 0x28620600  slti        $v0, $v1, 0x600
    ctx->pc = 0x1c5a24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1536) ? 1 : 0);
label_1c5a28:
    // 0x1c5a28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c5a2c:
    // 0x1c5a2c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c5a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c5a30:
    // 0x1c5a30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1c5a34:
    if (ctx->pc == 0x1C5A34u) {
        ctx->pc = 0x1C5A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A30u;
        // 0x1c5a34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5A38u;
        goto label_1c5a38;
    }
    ctx->pc = 0x1C5A30u;
    {
        const bool branch_taken_0x1c5a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A30u;
        // 0x1c5a34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5a30) {
            ctx->pc = 0x1C5A40u;
            goto label_1c5a40;
        }
    }
    ctx->pc = 0x1C5A38u;
label_1c5a38:
    // 0x1c5a38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c5a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c5a3c:
    // 0x1c5a3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c5a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c5a40:
    // 0x1c5a40: 0x54a20009  bnel        $a1, $v0, . + 4 + (0x9 << 2)
label_1c5a44:
    if (ctx->pc == 0x1C5A44u) {
        ctx->pc = 0x1C5A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A40u;
        // 0x1c5a44: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5A48u;
        goto label_1c5a48;
    }
    ctx->pc = 0x1C5A40u;
    {
        const bool branch_taken_0x1c5a40 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c5a40) {
            ctx->pc = 0x1C5A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5A40u;
            // 0x1c5a44: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5A68u;
            goto label_1c5a68;
        }
    }
    ctx->pc = 0x1C5A48u;
label_1c5a48:
    // 0x1c5a48: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1c5a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c5a4c:
    // 0x1c5a4c: 0x8c820214  lw          $v0, 0x214($a0)
    ctx->pc = 0x1c5a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 532)));
label_1c5a50:
    // 0x1c5a50: 0x8c8500f0  lw          $a1, 0xF0($a0)
    ctx->pc = 0x1c5a50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_1c5a54:
    // 0x1c5a54: 0x84430070  lh          $v1, 0x70($v0)
    ctx->pc = 0x1c5a54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1c5a58:
    // 0x1c5a58: 0x8c460074  lw          $a2, 0x74($v0)
    ctx->pc = 0x1c5a58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1c5a5c:
    // 0x1c5a5c: 0xc0f809  jalr        $a2
label_1c5a60:
    if (ctx->pc == 0x1C5A60u) {
        ctx->pc = 0x1C5A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A5Cu;
        // 0x1c5a60: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5A64u;
        goto label_1c5a64;
    }
    ctx->pc = 0x1C5A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1C5A64u);
        ctx->pc = 0x1C5A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A5Cu;
        // 0x1c5a60: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5A5Cu, 0x1C5A64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C5A64u;
label_1c5a64:
    // 0x1c5a64: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1c5a64u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1c5a68:
    // 0x1c5a68: 0x2ea20008  sltiu       $v0, $s5, 0x8
    ctx->pc = 0x1c5a68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1c5a6c:
    // 0x1c5a6c: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
label_1c5a70:
    if (ctx->pc == 0x1C5A70u) {
        ctx->pc = 0x1C5A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A6Cu;
        // 0x1c5a70: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5A74u;
        goto label_1c5a74;
    }
    ctx->pc = 0x1C5A6Cu;
    {
        const bool branch_taken_0x1c5a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A6Cu;
        // 0x1c5a70: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5a6c) {
            ctx->pc = 0x1C5920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c5920;
        }
    }
    ctx->pc = 0x1C5A74u;
label_1c5a74:
    // 0x1c5a74: 0x10000126  b           . + 4 + (0x126 << 2)
label_1c5a78:
    if (ctx->pc == 0x1C5A78u) {
        ctx->pc = 0x1C5A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A74u;
        // 0x1c5a78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5A7Cu;
        goto label_1c5a7c;
    }
    ctx->pc = 0x1C5A74u;
    {
        const bool branch_taken_0x1c5a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A74u;
        // 0x1c5a78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5a74) {
            ctx->pc = 0x1C5F10u;
            goto label_1c5f10;
        }
    }
    ctx->pc = 0x1C5A7Cu;
label_1c5a7c:
    // 0x1c5a7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c5a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1c5a80:
    // 0x1c5a80: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x1c5a80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_1c5a84:
    // 0x1c5a84: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1c5a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1c5a88:
    // 0x1c5a88: 0x262400b0  addiu       $a0, $s1, 0xB0
    ctx->pc = 0x1c5a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
label_1c5a8c:
    // 0x1c5a8c: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
label_1c5a90:
    if (ctx->pc == 0x1C5A90u) {
        ctx->pc = 0x1C5A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A8Cu;
        // 0x1c5a90: 0x263600c0  addiu       $s6, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5A94u;
        goto label_1c5a94;
    }
    ctx->pc = 0x1C5A8Cu;
    {
        const bool branch_taken_0x1c5a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A8Cu;
        // 0x1c5a90: 0x263600c0  addiu       $s6, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5a8c) {
            ctx->pc = 0x1C5C58u;
            goto label_1c5c58;
        }
    }
    ctx->pc = 0x1C5A94u;
label_1c5a94:
    // 0x1c5a94: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x1c5a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c5a98:
    // 0x1c5a98: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x1c5a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1c5a9c:
    // 0x1c5a9c: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x1c5a9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1c5aa0:
    // 0x1c5aa0: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x1c5aa0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1c5aa4:
    // 0x1c5aa4: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x1c5aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c5aa8:
    // 0x1c5aa8: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1c5aa8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1c5aac:
    // 0x1c5aac: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x1c5aacu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c5ab0:
    // 0x1c5ab0: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c5ab0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c5ab4:
    // 0x1c5ab4: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1c5ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5ab8:
    // 0x1c5ab8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1c5ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1c5abc:
    // 0x1c5abc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c5abcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c5ac0:
    // 0x1c5ac0: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1c5ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5ac4:
    // 0x1c5ac4: 0x12540007  beq         $s2, $s4, . + 4 + (0x7 << 2)
label_1c5ac8:
    if (ctx->pc == 0x1C5AC8u) {
        ctx->pc = 0x1C5AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5AC4u;
        // 0x1c5ac8: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5ACCu;
        goto label_1c5acc;
    }
    ctx->pc = 0x1C5AC4u;
    {
        const bool branch_taken_0x1c5ac4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 20));
        ctx->pc = 0x1C5AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5AC4u;
        // 0x1c5ac8: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5ac4) {
            ctx->pc = 0x1C5AE4u;
            goto label_1c5ae4;
        }
    }
    ctx->pc = 0x1C5ACCu;
label_1c5acc:
    // 0x1c5acc: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1c5accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c5ad0:
    // 0x1c5ad0: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1c5ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c5ad4:
    // 0x1c5ad4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1c5ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1c5ad8:
    // 0x1c5ad8: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x1c5ad8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_1c5adc:
    // 0x1c5adc: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1c5adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c5ae0:
    // 0x1c5ae0: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x1c5ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_1c5ae4:
    // 0x1c5ae4: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x1c5ae4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_1c5ae8:
    // 0x1c5ae8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c5ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_1c5aec:
    // 0x1c5aec: 0x1440005a  bnez        $v0, . + 4 + (0x5A << 2)
label_1c5af0:
    if (ctx->pc == 0x1C5AF0u) {
        ctx->pc = 0x1C5AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5AECu;
        // 0x1c5af0: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5AF4u;
        goto label_1c5af4;
    }
    ctx->pc = 0x1C5AECu;
    {
        const bool branch_taken_0x1c5aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5AECu;
        // 0x1c5af0: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5aec) {
            ctx->pc = 0x1C5C58u;
            goto label_1c5c58;
        }
    }
    ctx->pc = 0x1C5AF4u;
label_1c5af4:
    // 0x1c5af4: 0x50400101  beql        $v0, $zero, . + 4 + (0x101 << 2)
label_1c5af8:
    if (ctx->pc == 0x1C5AF8u) {
        ctx->pc = 0x1C5AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5AF4u;
        // 0x1c5af8: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5AFCu;
        goto label_1c5afc;
    }
    ctx->pc = 0x1C5AF4u;
    {
        const bool branch_taken_0x1c5af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5af4) {
            ctx->pc = 0x1C5AF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5AF4u;
            // 0x1c5af8: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5EFCu;
            goto label_1c5efc;
        }
    }
    ctx->pc = 0x1C5AFCu;
label_1c5afc:
    // 0x1c5afc: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x1c5afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1c5b00:
    // 0x1c5b00: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c5b00u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c5b04:
    // 0x1c5b04: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1c5b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5b08:
    // 0x1c5b08: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1c5b08u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c5b0c:
    // 0x1c5b0c: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x1c5b0cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_1c5b10:
    // 0x1c5b10: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c5b10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c5b14:
    // 0x1c5b14: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1c5b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5b18:
    // 0x1c5b18: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x1c5b18u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_1c5b1c:
    // 0x1c5b1c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1c5b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5b20:
    // 0x1c5b20: 0x10540006  beq         $v0, $s4, . + 4 + (0x6 << 2)
label_1c5b24:
    if (ctx->pc == 0x1C5B24u) {
        ctx->pc = 0x1C5B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5B20u;
        // 0x1c5b24: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5B28u;
        goto label_1c5b28;
    }
    ctx->pc = 0x1C5B20u;
    {
        const bool branch_taken_0x1c5b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x1C5B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5B20u;
        // 0x1c5b24: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5b20) {
            ctx->pc = 0x1C5B3Cu;
            goto label_1c5b3c;
        }
    }
    ctx->pc = 0x1C5B28u;
label_1c5b28:
    // 0x1c5b28: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1c5b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1c5b2c:
    // 0x1c5b2c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1c5b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c5b30:
    // 0x1c5b30: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c5b30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1c5b34:
    // 0x1c5b34: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1c5b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c5b38:
    // 0x1c5b38: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1c5b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1c5b3c:
    // 0x1c5b3c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c5b3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c5b40:
    // 0x1c5b40: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1c5b40u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c5b44:
    // 0x1c5b44: 0x2630000c  addiu       $s0, $s1, 0xC
    ctx->pc = 0x1c5b44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_1c5b48:
    // 0x1c5b48: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c5b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c5b4c:
    // 0x1c5b4c: 0x5040003e  beql        $v0, $zero, . + 4 + (0x3E << 2)
label_1c5b50:
    if (ctx->pc == 0x1C5B50u) {
        ctx->pc = 0x1C5B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5B4Cu;
        // 0x1c5b50: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5B54u;
        goto label_1c5b54;
    }
    ctx->pc = 0x1C5B4Cu;
    {
        const bool branch_taken_0x1c5b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5b4c) {
            ctx->pc = 0x1C5B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5B4Cu;
            // 0x1c5b50: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5C48u;
            goto label_1c5c48;
        }
    }
    ctx->pc = 0x1C5B54u;
label_1c5b54:
    // 0x1c5b54: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1c5b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_1c5b58:
    // 0x1c5b58: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c5b58u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c5b5c:
    // 0x1c5b5c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1c5b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5b60:
    // 0x1c5b60: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1c5b60u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c5b64:
    // 0x1c5b64: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x1c5b64u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_1c5b68:
    // 0x1c5b68: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c5b68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c5b6c:
    // 0x1c5b6c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1c5b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5b70:
    // 0x1c5b70: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x1c5b70u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_1c5b74:
    // 0x1c5b74: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1c5b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5b78:
    // 0x1c5b78: 0x10540006  beq         $v0, $s4, . + 4 + (0x6 << 2)
label_1c5b7c:
    if (ctx->pc == 0x1C5B7Cu) {
        ctx->pc = 0x1C5B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5B78u;
        // 0x1c5b7c: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5B80u;
        goto label_1c5b80;
    }
    ctx->pc = 0x1C5B78u;
    {
        const bool branch_taken_0x1c5b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x1C5B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5B78u;
        // 0x1c5b7c: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5b78) {
            ctx->pc = 0x1C5B94u;
            goto label_1c5b94;
        }
    }
    ctx->pc = 0x1C5B80u;
label_1c5b80:
    // 0x1c5b80: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1c5b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1c5b84:
    // 0x1c5b84: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1c5b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c5b88:
    // 0x1c5b88: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c5b88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1c5b8c:
    // 0x1c5b8c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1c5b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c5b90:
    // 0x1c5b90: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1c5b90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1c5b94:
    // 0x1c5b94: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c5b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c5b98:
    // 0x1c5b98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c5b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c5b9c:
    // 0x1c5b9c: 0x946302fe  lhu         $v1, 0x2FE($v1)
    ctx->pc = 0x1c5b9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 766)));
label_1c5ba0:
    // 0x1c5ba0: 0x28620100  slti        $v0, $v1, 0x100
    ctx->pc = 0x1c5ba0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
label_1c5ba4:
    // 0x1c5ba4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c5ba8:
    if (ctx->pc == 0x1C5BA8u) {
        ctx->pc = 0x1C5BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5BA4u;
        // 0x1c5ba8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5BACu;
        goto label_1c5bac;
    }
    ctx->pc = 0x1C5BA4u;
    {
        const bool branch_taken_0x1c5ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5BA4u;
        // 0x1c5ba8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5ba4) {
            ctx->pc = 0x1C5BB4u;
            goto label_1c5bb4;
        }
    }
    ctx->pc = 0x1C5BACu;
label_1c5bac:
    // 0x1c5bac: 0x286201ff  slti        $v0, $v1, 0x1FF
    ctx->pc = 0x1c5bacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)511) ? 1 : 0);
label_1c5bb0:
    // 0x1c5bb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c5bb4:
    // 0x1c5bb4: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c5bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c5bb8:
    // 0x1c5bb8: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_1c5bbc:
    if (ctx->pc == 0x1C5BBCu) {
        ctx->pc = 0x1C5BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5BB8u;
        // 0x1c5bbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5BC0u;
        goto label_1c5bc0;
    }
    ctx->pc = 0x1C5BB8u;
    {
        const bool branch_taken_0x1c5bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5bb8) {
            ctx->pc = 0x1C5BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5BB8u;
            // 0x1c5bbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5C20u;
            goto label_1c5c20;
        }
    }
    ctx->pc = 0x1C5BC0u;
label_1c5bc0:
    // 0x1c5bc0: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x1c5bc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
label_1c5bc4:
    // 0x1c5bc4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c5bc8:
    if (ctx->pc == 0x1C5BC8u) {
        ctx->pc = 0x1C5BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5BC4u;
        // 0x1c5bc8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5BCCu;
        goto label_1c5bcc;
    }
    ctx->pc = 0x1C5BC4u;
    {
        const bool branch_taken_0x1c5bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5BC4u;
        // 0x1c5bc8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5bc4) {
            ctx->pc = 0x1C5BD4u;
            goto label_1c5bd4;
        }
    }
    ctx->pc = 0x1C5BCCu;
label_1c5bcc:
    // 0x1c5bcc: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x1c5bccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_1c5bd0:
    // 0x1c5bd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c5bd4:
    // 0x1c5bd4: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c5bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c5bd8:
    // 0x1c5bd8: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_1c5bdc:
    if (ctx->pc == 0x1C5BDCu) {
        ctx->pc = 0x1C5BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5BD8u;
        // 0x1c5bdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5BE0u;
        goto label_1c5be0;
    }
    ctx->pc = 0x1C5BD8u;
    {
        const bool branch_taken_0x1c5bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5bd8) {
            ctx->pc = 0x1C5BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5BD8u;
            // 0x1c5bdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5C20u;
            goto label_1c5c20;
        }
    }
    ctx->pc = 0x1C5BE0u;
label_1c5be0:
    // 0x1c5be0: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x1c5be0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_1c5be4:
    // 0x1c5be4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c5be8:
    if (ctx->pc == 0x1C5BE8u) {
        ctx->pc = 0x1C5BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5BE4u;
        // 0x1c5be8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5BECu;
        goto label_1c5bec;
    }
    ctx->pc = 0x1C5BE4u;
    {
        const bool branch_taken_0x1c5be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5BE4u;
        // 0x1c5be8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5be4) {
            ctx->pc = 0x1C5BF4u;
            goto label_1c5bf4;
        }
    }
    ctx->pc = 0x1C5BECu;
label_1c5bec:
    // 0x1c5bec: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x1c5becu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
label_1c5bf0:
    // 0x1c5bf0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c5bf4:
    // 0x1c5bf4: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c5bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c5bf8:
    // 0x1c5bf8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_1c5bfc:
    if (ctx->pc == 0x1C5BFCu) {
        ctx->pc = 0x1C5BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5BF8u;
        // 0x1c5bfc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5C00u;
        goto label_1c5c00;
    }
    ctx->pc = 0x1C5BF8u;
    {
        const bool branch_taken_0x1c5bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5bf8) {
            ctx->pc = 0x1C5BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5BF8u;
            // 0x1c5bfc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5C20u;
            goto label_1c5c20;
        }
    }
    ctx->pc = 0x1C5C00u;
label_1c5c00:
    // 0x1c5c00: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x1c5c00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
label_1c5c04:
    // 0x1c5c04: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c5c08:
    if (ctx->pc == 0x1C5C08u) {
        ctx->pc = 0x1C5C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C04u;
        // 0x1c5c08: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5C0Cu;
        goto label_1c5c0c;
    }
    ctx->pc = 0x1C5C04u;
    {
        const bool branch_taken_0x1c5c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C04u;
        // 0x1c5c08: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5c04) {
            ctx->pc = 0x1C5C14u;
            goto label_1c5c14;
        }
    }
    ctx->pc = 0x1C5C0Cu;
label_1c5c0c:
    // 0x1c5c0c: 0x28620600  slti        $v0, $v1, 0x600
    ctx->pc = 0x1c5c0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1536) ? 1 : 0);
label_1c5c10:
    // 0x1c5c10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c5c14:
    // 0x1c5c14: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c5c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c5c18:
    // 0x1c5c18: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1c5c1c:
    if (ctx->pc == 0x1C5C1Cu) {
        ctx->pc = 0x1C5C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C18u;
        // 0x1c5c1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5C20u;
        goto label_1c5c20;
    }
    ctx->pc = 0x1C5C18u;
    {
        const bool branch_taken_0x1c5c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5c18) {
            ctx->pc = 0x1C5C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5C18u;
            // 0x1c5c1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5C20u;
            goto label_1c5c20;
        }
    }
    ctx->pc = 0x1C5C20u;
label_1c5c20:
    // 0x1c5c20: 0x54b50009  bnel        $a1, $s5, . + 4 + (0x9 << 2)
label_1c5c24:
    if (ctx->pc == 0x1C5C24u) {
        ctx->pc = 0x1C5C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C20u;
        // 0x1c5c24: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5C28u;
        goto label_1c5c28;
    }
    ctx->pc = 0x1C5C20u;
    {
        const bool branch_taken_0x1c5c20 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 21));
        if (branch_taken_0x1c5c20) {
            ctx->pc = 0x1C5C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5C20u;
            // 0x1c5c24: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5C48u;
            goto label_1c5c48;
        }
    }
    ctx->pc = 0x1C5C28u;
label_1c5c28:
    // 0x1c5c28: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c5c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c5c2c:
    // 0x1c5c2c: 0x8c820214  lw          $v0, 0x214($a0)
    ctx->pc = 0x1c5c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 532)));
label_1c5c30:
    // 0x1c5c30: 0x8c8500f0  lw          $a1, 0xF0($a0)
    ctx->pc = 0x1c5c30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_1c5c34:
    // 0x1c5c34: 0x84430070  lh          $v1, 0x70($v0)
    ctx->pc = 0x1c5c34u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1c5c38:
    // 0x1c5c38: 0x8c460074  lw          $a2, 0x74($v0)
    ctx->pc = 0x1c5c38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1c5c3c:
    // 0x1c5c3c: 0xc0f809  jalr        $a2
label_1c5c40:
    if (ctx->pc == 0x1C5C40u) {
        ctx->pc = 0x1C5C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C3Cu;
        // 0x1c5c40: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5C44u;
        goto label_1c5c44;
    }
    ctx->pc = 0x1C5C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1C5C44u);
        ctx->pc = 0x1C5C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C3Cu;
        // 0x1c5c40: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5C3Cu, 0x1C5C44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C5C44u;
label_1c5c44:
    // 0x1c5c44: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1c5c44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1c5c48:
    // 0x1c5c48: 0x2e620008  sltiu       $v0, $s3, 0x8
    ctx->pc = 0x1c5c48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1c5c4c:
    // 0x1c5c4c: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
label_1c5c50:
    if (ctx->pc == 0x1C5C50u) {
        ctx->pc = 0x1C5C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C4Cu;
        // 0x1c5c50: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5C54u;
        goto label_1c5c54;
    }
    ctx->pc = 0x1C5C4Cu;
    {
        const bool branch_taken_0x1c5c4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C4Cu;
        // 0x1c5c50: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5c4c) {
            ctx->pc = 0x1C5B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c5b48;
        }
    }
    ctx->pc = 0x1C5C54u;
label_1c5c54:
    // 0x1c5c54: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1c5c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1c5c58:
    // 0x1c5c58: 0x504000a8  beql        $v0, $zero, . + 4 + (0xA8 << 2)
label_1c5c5c:
    if (ctx->pc == 0x1C5C5Cu) {
        ctx->pc = 0x1C5C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C58u;
        // 0x1c5c5c: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5C60u;
        goto label_1c5c60;
    }
    ctx->pc = 0x1C5C58u;
    {
        const bool branch_taken_0x1c5c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5c58) {
            ctx->pc = 0x1C5C5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5C58u;
            // 0x1c5c5c: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5EFCu;
            goto label_1c5efc;
        }
    }
    ctx->pc = 0x1C5C60u;
label_1c5c60:
    // 0x1c5c60: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x1c5c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c5c64:
    // 0x1c5c64: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x1c5c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
label_1c5c68:
    // 0x1c5c68: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1c5c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1c5c6c:
    // 0x1c5c6c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1c5c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1c5c70:
    // 0x1c5c70: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x1c5c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c5c74:
    // 0x1c5c74: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x1c5c74u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_1c5c78:
    // 0x1c5c78: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1c5c78u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c5c7c:
    // 0x1c5c7c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c5c7cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c5c80:
    // 0x1c5c80: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1c5c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5c84:
    // 0x1c5c84: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x1c5c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1c5c88:
    // 0x1c5c88: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1c5c88u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c5c8c:
    // 0x1c5c8c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1c5c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5c90:
    // 0x1c5c90: 0x10a40006  beq         $a1, $a0, . + 4 + (0x6 << 2)
label_1c5c94:
    if (ctx->pc == 0x1C5C94u) {
        ctx->pc = 0x1C5C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C90u;
        // 0x1c5c94: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5C98u;
        goto label_1c5c98;
    }
    ctx->pc = 0x1C5C90u;
    {
        const bool branch_taken_0x1c5c90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x1C5C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5C90u;
        // 0x1c5c94: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5c90) {
            ctx->pc = 0x1C5CACu;
            goto label_1c5cac;
        }
    }
    ctx->pc = 0x1C5C98u;
label_1c5c98:
    // 0x1c5c98: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1c5c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c5c9c:
    // 0x1c5c9c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1c5c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1c5ca0:
    // 0x1c5ca0: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x1c5ca0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_1c5ca4:
    // 0x1c5ca4: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1c5ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c5ca8:
    // 0x1c5ca8: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x1c5ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_1c5cac:
    // 0x1c5cac: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x1c5cacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_1c5cb0:
    // 0x1c5cb0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c5cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1c5cb4:
    // 0x1c5cb4: 0x54400091  bnel        $v0, $zero, . + 4 + (0x91 << 2)
label_1c5cb8:
    if (ctx->pc == 0x1C5CB8u) {
        ctx->pc = 0x1C5CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5CB4u;
        // 0x1c5cb8: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5CBCu;
        goto label_1c5cbc;
    }
    ctx->pc = 0x1C5CB4u;
    {
        const bool branch_taken_0x1c5cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5cb4) {
            ctx->pc = 0x1C5CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5CB4u;
            // 0x1c5cb8: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5EFCu;
            goto label_1c5efc;
        }
    }
    ctx->pc = 0x1C5CBCu;
label_1c5cbc:
    // 0x1c5cbc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1c5cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1c5cc0:
    // 0x1c5cc0: 0x5060008e  beql        $v1, $zero, . + 4 + (0x8E << 2)
label_1c5cc4:
    if (ctx->pc == 0x1C5CC4u) {
        ctx->pc = 0x1C5CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5CC0u;
        // 0x1c5cc4: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5CC8u;
        goto label_1c5cc8;
    }
    ctx->pc = 0x1C5CC0u;
    {
        const bool branch_taken_0x1c5cc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5cc0) {
            ctx->pc = 0x1C5CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5CC0u;
            // 0x1c5cc4: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5EFCu;
            goto label_1c5efc;
        }
    }
    ctx->pc = 0x1C5CC8u;
label_1c5cc8:
    // 0x1c5cc8: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x1c5cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c5ccc:
    // 0x1c5ccc: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x1c5cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c5cd0:
    // 0x1c5cd0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c5cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1c5cd4:
    // 0x1c5cd4: 0x24620100  addiu       $v0, $v1, 0x100
    ctx->pc = 0x1c5cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
label_1c5cd8:
    // 0x1c5cd8: 0x50820008  beql        $a0, $v0, . + 4 + (0x8 << 2)
label_1c5cdc:
    if (ctx->pc == 0x1C5CDCu) {
        ctx->pc = 0x1C5CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5CD8u;
        // 0x1c5cdc: 0x27a30080  addiu       $v1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5CE0u;
        goto label_1c5ce0;
    }
    ctx->pc = 0x1C5CD8u;
    {
        const bool branch_taken_0x1c5cd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c5cd8) {
            ctx->pc = 0x1C5CDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5CD8u;
            // 0x1c5cdc: 0x27a30080  addiu       $v1, $sp, 0x80 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5CFCu;
            goto label_1c5cfc;
        }
    }
    ctx->pc = 0x1C5CE0u;
label_1c5ce0:
    // 0x1c5ce0: 0xc4600100  lwc1        $f0, 0x100($v1)
    ctx->pc = 0x1c5ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c5ce4:
    // 0x1c5ce4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1c5ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1c5ce8:
    // 0x1c5ce8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1c5ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c5cec:
    // 0x1c5cec: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x1c5cecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_1c5cf0:
    // 0x1c5cf0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1c5cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c5cf4:
    // 0x1c5cf4: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1c5cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_1c5cf8:
    // 0x1c5cf8: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x1c5cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1c5cfc:
    // 0x1c5cfc: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1c5cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1c5d00:
    // 0x1c5d00: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x1c5d00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1c5d04:
    // 0x1c5d04: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1c5d04u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1c5d08:
    // 0x1c5d08: 0xf8440010  sqc2        $vf4, 0x10($v0)
    ctx->pc = 0x1c5d08u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5d0c:
    // 0x1c5d0c: 0xdba40080  lqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1c5d0cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1c5d10:
    // 0x1c5d10: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x1c5d10u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1c5d14:
    // 0x1c5d14: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c5d14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c5d18:
    // 0x1c5d18: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1c5d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5d1c:
    // 0x1c5d1c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1c5d1cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c5d20:
    // 0x1c5d20: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1c5d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5d24:
    // 0x1c5d24: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
label_1c5d28:
    if (ctx->pc == 0x1C5D28u) {
        ctx->pc = 0x1C5D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D24u;
        // 0x1c5d28: 0x60f02d  daddu       $fp, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5D2Cu;
        goto label_1c5d2c;
    }
    ctx->pc = 0x1C5D24u;
    {
        const bool branch_taken_0x1c5d24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C5D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D24u;
        // 0x1c5d28: 0x60f02d  daddu       $fp, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5d24) {
            ctx->pc = 0x1C5D44u;
            goto label_1c5d44;
        }
    }
    ctx->pc = 0x1C5D2Cu;
label_1c5d2c:
    // 0x1c5d2c: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1c5d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c5d30:
    // 0x1c5d30: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x1c5d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c5d34:
    // 0x1c5d34: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1c5d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1c5d38:
    // 0x1c5d38: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1c5d38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_1c5d3c:
    // 0x1c5d3c: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x1c5d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c5d40:
    // 0x1c5d40: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1c5d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1c5d44:
    // 0x1c5d44: 0xc07df68  jal         func_1F7DA0
label_1c5d48:
    if (ctx->pc == 0x1C5D48u) {
        ctx->pc = 0x1C5D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D44u;
        // 0x1c5d48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5D4Cu;
        goto label_1c5d4c;
    }
    ctx->pc = 0x1C5D44u;
    SET_GPR_U32(ctx, 31, 0x1C5D4Cu);
    ctx->pc = 0x1C5D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5D44u;
    // 0x1c5d48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x1C5D44u, 0x1C5D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5D4Cu;
label_1c5d4c:
    // 0x1c5d4c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1c5d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1c5d50:
    // 0x1c5d50: 0x24620100  addiu       $v0, $v1, 0x100
    ctx->pc = 0x1c5d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
label_1c5d54:
    // 0x1c5d54: 0x10500006  beq         $v0, $s0, . + 4 + (0x6 << 2)
label_1c5d58:
    if (ctx->pc == 0x1C5D58u) {
        ctx->pc = 0x1C5D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D54u;
        // 0x1c5d58: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5D5Cu;
        goto label_1c5d5c;
    }
    ctx->pc = 0x1C5D54u;
    {
        const bool branch_taken_0x1c5d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1C5D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D54u;
        // 0x1c5d58: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5d54) {
            ctx->pc = 0x1C5D70u;
            goto label_1c5d70;
        }
    }
    ctx->pc = 0x1C5D5Cu;
label_1c5d5c:
    // 0x1c5d5c: 0xe4600100  swc1        $f0, 0x100($v1)
    ctx->pc = 0x1c5d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 256), bits); }
label_1c5d60:
    // 0x1c5d60: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1c5d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c5d64:
    // 0x1c5d64: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c5d64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1c5d68:
    // 0x1c5d68: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1c5d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c5d6c:
    // 0x1c5d6c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1c5d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1c5d70:
    // 0x1c5d70: 0xc0527ae  jal         func_149EB8
label_1c5d74:
    if (ctx->pc == 0x1C5D74u) {
        ctx->pc = 0x1C5D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D70u;
        // 0x1c5d74: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5D78u;
        goto label_1c5d78;
    }
    ctx->pc = 0x1C5D70u;
    SET_GPR_U32(ctx, 31, 0x1C5D78u);
    ctx->pc = 0x1C5D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5D70u;
    // 0x1c5d74: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1C5D70u, 0x1C5D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5D78u;
label_1c5d78:
    // 0x1c5d78: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x1c5d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c5d7c:
    // 0x1c5d7c: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1c5d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1c5d80:
    // 0x1c5d80: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c5d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1c5d84:
    // 0x1c5d84: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1c5d84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c5d88:
    // 0x1c5d88: 0x2632000c  addiu       $s2, $s1, 0xC
    ctx->pc = 0x1c5d88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_1c5d8c:
    // 0x1c5d8c: 0xc051f18  jal         func_147C60
label_1c5d90:
    if (ctx->pc == 0x1C5D90u) {
        ctx->pc = 0x1C5D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D8Cu;
        // 0x1c5d90: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5D94u;
        goto label_1c5d94;
    }
    ctx->pc = 0x1C5D8Cu;
    SET_GPR_U32(ctx, 31, 0x1C5D94u);
    ctx->pc = 0x1C5D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5D8Cu;
    // 0x1c5d90: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x1C5D8Cu, 0x1C5D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5D94u;
label_1c5d94:
    // 0x1c5d94: 0x27b40090  addiu       $s4, $sp, 0x90
    ctx->pc = 0x1c5d94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1c5d98:
    // 0x1c5d98: 0x27b300a0  addiu       $s3, $sp, 0xA0
    ctx->pc = 0x1c5d98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1c5d9c:
    // 0x1c5d9c: 0x0  nop
    ctx->pc = 0x1c5d9cu;
    // NOP
label_1c5da0:
    // 0x1c5da0: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x1c5da0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c5da4:
    // 0x1c5da4: 0x52000051  beql        $s0, $zero, . + 4 + (0x51 << 2)
label_1c5da8:
    if (ctx->pc == 0x1C5DA8u) {
        ctx->pc = 0x1C5DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5DA4u;
        // 0x1c5da8: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5DACu;
        goto label_1c5dac;
    }
    ctx->pc = 0x1C5DA4u;
    {
        const bool branch_taken_0x1c5da4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5da4) {
            ctx->pc = 0x1C5DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5DA4u;
            // 0x1c5da8: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5EECu;
            goto label_1c5eec;
        }
    }
    ctx->pc = 0x1C5DACu;
label_1c5dac:
    // 0x1c5dac: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x1c5dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c5db0:
    // 0x1c5db0: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1c5db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_1c5db4:
    // 0x1c5db4: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x1c5db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c5db8:
    // 0x1c5db8: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x1c5db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1c5dbc:
    // 0x1c5dbc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c5dbcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c5dc0:
    // 0x1c5dc0: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x1c5dc0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c5dc4:
    // 0x1c5dc4: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c5dc4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c5dc8:
    // 0x1c5dc8: 0xfa840010  sqc2        $vf4, 0x10($s4)
    ctx->pc = 0x1c5dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5dcc:
    // 0x1c5dcc: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1c5dccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_1c5dd0:
    // 0x1c5dd0: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1c5dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5dd4:
    // 0x1c5dd4: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1c5dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1c5dd8:
    // 0x1c5dd8: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x1c5dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c5ddc:
    // 0x1c5ddc: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x1c5ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c5de0:
    // 0x1c5de0: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1c5de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_1c5de4:
    // 0x1c5de4: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x1c5de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c5de8:
    // 0x1c5de8: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1c5de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1c5dec:
    // 0x1c5dec: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x1c5decu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1c5df0:
    // 0x1c5df0: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x1c5df0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_1c5df4:
    // 0x1c5df4: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x1c5df4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_1c5df8:
    // 0x1c5df8: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x1c5df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5dfc:
    // 0x1c5dfc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c5dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c5e00:
    // 0x1c5e00: 0xc0c28ac  jal         func_30A2B0
label_1c5e04:
    if (ctx->pc == 0x1C5E04u) {
        ctx->pc = 0x1C5E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E00u;
        // 0x1c5e04: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5E08u;
        goto label_1c5e08;
    }
    ctx->pc = 0x1C5E00u;
    SET_GPR_U32(ctx, 31, 0x1C5E08u);
    ctx->pc = 0x1C5E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5E00u;
    // 0x1c5e04: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x1C5E00u, 0x1C5E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5E08u;
label_1c5e08:
    // 0x1c5e08: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1c5e08u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_1c5e0c:
    // 0x1c5e0c: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1c5e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c5e10:
    // 0x1c5e10: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1c5e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_1c5e14:
    // 0x1c5e14: 0x10540006  beq         $v0, $s4, . + 4 + (0x6 << 2)
label_1c5e18:
    if (ctx->pc == 0x1C5E18u) {
        ctx->pc = 0x1C5E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E14u;
        // 0x1c5e18: 0xc7a00090  lwc1        $f0, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5E1Cu;
        goto label_1c5e1c;
    }
    ctx->pc = 0x1C5E14u;
    {
        const bool branch_taken_0x1c5e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x1C5E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E14u;
        // 0x1c5e18: 0xc7a00090  lwc1        $f0, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5e14) {
            ctx->pc = 0x1C5E30u;
            goto label_1c5e30;
        }
    }
    ctx->pc = 0x1C5E1Cu;
label_1c5e1c:
    // 0x1c5e1c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1c5e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1c5e20:
    // 0x1c5e20: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x1c5e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c5e24:
    // 0x1c5e24: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c5e24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1c5e28:
    // 0x1c5e28: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x1c5e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c5e2c:
    // 0x1c5e2c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1c5e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1c5e30:
    // 0x1c5e30: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1c5e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c5e34:
    // 0x1c5e34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c5e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c5e38:
    // 0x1c5e38: 0x946302fe  lhu         $v1, 0x2FE($v1)
    ctx->pc = 0x1c5e38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 766)));
label_1c5e3c:
    // 0x1c5e3c: 0x28620100  slti        $v0, $v1, 0x100
    ctx->pc = 0x1c5e3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
label_1c5e40:
    // 0x1c5e40: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c5e44:
    if (ctx->pc == 0x1C5E44u) {
        ctx->pc = 0x1C5E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E40u;
        // 0x1c5e44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5E48u;
        goto label_1c5e48;
    }
    ctx->pc = 0x1C5E40u;
    {
        const bool branch_taken_0x1c5e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E40u;
        // 0x1c5e44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5e40) {
            ctx->pc = 0x1C5E50u;
            goto label_1c5e50;
        }
    }
    ctx->pc = 0x1C5E48u;
label_1c5e48:
    // 0x1c5e48: 0x286201ff  slti        $v0, $v1, 0x1FF
    ctx->pc = 0x1c5e48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)511) ? 1 : 0);
label_1c5e4c:
    // 0x1c5e4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c5e50:
    // 0x1c5e50: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c5e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c5e54:
    // 0x1c5e54: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
label_1c5e58:
    if (ctx->pc == 0x1C5E58u) {
        ctx->pc = 0x1C5E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E54u;
        // 0x1c5e58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5E5Cu;
        goto label_1c5e5c;
    }
    ctx->pc = 0x1C5E54u;
    {
        const bool branch_taken_0x1c5e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5e54) {
            ctx->pc = 0x1C5E58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5E54u;
            // 0x1c5e58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5EC0u;
            goto label_1c5ec0;
        }
    }
    ctx->pc = 0x1C5E5Cu;
label_1c5e5c:
    // 0x1c5e5c: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x1c5e5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
label_1c5e60:
    // 0x1c5e60: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c5e64:
    if (ctx->pc == 0x1C5E64u) {
        ctx->pc = 0x1C5E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E60u;
        // 0x1c5e64: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5E68u;
        goto label_1c5e68;
    }
    ctx->pc = 0x1C5E60u;
    {
        const bool branch_taken_0x1c5e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E60u;
        // 0x1c5e64: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5e60) {
            ctx->pc = 0x1C5E70u;
            goto label_1c5e70;
        }
    }
    ctx->pc = 0x1C5E68u;
label_1c5e68:
    // 0x1c5e68: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x1c5e68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_1c5e6c:
    // 0x1c5e6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c5e70:
    // 0x1c5e70: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c5e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c5e74:
    // 0x1c5e74: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_1c5e78:
    if (ctx->pc == 0x1C5E78u) {
        ctx->pc = 0x1C5E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E74u;
        // 0x1c5e78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5E7Cu;
        goto label_1c5e7c;
    }
    ctx->pc = 0x1C5E74u;
    {
        const bool branch_taken_0x1c5e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5e74) {
            ctx->pc = 0x1C5E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5E74u;
            // 0x1c5e78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5EC0u;
            goto label_1c5ec0;
        }
    }
    ctx->pc = 0x1C5E7Cu;
label_1c5e7c:
    // 0x1c5e7c: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x1c5e7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_1c5e80:
    // 0x1c5e80: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c5e84:
    if (ctx->pc == 0x1C5E84u) {
        ctx->pc = 0x1C5E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E80u;
        // 0x1c5e84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5E88u;
        goto label_1c5e88;
    }
    ctx->pc = 0x1C5E80u;
    {
        const bool branch_taken_0x1c5e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E80u;
        // 0x1c5e84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5e80) {
            ctx->pc = 0x1C5E90u;
            goto label_1c5e90;
        }
    }
    ctx->pc = 0x1C5E88u;
label_1c5e88:
    // 0x1c5e88: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x1c5e88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
label_1c5e8c:
    // 0x1c5e8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c5e90:
    // 0x1c5e90: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c5e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c5e94:
    // 0x1c5e94: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_1c5e98:
    if (ctx->pc == 0x1C5E98u) {
        ctx->pc = 0x1C5E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E94u;
        // 0x1c5e98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5E9Cu;
        goto label_1c5e9c;
    }
    ctx->pc = 0x1C5E94u;
    {
        const bool branch_taken_0x1c5e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5e94) {
            ctx->pc = 0x1C5E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5E94u;
            // 0x1c5e98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5EC0u;
            goto label_1c5ec0;
        }
    }
    ctx->pc = 0x1C5E9Cu;
label_1c5e9c:
    // 0x1c5e9c: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x1c5e9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
label_1c5ea0:
    // 0x1c5ea0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c5ea4:
    if (ctx->pc == 0x1C5EA4u) {
        ctx->pc = 0x1C5EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5EA0u;
        // 0x1c5ea4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5EA8u;
        goto label_1c5ea8;
    }
    ctx->pc = 0x1C5EA0u;
    {
        const bool branch_taken_0x1c5ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5EA0u;
        // 0x1c5ea4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5ea0) {
            ctx->pc = 0x1C5EB0u;
            goto label_1c5eb0;
        }
    }
    ctx->pc = 0x1C5EA8u;
label_1c5ea8:
    // 0x1c5ea8: 0x28620600  slti        $v0, $v1, 0x600
    ctx->pc = 0x1c5ea8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1536) ? 1 : 0);
label_1c5eac:
    // 0x1c5eac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c5eb0:
    // 0x1c5eb0: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1c5eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1c5eb4:
    // 0x1c5eb4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1c5eb8:
    if (ctx->pc == 0x1C5EB8u) {
        ctx->pc = 0x1C5EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5EB4u;
        // 0x1c5eb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5EBCu;
        goto label_1c5ebc;
    }
    ctx->pc = 0x1C5EB4u;
    {
        const bool branch_taken_0x1c5eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5EB4u;
        // 0x1c5eb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5eb4) {
            ctx->pc = 0x1C5EC4u;
            goto label_1c5ec4;
        }
    }
    ctx->pc = 0x1C5EBCu;
label_1c5ebc:
    // 0x1c5ebc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c5ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c5ec0:
    // 0x1c5ec0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c5ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c5ec4:
    // 0x1c5ec4: 0x54a20009  bnel        $a1, $v0, . + 4 + (0x9 << 2)
label_1c5ec8:
    if (ctx->pc == 0x1C5EC8u) {
        ctx->pc = 0x1C5EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5EC4u;
        // 0x1c5ec8: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5ECCu;
        goto label_1c5ecc;
    }
    ctx->pc = 0x1C5EC4u;
    {
        const bool branch_taken_0x1c5ec4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c5ec4) {
            ctx->pc = 0x1C5EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5EC4u;
            // 0x1c5ec8: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5EECu;
            goto label_1c5eec;
        }
    }
    ctx->pc = 0x1C5ECCu;
label_1c5ecc:
    // 0x1c5ecc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1c5eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c5ed0:
    // 0x1c5ed0: 0x8c820214  lw          $v0, 0x214($a0)
    ctx->pc = 0x1c5ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 532)));
label_1c5ed4:
    // 0x1c5ed4: 0x8c8500f0  lw          $a1, 0xF0($a0)
    ctx->pc = 0x1c5ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_1c5ed8:
    // 0x1c5ed8: 0x84430070  lh          $v1, 0x70($v0)
    ctx->pc = 0x1c5ed8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1c5edc:
    // 0x1c5edc: 0x8c460074  lw          $a2, 0x74($v0)
    ctx->pc = 0x1c5edcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1c5ee0:
    // 0x1c5ee0: 0xc0f809  jalr        $a2
label_1c5ee4:
    if (ctx->pc == 0x1C5EE4u) {
        ctx->pc = 0x1C5EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5EE0u;
        // 0x1c5ee4: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5EE8u;
        goto label_1c5ee8;
    }
    ctx->pc = 0x1C5EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1C5EE8u);
        ctx->pc = 0x1C5EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5EE0u;
        // 0x1c5ee4: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5EE0u, 0x1C5EE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C5EE8u;
label_1c5ee8:
    // 0x1c5ee8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1c5ee8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1c5eec:
    // 0x1c5eec: 0x2ea20008  sltiu       $v0, $s5, 0x8
    ctx->pc = 0x1c5eecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1c5ef0:
    // 0x1c5ef0: 0x1440ffab  bnez        $v0, . + 4 + (-0x55 << 2)
label_1c5ef4:
    if (ctx->pc == 0x1C5EF4u) {
        ctx->pc = 0x1C5EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5EF0u;
        // 0x1c5ef4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5EF8u;
        goto label_1c5ef8;
    }
    ctx->pc = 0x1C5EF0u;
    {
        const bool branch_taken_0x1c5ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5EF0u;
        // 0x1c5ef4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5ef0) {
            ctx->pc = 0x1C5DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c5da0;
        }
    }
    ctx->pc = 0x1C5EF8u;
label_1c5ef8:
    // 0x1c5ef8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1c5ef8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1c5efc:
    // 0x1c5efc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c5efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1c5f00:
    // 0x1c5f00: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x1c5f00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_1c5f04:
    // 0x1c5f04: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c5f08:
    if (ctx->pc == 0x1C5F08u) {
        ctx->pc = 0x1C5F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F04u;
        // 0x1c5f08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5F0Cu;
        goto label_1c5f0c;
    }
    ctx->pc = 0x1C5F04u;
    {
        const bool branch_taken_0x1c5f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F04u;
        // 0x1c5f08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5f04) {
            ctx->pc = 0x1C5F10u;
            goto label_1c5f10;
        }
    }
    ctx->pc = 0x1C5F0Cu;
label_1c5f0c:
    // 0x1c5f0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c5f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c5f10:
    // 0x1c5f10: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x1c5f10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_1c5f14:
    // 0x1c5f14: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x1c5f14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_1c5f18:
    // 0x1c5f18: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x1c5f18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_1c5f1c:
    // 0x1c5f1c: 0x7bb30140  lq          $s3, 0x140($sp)
    ctx->pc = 0x1c5f1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_1c5f20:
    // 0x1c5f20: 0x7bb40130  lq          $s4, 0x130($sp)
    ctx->pc = 0x1c5f20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1c5f24:
    // 0x1c5f24: 0x7bb50120  lq          $s5, 0x120($sp)
    ctx->pc = 0x1c5f24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1c5f28:
    // 0x1c5f28: 0x7bb60110  lq          $s6, 0x110($sp)
    ctx->pc = 0x1c5f28u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1c5f2c:
    // 0x1c5f2c: 0x7bb70100  lq          $s7, 0x100($sp)
    ctx->pc = 0x1c5f2cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1c5f30:
    // 0x1c5f30: 0x7bbe00f0  lq          $fp, 0xF0($sp)
    ctx->pc = 0x1c5f30u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1c5f34:
    // 0x1c5f34: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x1c5f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_1c5f38:
    // 0x1c5f38: 0x3e00008  jr          $ra
label_1c5f3c:
    if (ctx->pc == 0x1C5F3Cu) {
        ctx->pc = 0x1C5F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F38u;
        // 0x1c5f3c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5F40u;
        goto label_fallthrough_0x1c5f38;
    }
    ctx->pc = 0x1C5F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F38u;
        // 0x1c5f3c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c5f38:
    ctx->pc = 0x1C5F40u;
}
