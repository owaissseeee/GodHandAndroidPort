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

// Function: func_002F43E8
// Address: 0x2f43e8 - 0x2f48a8
void func_002F43E8_0x2f43e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F43E8_0x2f43e8");
#endif

    switch (ctx->pc) {
        case 0x2f43e8u: goto label_2f43e8;
        case 0x2f43ecu: goto label_2f43ec;
        case 0x2f43f0u: goto label_2f43f0;
        case 0x2f43f4u: goto label_2f43f4;
        case 0x2f43f8u: goto label_2f43f8;
        case 0x2f43fcu: goto label_2f43fc;
        case 0x2f4400u: goto label_2f4400;
        case 0x2f4404u: goto label_2f4404;
        case 0x2f4408u: goto label_2f4408;
        case 0x2f440cu: goto label_2f440c;
        case 0x2f4410u: goto label_2f4410;
        case 0x2f4414u: goto label_2f4414;
        case 0x2f4418u: goto label_2f4418;
        case 0x2f441cu: goto label_2f441c;
        case 0x2f4420u: goto label_2f4420;
        case 0x2f4424u: goto label_2f4424;
        case 0x2f4428u: goto label_2f4428;
        case 0x2f442cu: goto label_2f442c;
        case 0x2f4430u: goto label_2f4430;
        case 0x2f4434u: goto label_2f4434;
        case 0x2f4438u: goto label_2f4438;
        case 0x2f443cu: goto label_2f443c;
        case 0x2f4440u: goto label_2f4440;
        case 0x2f4444u: goto label_2f4444;
        case 0x2f4448u: goto label_2f4448;
        case 0x2f444cu: goto label_2f444c;
        case 0x2f4450u: goto label_2f4450;
        case 0x2f4454u: goto label_2f4454;
        case 0x2f4458u: goto label_2f4458;
        case 0x2f445cu: goto label_2f445c;
        case 0x2f4460u: goto label_2f4460;
        case 0x2f4464u: goto label_2f4464;
        case 0x2f4468u: goto label_2f4468;
        case 0x2f446cu: goto label_2f446c;
        case 0x2f4470u: goto label_2f4470;
        case 0x2f4474u: goto label_2f4474;
        case 0x2f4478u: goto label_2f4478;
        case 0x2f447cu: goto label_2f447c;
        case 0x2f4480u: goto label_2f4480;
        case 0x2f4484u: goto label_2f4484;
        case 0x2f4488u: goto label_2f4488;
        case 0x2f448cu: goto label_2f448c;
        case 0x2f4490u: goto label_2f4490;
        case 0x2f4494u: goto label_2f4494;
        case 0x2f4498u: goto label_2f4498;
        case 0x2f449cu: goto label_2f449c;
        case 0x2f44a0u: goto label_2f44a0;
        case 0x2f44a4u: goto label_2f44a4;
        case 0x2f44a8u: goto label_2f44a8;
        case 0x2f44acu: goto label_2f44ac;
        case 0x2f44b0u: goto label_2f44b0;
        case 0x2f44b4u: goto label_2f44b4;
        case 0x2f44b8u: goto label_2f44b8;
        case 0x2f44bcu: goto label_2f44bc;
        case 0x2f44c0u: goto label_2f44c0;
        case 0x2f44c4u: goto label_2f44c4;
        case 0x2f44c8u: goto label_2f44c8;
        case 0x2f44ccu: goto label_2f44cc;
        case 0x2f44d0u: goto label_2f44d0;
        case 0x2f44d4u: goto label_2f44d4;
        case 0x2f44d8u: goto label_2f44d8;
        case 0x2f44dcu: goto label_2f44dc;
        case 0x2f44e0u: goto label_2f44e0;
        case 0x2f44e4u: goto label_2f44e4;
        case 0x2f44e8u: goto label_2f44e8;
        case 0x2f44ecu: goto label_2f44ec;
        case 0x2f44f0u: goto label_2f44f0;
        case 0x2f44f4u: goto label_2f44f4;
        case 0x2f44f8u: goto label_2f44f8;
        case 0x2f44fcu: goto label_2f44fc;
        case 0x2f4500u: goto label_2f4500;
        case 0x2f4504u: goto label_2f4504;
        case 0x2f4508u: goto label_2f4508;
        case 0x2f450cu: goto label_2f450c;
        case 0x2f4510u: goto label_2f4510;
        case 0x2f4514u: goto label_2f4514;
        case 0x2f4518u: goto label_2f4518;
        case 0x2f451cu: goto label_2f451c;
        case 0x2f4520u: goto label_2f4520;
        case 0x2f4524u: goto label_2f4524;
        case 0x2f4528u: goto label_2f4528;
        case 0x2f452cu: goto label_2f452c;
        case 0x2f4530u: goto label_2f4530;
        case 0x2f4534u: goto label_2f4534;
        case 0x2f4538u: goto label_2f4538;
        case 0x2f453cu: goto label_2f453c;
        case 0x2f4540u: goto label_2f4540;
        case 0x2f4544u: goto label_2f4544;
        case 0x2f4548u: goto label_2f4548;
        case 0x2f454cu: goto label_2f454c;
        case 0x2f4550u: goto label_2f4550;
        case 0x2f4554u: goto label_2f4554;
        case 0x2f4558u: goto label_2f4558;
        case 0x2f455cu: goto label_2f455c;
        case 0x2f4560u: goto label_2f4560;
        case 0x2f4564u: goto label_2f4564;
        case 0x2f4568u: goto label_2f4568;
        case 0x2f456cu: goto label_2f456c;
        case 0x2f4570u: goto label_2f4570;
        case 0x2f4574u: goto label_2f4574;
        case 0x2f4578u: goto label_2f4578;
        case 0x2f457cu: goto label_2f457c;
        case 0x2f4580u: goto label_2f4580;
        case 0x2f4584u: goto label_2f4584;
        case 0x2f4588u: goto label_2f4588;
        case 0x2f458cu: goto label_2f458c;
        case 0x2f4590u: goto label_2f4590;
        case 0x2f4594u: goto label_2f4594;
        case 0x2f4598u: goto label_2f4598;
        case 0x2f459cu: goto label_2f459c;
        case 0x2f45a0u: goto label_2f45a0;
        case 0x2f45a4u: goto label_2f45a4;
        case 0x2f45a8u: goto label_2f45a8;
        case 0x2f45acu: goto label_2f45ac;
        case 0x2f45b0u: goto label_2f45b0;
        case 0x2f45b4u: goto label_2f45b4;
        case 0x2f45b8u: goto label_2f45b8;
        case 0x2f45bcu: goto label_2f45bc;
        case 0x2f45c0u: goto label_2f45c0;
        case 0x2f45c4u: goto label_2f45c4;
        case 0x2f45c8u: goto label_2f45c8;
        case 0x2f45ccu: goto label_2f45cc;
        case 0x2f45d0u: goto label_2f45d0;
        case 0x2f45d4u: goto label_2f45d4;
        case 0x2f45d8u: goto label_2f45d8;
        case 0x2f45dcu: goto label_2f45dc;
        case 0x2f45e0u: goto label_2f45e0;
        case 0x2f45e4u: goto label_2f45e4;
        case 0x2f45e8u: goto label_2f45e8;
        case 0x2f45ecu: goto label_2f45ec;
        case 0x2f45f0u: goto label_2f45f0;
        case 0x2f45f4u: goto label_2f45f4;
        case 0x2f45f8u: goto label_2f45f8;
        case 0x2f45fcu: goto label_2f45fc;
        case 0x2f4600u: goto label_2f4600;
        case 0x2f4604u: goto label_2f4604;
        case 0x2f4608u: goto label_2f4608;
        case 0x2f460cu: goto label_2f460c;
        case 0x2f4610u: goto label_2f4610;
        case 0x2f4614u: goto label_2f4614;
        case 0x2f4618u: goto label_2f4618;
        case 0x2f461cu: goto label_2f461c;
        case 0x2f4620u: goto label_2f4620;
        case 0x2f4624u: goto label_2f4624;
        case 0x2f4628u: goto label_2f4628;
        case 0x2f462cu: goto label_2f462c;
        case 0x2f4630u: goto label_2f4630;
        case 0x2f4634u: goto label_2f4634;
        case 0x2f4638u: goto label_2f4638;
        case 0x2f463cu: goto label_2f463c;
        case 0x2f4640u: goto label_2f4640;
        case 0x2f4644u: goto label_2f4644;
        case 0x2f4648u: goto label_2f4648;
        case 0x2f464cu: goto label_2f464c;
        case 0x2f4650u: goto label_2f4650;
        case 0x2f4654u: goto label_2f4654;
        case 0x2f4658u: goto label_2f4658;
        case 0x2f465cu: goto label_2f465c;
        case 0x2f4660u: goto label_2f4660;
        case 0x2f4664u: goto label_2f4664;
        case 0x2f4668u: goto label_2f4668;
        case 0x2f466cu: goto label_2f466c;
        case 0x2f4670u: goto label_2f4670;
        case 0x2f4674u: goto label_2f4674;
        case 0x2f4678u: goto label_2f4678;
        case 0x2f467cu: goto label_2f467c;
        case 0x2f4680u: goto label_2f4680;
        case 0x2f4684u: goto label_2f4684;
        case 0x2f4688u: goto label_2f4688;
        case 0x2f468cu: goto label_2f468c;
        case 0x2f4690u: goto label_2f4690;
        case 0x2f4694u: goto label_2f4694;
        case 0x2f4698u: goto label_2f4698;
        case 0x2f469cu: goto label_2f469c;
        case 0x2f46a0u: goto label_2f46a0;
        case 0x2f46a4u: goto label_2f46a4;
        case 0x2f46a8u: goto label_2f46a8;
        case 0x2f46acu: goto label_2f46ac;
        case 0x2f46b0u: goto label_2f46b0;
        case 0x2f46b4u: goto label_2f46b4;
        case 0x2f46b8u: goto label_2f46b8;
        case 0x2f46bcu: goto label_2f46bc;
        case 0x2f46c0u: goto label_2f46c0;
        case 0x2f46c4u: goto label_2f46c4;
        case 0x2f46c8u: goto label_2f46c8;
        case 0x2f46ccu: goto label_2f46cc;
        case 0x2f46d0u: goto label_2f46d0;
        case 0x2f46d4u: goto label_2f46d4;
        case 0x2f46d8u: goto label_2f46d8;
        case 0x2f46dcu: goto label_2f46dc;
        case 0x2f46e0u: goto label_2f46e0;
        case 0x2f46e4u: goto label_2f46e4;
        case 0x2f46e8u: goto label_2f46e8;
        case 0x2f46ecu: goto label_2f46ec;
        case 0x2f46f0u: goto label_2f46f0;
        case 0x2f46f4u: goto label_2f46f4;
        case 0x2f46f8u: goto label_2f46f8;
        case 0x2f46fcu: goto label_2f46fc;
        case 0x2f4700u: goto label_2f4700;
        case 0x2f4704u: goto label_2f4704;
        case 0x2f4708u: goto label_2f4708;
        case 0x2f470cu: goto label_2f470c;
        case 0x2f4710u: goto label_2f4710;
        case 0x2f4714u: goto label_2f4714;
        case 0x2f4718u: goto label_2f4718;
        case 0x2f471cu: goto label_2f471c;
        case 0x2f4720u: goto label_2f4720;
        case 0x2f4724u: goto label_2f4724;
        case 0x2f4728u: goto label_2f4728;
        case 0x2f472cu: goto label_2f472c;
        case 0x2f4730u: goto label_2f4730;
        case 0x2f4734u: goto label_2f4734;
        case 0x2f4738u: goto label_2f4738;
        case 0x2f473cu: goto label_2f473c;
        case 0x2f4740u: goto label_2f4740;
        case 0x2f4744u: goto label_2f4744;
        case 0x2f4748u: goto label_2f4748;
        case 0x2f474cu: goto label_2f474c;
        case 0x2f4750u: goto label_2f4750;
        case 0x2f4754u: goto label_2f4754;
        case 0x2f4758u: goto label_2f4758;
        case 0x2f475cu: goto label_2f475c;
        case 0x2f4760u: goto label_2f4760;
        case 0x2f4764u: goto label_2f4764;
        case 0x2f4768u: goto label_2f4768;
        case 0x2f476cu: goto label_2f476c;
        case 0x2f4770u: goto label_2f4770;
        case 0x2f4774u: goto label_2f4774;
        case 0x2f4778u: goto label_2f4778;
        case 0x2f477cu: goto label_2f477c;
        case 0x2f4780u: goto label_2f4780;
        case 0x2f4784u: goto label_2f4784;
        case 0x2f4788u: goto label_2f4788;
        case 0x2f478cu: goto label_2f478c;
        case 0x2f4790u: goto label_2f4790;
        case 0x2f4794u: goto label_2f4794;
        case 0x2f4798u: goto label_2f4798;
        case 0x2f479cu: goto label_2f479c;
        case 0x2f47a0u: goto label_2f47a0;
        case 0x2f47a4u: goto label_2f47a4;
        case 0x2f47a8u: goto label_2f47a8;
        case 0x2f47acu: goto label_2f47ac;
        case 0x2f47b0u: goto label_2f47b0;
        case 0x2f47b4u: goto label_2f47b4;
        case 0x2f47b8u: goto label_2f47b8;
        case 0x2f47bcu: goto label_2f47bc;
        case 0x2f47c0u: goto label_2f47c0;
        case 0x2f47c4u: goto label_2f47c4;
        case 0x2f47c8u: goto label_2f47c8;
        case 0x2f47ccu: goto label_2f47cc;
        case 0x2f47d0u: goto label_2f47d0;
        case 0x2f47d4u: goto label_2f47d4;
        case 0x2f47d8u: goto label_2f47d8;
        case 0x2f47dcu: goto label_2f47dc;
        case 0x2f47e0u: goto label_2f47e0;
        case 0x2f47e4u: goto label_2f47e4;
        case 0x2f47e8u: goto label_2f47e8;
        case 0x2f47ecu: goto label_2f47ec;
        case 0x2f47f0u: goto label_2f47f0;
        case 0x2f47f4u: goto label_2f47f4;
        case 0x2f47f8u: goto label_2f47f8;
        case 0x2f47fcu: goto label_2f47fc;
        case 0x2f4800u: goto label_2f4800;
        case 0x2f4804u: goto label_2f4804;
        case 0x2f4808u: goto label_2f4808;
        case 0x2f480cu: goto label_2f480c;
        case 0x2f4810u: goto label_2f4810;
        case 0x2f4814u: goto label_2f4814;
        case 0x2f4818u: goto label_2f4818;
        case 0x2f481cu: goto label_2f481c;
        case 0x2f4820u: goto label_2f4820;
        case 0x2f4824u: goto label_2f4824;
        case 0x2f4828u: goto label_2f4828;
        case 0x2f482cu: goto label_2f482c;
        case 0x2f4830u: goto label_2f4830;
        case 0x2f4834u: goto label_2f4834;
        case 0x2f4838u: goto label_2f4838;
        case 0x2f483cu: goto label_2f483c;
        case 0x2f4840u: goto label_2f4840;
        case 0x2f4844u: goto label_2f4844;
        case 0x2f4848u: goto label_2f4848;
        case 0x2f484cu: goto label_2f484c;
        case 0x2f4850u: goto label_2f4850;
        case 0x2f4854u: goto label_2f4854;
        case 0x2f4858u: goto label_2f4858;
        case 0x2f485cu: goto label_2f485c;
        case 0x2f4860u: goto label_2f4860;
        case 0x2f4864u: goto label_2f4864;
        case 0x2f4868u: goto label_2f4868;
        case 0x2f486cu: goto label_2f486c;
        case 0x2f4870u: goto label_2f4870;
        case 0x2f4874u: goto label_2f4874;
        case 0x2f4878u: goto label_2f4878;
        case 0x2f487cu: goto label_2f487c;
        case 0x2f4880u: goto label_2f4880;
        case 0x2f4884u: goto label_2f4884;
        case 0x2f4888u: goto label_2f4888;
        case 0x2f488cu: goto label_2f488c;
        case 0x2f4890u: goto label_2f4890;
        case 0x2f4894u: goto label_2f4894;
        case 0x2f4898u: goto label_2f4898;
        case 0x2f489cu: goto label_2f489c;
        case 0x2f48a0u: goto label_2f48a0;
        case 0x2f48a4u: goto label_2f48a4;
        default: break;
    }

    ctx->pc = 0x2f43e8u;

label_2f43e8:
    // 0x2f43e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f43e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2f43ec:
    // 0x2f43ec: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2f43ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2f43f0:
    // 0x2f43f0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2f43f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_2f43f4:
    // 0x2f43f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f43f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f43f8:
    // 0x2f43f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f43f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2f43fc:
    // 0x2f43fc: 0xc4a00040  lwc1        $f0, 0x40($a1)
    ctx->pc = 0x2f43fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f4400:
    // 0x2f4400: 0x8e250110  lw          $a1, 0x110($s1)
    ctx->pc = 0x2f4400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_2f4404:
    // 0x2f4404: 0xe62002e0  swc1        $f0, 0x2E0($s1)
    ctx->pc = 0x2f4404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 736), bits); }
label_2f4408:
    // 0x2f4408: 0x90a2012e  lbu         $v0, 0x12E($a1)
    ctx->pc = 0x2f4408u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 302)));
label_2f440c:
    // 0x2f440c: 0xae2202b4  sw          $v0, 0x2B4($s1)
    ctx->pc = 0x2f440cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 692), GPR_U32(ctx, 2));
label_2f4410:
    // 0x2f4410: 0x80a3018e  lb          $v1, 0x18E($a1)
    ctx->pc = 0x2f4410u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 398)));
label_2f4414:
    // 0x2f4414: 0xae2302b8  sw          $v1, 0x2B8($s1)
    ctx->pc = 0x2f4414u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 696), GPR_U32(ctx, 3));
label_2f4418:
    // 0x2f4418: 0x90a2018f  lbu         $v0, 0x18F($a1)
    ctx->pc = 0x2f4418u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 399)));
label_2f441c:
    // 0x2f441c: 0xc0bd0a4  jal         func_2F4290
label_2f4420:
    if (ctx->pc == 0x2F4420u) {
        ctx->pc = 0x2F4420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F441Cu;
        // 0x2f4420: 0xa22202dc  sb          $v0, 0x2DC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 732), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4424u;
        goto label_2f4424;
    }
    ctx->pc = 0x2F441Cu;
    SET_GPR_U32(ctx, 31, 0x2F4424u);
    ctx->pc = 0x2F4420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F441Cu;
    // 0x2f4420: 0xa22202dc  sb          $v0, 0x2DC($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 732), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4290u, 0x2F441Cu, 0x2F4424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4424u;
label_2f4424:
    // 0x2f4424: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_2f4428:
    if (ctx->pc == 0x2F4428u) {
        ctx->pc = 0x2F4428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4424u;
        // 0x2f4428: 0x8e22011c  lw          $v0, 0x11C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F442Cu;
        goto label_2f442c;
    }
    ctx->pc = 0x2F4424u;
    {
        const bool branch_taken_0x2f4424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f4424) {
            ctx->pc = 0x2F4428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4424u;
            // 0x2f4428: 0x8e22011c  lw          $v0, 0x11C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4434u;
            goto label_2f4434;
        }
    }
    ctx->pc = 0x2F442Cu;
label_2f442c:
    // 0x2f442c: 0x10000118  b           . + 4 + (0x118 << 2)
label_2f4430:
    if (ctx->pc == 0x2F4430u) {
        ctx->pc = 0x2F4430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F442Cu;
        // 0x2f4430: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4434u;
        goto label_2f4434;
    }
    ctx->pc = 0x2F442Cu;
    {
        const bool branch_taken_0x2f442c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F442Cu;
        // 0x2f4430: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f442c) {
            ctx->pc = 0x2F4890u;
            goto label_2f4890;
        }
    }
    ctx->pc = 0x2F4434u;
label_2f4434:
    // 0x2f4434: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x2f4434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
label_2f4438:
    // 0x2f4438: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2f4438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2f443c:
    // 0x2f443c: 0x8e3002b0  lw          $s0, 0x2B0($s1)
    ctx->pc = 0x2f443cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2f4440:
    // 0x2f4440: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f4440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f4444:
    // 0x2f4444: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f4444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f4448:
    // 0x2f4448: 0xae22011c  sw          $v0, 0x11C($s1)
    ctx->pc = 0x2f4448u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 2));
label_2f444c:
    // 0x2f444c: 0xc0ad858  jal         func_2B6160
label_2f4450:
    if (ctx->pc == 0x2F4450u) {
        ctx->pc = 0x2F4450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F444Cu;
        // 0x2f4450: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4454u;
        goto label_2f4454;
    }
    ctx->pc = 0x2F444Cu;
    SET_GPR_U32(ctx, 31, 0x2F4454u);
    ctx->pc = 0x2F4450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F444Cu;
    // 0x2f4450: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2F444Cu, 0x2F4454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4454u;
label_2f4454:
    // 0x2f4454: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x2f4454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_2f4458:
    // 0x2f4458: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
label_2f445c:
    if (ctx->pc == 0x2F445Cu) {
        ctx->pc = 0x2F445Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4458u;
        // 0x2f445c: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4460u;
        goto label_2f4460;
    }
    ctx->pc = 0x2F4458u;
    {
        const bool branch_taken_0x2f4458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x2F445Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4458u;
        // 0x2f445c: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4458) {
            ctx->pc = 0x2F4474u;
            goto label_2f4474;
        }
    }
    ctx->pc = 0x2F4460u;
label_2f4460:
    // 0x2f4460: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2f4460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2f4464:
    // 0x2f4464: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2f4464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f4468:
    // 0x2f4468: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2f4468u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2f446c:
    // 0x2f446c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2f446cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f4470:
    // 0x2f4470: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2f4470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2f4474:
    // 0x2f4474: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f4474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f4478:
    // 0x2f4478: 0xc0ad8b8  jal         func_2B62E0
label_2f447c:
    if (ctx->pc == 0x2F447Cu) {
        ctx->pc = 0x2F447Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4478u;
        // 0x2f447c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4480u;
        goto label_2f4480;
    }
    ctx->pc = 0x2F4478u;
    SET_GPR_U32(ctx, 31, 0x2F4480u);
    ctx->pc = 0x2F447Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4478u;
    // 0x2f447c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B62E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B62E0u, 0x2F4478u, 0x2F4480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4480u;
label_2f4480:
    // 0x2f4480: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2f4480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f4484:
    // 0x2f4484: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f4484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f4488:
    // 0x2f4488: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f4488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f448c:
    // 0x2f448c: 0xc0ad876  jal         func_2B61D8
label_2f4490:
    if (ctx->pc == 0x2F4490u) {
        ctx->pc = 0x2F4490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F448Cu;
        // 0x2f4490: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4494u;
        goto label_2f4494;
    }
    ctx->pc = 0x2F448Cu;
    SET_GPR_U32(ctx, 31, 0x2F4494u);
    ctx->pc = 0x2F4490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F448Cu;
    // 0x2f4490: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B61D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B61D8u, 0x2F448Cu, 0x2F4494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4494u;
label_2f4494:
    // 0x2f4494: 0x8e2302b0  lw          $v1, 0x2B0($s1)
    ctx->pc = 0x2f4494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2f4498:
    // 0x2f4498: 0x24620110  addiu       $v0, $v1, 0x110
    ctx->pc = 0x2f4498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
label_2f449c:
    // 0x2f449c: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
label_2f44a0:
    if (ctx->pc == 0x2F44A0u) {
        ctx->pc = 0x2F44A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F449Cu;
        // 0x2f44a0: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F44A4u;
        goto label_2f44a4;
    }
    ctx->pc = 0x2F449Cu;
    {
        const bool branch_taken_0x2f449c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x2F44A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F449Cu;
        // 0x2f44a0: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f449c) {
            ctx->pc = 0x2F44B8u;
            goto label_2f44b8;
        }
    }
    ctx->pc = 0x2F44A4u;
label_2f44a4:
    // 0x2f44a4: 0xe4600110  swc1        $f0, 0x110($v1)
    ctx->pc = 0x2f44a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 272), bits); }
label_2f44a8:
    // 0x2f44a8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2f44a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f44ac:
    // 0x2f44ac: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2f44acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2f44b0:
    // 0x2f44b0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2f44b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f44b4:
    // 0x2f44b4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2f44b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2f44b8:
    // 0x2f44b8: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2f44b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2f44bc:
    // 0x2f44bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f44bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f44c0:
    // 0x2f44c0: 0xc0ad834  jal         func_2B60D0
label_2f44c4:
    if (ctx->pc == 0x2F44C4u) {
        ctx->pc = 0x2F44C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F44C0u;
        // 0x2f44c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F44C8u;
        goto label_2f44c8;
    }
    ctx->pc = 0x2F44C0u;
    SET_GPR_U32(ctx, 31, 0x2F44C8u);
    ctx->pc = 0x2F44C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F44C0u;
    // 0x2f44c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B60D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B60D0u, 0x2F44C0u, 0x2F44C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F44C8u;
label_2f44c8:
    // 0x2f44c8: 0x8e2302b0  lw          $v1, 0x2B0($s1)
    ctx->pc = 0x2f44c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2f44cc:
    // 0x2f44cc: 0x24620100  addiu       $v0, $v1, 0x100
    ctx->pc = 0x2f44ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
label_2f44d0:
    // 0x2f44d0: 0x10500006  beq         $v0, $s0, . + 4 + (0x6 << 2)
label_2f44d4:
    if (ctx->pc == 0x2F44D4u) {
        ctx->pc = 0x2F44D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F44D0u;
        // 0x2f44d4: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F44D8u;
        goto label_2f44d8;
    }
    ctx->pc = 0x2F44D0u;
    {
        const bool branch_taken_0x2f44d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2F44D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F44D0u;
        // 0x2f44d4: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f44d0) {
            ctx->pc = 0x2F44ECu;
            goto label_2f44ec;
        }
    }
    ctx->pc = 0x2F44D8u;
label_2f44d8:
    // 0x2f44d8: 0xe4600100  swc1        $f0, 0x100($v1)
    ctx->pc = 0x2f44d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 256), bits); }
label_2f44dc:
    // 0x2f44dc: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2f44dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f44e0:
    // 0x2f44e0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2f44e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2f44e4:
    // 0x2f44e4: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2f44e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f44e8:
    // 0x2f44e8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2f44e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2f44ec:
    // 0x2f44ec: 0x8e2202b0  lw          $v0, 0x2B0($s1)
    ctx->pc = 0x2f44ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2f44f0:
    // 0x2f44f0: 0xc6200188  lwc1        $f0, 0x188($s1)
    ctx->pc = 0x2f44f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f44f4:
    // 0x2f44f4: 0xe4400240  swc1        $f0, 0x240($v0)
    ctx->pc = 0x2f44f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 576), bits); }
label_2f44f8:
    // 0x2f44f8: 0x8e2302b0  lw          $v1, 0x2B0($s1)
    ctx->pc = 0x2f44f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2f44fc:
    // 0x2f44fc: 0xc620018c  lwc1        $f0, 0x18C($s1)
    ctx->pc = 0x2f44fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f4500:
    // 0x2f4500: 0xe4600244  swc1        $f0, 0x244($v1)
    ctx->pc = 0x2f4500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 580), bits); }
label_2f4504:
    // 0x2f4504: 0x8e2202b0  lw          $v0, 0x2B0($s1)
    ctx->pc = 0x2f4504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2f4508:
    // 0x2f4508: 0xc6200190  lwc1        $f0, 0x190($s1)
    ctx->pc = 0x2f4508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f450c:
    // 0x2f450c: 0xe4400248  swc1        $f0, 0x248($v0)
    ctx->pc = 0x2f450cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 584), bits); }
label_2f4510:
    // 0x2f4510: 0x8e2302b0  lw          $v1, 0x2B0($s1)
    ctx->pc = 0x2f4510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2f4514:
    // 0x2f4514: 0xc6200194  lwc1        $f0, 0x194($s1)
    ctx->pc = 0x2f4514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f4518:
    // 0x2f4518: 0xe460024c  swc1        $f0, 0x24C($v1)
    ctx->pc = 0x2f4518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 588), bits); }
label_2f451c:
    // 0x2f451c: 0x92270247  lbu         $a3, 0x247($s1)
    ctx->pc = 0x2f451cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 583)));
label_2f4520:
    // 0x2f4520: 0x2ce20009  sltiu       $v0, $a3, 0x9
    ctx->pc = 0x2f4520u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_2f4524:
    // 0x2f4524: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_2f4528:
    if (ctx->pc == 0x2F4528u) {
        ctx->pc = 0x2F4528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4524u;
        // 0x2f4528: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F452Cu;
        goto label_2f452c;
    }
    ctx->pc = 0x2F4524u;
    {
        const bool branch_taken_0x2f4524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4524u;
        // 0x2f4528: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4524) {
            ctx->pc = 0x2F45F8u;
            goto label_2f45f8;
        }
    }
    ctx->pc = 0x2F452Cu;
label_2f452c:
    // 0x2f452c: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x2f452cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_2f4530:
    // 0x2f4530: 0x2442f1a0  addiu       $v0, $v0, -0xE60
    ctx->pc = 0x2f4530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963616));
label_2f4534:
    // 0x2f4534: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f4534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2f4538:
    // 0x2f4538: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2f4538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f453c:
    // 0x2f453c: 0x800008  jr          $a0
label_2f4540:
    if (ctx->pc == 0x2F4540u) {
        ctx->pc = 0x2F4544u;
        goto label_2f4544;
    }
    ctx->pc = 0x2F453Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F4544u: goto label_2f4544;
            case 0x2F4558u: goto label_2f4558;
            case 0x2F456Cu: goto label_2f456c;
            case 0x2F4580u: goto label_2f4580;
            case 0x2F4594u: goto label_2f4594;
            case 0x2F45A8u: goto label_2f45a8;
            case 0x2F45BCu: goto label_2f45bc;
            case 0x2F45D0u: goto label_2f45d0;
            case 0x2F45E4u: goto label_2f45e4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F453Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2F4544u;
label_2f4544:
    // 0x2f4544: 0x34108000  ori         $s0, $zero, 0x8000
    ctx->pc = 0x2f4544u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2f4548:
    // 0x2f4548: 0x108638  dsll        $s0, $s0, 24
    ctx->pc = 0x2f4548u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 24);
label_2f454c:
    // 0x2f454c: 0x36100044  ori         $s0, $s0, 0x44
    ctx->pc = 0x2f454cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)68);
label_2f4550:
    // 0x2f4550: 0x10000030  b           . + 4 + (0x30 << 2)
label_2f4554:
    if (ctx->pc == 0x2F4554u) {
        ctx->pc = 0x2F4554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4550u;
        // 0x2f4554: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4558u;
        goto label_2f4558;
    }
    ctx->pc = 0x2F4550u;
    {
        const bool branch_taken_0x2f4550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4550u;
        // 0x2f4554: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4550) {
            ctx->pc = 0x2F4614u;
            goto label_2f4614;
        }
    }
    ctx->pc = 0x2F4558u;
label_2f4558:
    // 0x2f4558: 0x34108000  ori         $s0, $zero, 0x8000
    ctx->pc = 0x2f4558u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2f455c:
    // 0x2f455c: 0x108638  dsll        $s0, $s0, 24
    ctx->pc = 0x2f455cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 24);
label_2f4560:
    // 0x2f4560: 0x36100048  ori         $s0, $s0, 0x48
    ctx->pc = 0x2f4560u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)72);
label_2f4564:
    // 0x2f4564: 0x1000002b  b           . + 4 + (0x2B << 2)
label_2f4568:
    if (ctx->pc == 0x2F4568u) {
        ctx->pc = 0x2F4568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4564u;
        // 0x2f4568: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F456Cu;
        goto label_2f456c;
    }
    ctx->pc = 0x2F4564u;
    {
        const bool branch_taken_0x2f4564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4564u;
        // 0x2f4568: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4564) {
            ctx->pc = 0x2F4614u;
            goto label_2f4614;
        }
    }
    ctx->pc = 0x2F456Cu;
label_2f456c:
    // 0x2f456c: 0x34108000  ori         $s0, $zero, 0x8000
    ctx->pc = 0x2f456cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2f4570:
    // 0x2f4570: 0x108638  dsll        $s0, $s0, 24
    ctx->pc = 0x2f4570u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 24);
label_2f4574:
    // 0x2f4574: 0x361000a1  ori         $s0, $s0, 0xA1
    ctx->pc = 0x2f4574u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)161);
label_2f4578:
    // 0x2f4578: 0x10000026  b           . + 4 + (0x26 << 2)
label_2f457c:
    if (ctx->pc == 0x2F457Cu) {
        ctx->pc = 0x2F457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4578u;
        // 0x2f457c: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4580u;
        goto label_2f4580;
    }
    ctx->pc = 0x2F4578u;
    {
        const bool branch_taken_0x2f4578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4578u;
        // 0x2f457c: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4578) {
            ctx->pc = 0x2F4614u;
            goto label_2f4614;
        }
    }
    ctx->pc = 0x2F4580u;
label_2f4580:
    // 0x2f4580: 0x34108000  ori         $s0, $zero, 0x8000
    ctx->pc = 0x2f4580u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2f4584:
    // 0x2f4584: 0x108638  dsll        $s0, $s0, 24
    ctx->pc = 0x2f4584u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 24);
label_2f4588:
    // 0x2f4588: 0x36100041  ori         $s0, $s0, 0x41
    ctx->pc = 0x2f4588u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65);
label_2f458c:
    // 0x2f458c: 0x10000021  b           . + 4 + (0x21 << 2)
label_2f4590:
    if (ctx->pc == 0x2F4590u) {
        ctx->pc = 0x2F4590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F458Cu;
        // 0x2f4590: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4594u;
        goto label_2f4594;
    }
    ctx->pc = 0x2F458Cu;
    {
        const bool branch_taken_0x2f458c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F458Cu;
        // 0x2f4590: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f458c) {
            ctx->pc = 0x2F4614u;
            goto label_2f4614;
        }
    }
    ctx->pc = 0x2F4594u;
label_2f4594:
    // 0x2f4594: 0x34108000  ori         $s0, $zero, 0x8000
    ctx->pc = 0x2f4594u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2f4598:
    // 0x2f4598: 0x108638  dsll        $s0, $s0, 24
    ctx->pc = 0x2f4598u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 24);
label_2f459c:
    // 0x2f459c: 0x36100068  ori         $s0, $s0, 0x68
    ctx->pc = 0x2f459cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)104);
label_2f45a0:
    // 0x2f45a0: 0x1000001c  b           . + 4 + (0x1C << 2)
label_2f45a4:
    if (ctx->pc == 0x2F45A4u) {
        ctx->pc = 0x2F45A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45A0u;
        // 0x2f45a4: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F45A8u;
        goto label_2f45a8;
    }
    ctx->pc = 0x2F45A0u;
    {
        const bool branch_taken_0x2f45a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F45A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45A0u;
        // 0x2f45a4: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f45a0) {
            ctx->pc = 0x2F4614u;
            goto label_2f4614;
        }
    }
    ctx->pc = 0x2F45A8u;
label_2f45a8:
    // 0x2f45a8: 0x34108000  ori         $s0, $zero, 0x8000
    ctx->pc = 0x2f45a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2f45ac:
    // 0x2f45ac: 0x108638  dsll        $s0, $s0, 24
    ctx->pc = 0x2f45acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 24);
label_2f45b0:
    // 0x2f45b0: 0x361000a4  ori         $s0, $s0, 0xA4
    ctx->pc = 0x2f45b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)164);
label_2f45b4:
    // 0x2f45b4: 0x10000017  b           . + 4 + (0x17 << 2)
label_2f45b8:
    if (ctx->pc == 0x2F45B8u) {
        ctx->pc = 0x2F45B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45B4u;
        // 0x2f45b8: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F45BCu;
        goto label_2f45bc;
    }
    ctx->pc = 0x2F45B4u;
    {
        const bool branch_taken_0x2f45b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F45B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45B4u;
        // 0x2f45b8: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f45b4) {
            ctx->pc = 0x2F4614u;
            goto label_2f4614;
        }
    }
    ctx->pc = 0x2F45BCu;
label_2f45bc:
    // 0x2f45bc: 0x34108000  ori         $s0, $zero, 0x8000
    ctx->pc = 0x2f45bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2f45c0:
    // 0x2f45c0: 0x108638  dsll        $s0, $s0, 24
    ctx->pc = 0x2f45c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 24);
label_2f45c4:
    // 0x2f45c4: 0x36100009  ori         $s0, $s0, 0x9
    ctx->pc = 0x2f45c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)9);
label_2f45c8:
    // 0x2f45c8: 0x10000012  b           . + 4 + (0x12 << 2)
label_2f45cc:
    if (ctx->pc == 0x2F45CCu) {
        ctx->pc = 0x2F45CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45C8u;
        // 0x2f45cc: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F45D0u;
        goto label_2f45d0;
    }
    ctx->pc = 0x2F45C8u;
    {
        const bool branch_taken_0x2f45c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F45CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45C8u;
        // 0x2f45cc: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f45c8) {
            ctx->pc = 0x2F4614u;
            goto label_2f4614;
        }
    }
    ctx->pc = 0x2F45D0u;
label_2f45d0:
    // 0x2f45d0: 0x34108000  ori         $s0, $zero, 0x8000
    ctx->pc = 0x2f45d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2f45d4:
    // 0x2f45d4: 0x108638  dsll        $s0, $s0, 24
    ctx->pc = 0x2f45d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 24);
label_2f45d8:
    // 0x2f45d8: 0x36100042  ori         $s0, $s0, 0x42
    ctx->pc = 0x2f45d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)66);
label_2f45dc:
    // 0x2f45dc: 0x1000000d  b           . + 4 + (0xD << 2)
label_2f45e0:
    if (ctx->pc == 0x2F45E0u) {
        ctx->pc = 0x2F45E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45DCu;
        // 0x2f45e0: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F45E4u;
        goto label_2f45e4;
    }
    ctx->pc = 0x2F45DCu;
    {
        const bool branch_taken_0x2f45dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F45E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45DCu;
        // 0x2f45e0: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f45dc) {
            ctx->pc = 0x2F4614u;
            goto label_2f4614;
        }
    }
    ctx->pc = 0x2F45E4u;
label_2f45e4:
    // 0x2f45e4: 0x34108000  ori         $s0, $zero, 0x8000
    ctx->pc = 0x2f45e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2f45e8:
    // 0x2f45e8: 0x108638  dsll        $s0, $s0, 24
    ctx->pc = 0x2f45e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 24);
label_2f45ec:
    // 0x2f45ec: 0x36100006  ori         $s0, $s0, 0x6
    ctx->pc = 0x2f45ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)6);
label_2f45f0:
    // 0x2f45f0: 0x10000008  b           . + 4 + (0x8 << 2)
label_2f45f4:
    if (ctx->pc == 0x2F45F4u) {
        ctx->pc = 0x2F45F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45F0u;
        // 0x2f45f4: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F45F8u;
        goto label_2f45f8;
    }
    ctx->pc = 0x2F45F0u;
    {
        const bool branch_taken_0x2f45f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F45F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45F0u;
        // 0x2f45f4: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f45f0) {
            ctx->pc = 0x2F4614u;
            goto label_2f4614;
        }
    }
    ctx->pc = 0x2F45F8u;
label_2f45f8:
    // 0x2f45f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f45f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f45fc:
    // 0x2f45fc: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2f45fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_2f4600:
    // 0x2f4600: 0x90860102  lbu         $a2, 0x102($a0)
    ctx->pc = 0x2f4600u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 258)));
label_2f4604:
    // 0x2f4604: 0xc0b67da  jal         func_2D9F68
label_2f4608:
    if (ctx->pc == 0x2F4608u) {
        ctx->pc = 0x2F4608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4604u;
        // 0x2f4608: 0x24a5f150  addiu       $a1, $a1, -0xEB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963536));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F460Cu;
        goto label_2f460c;
    }
    ctx->pc = 0x2F4604u;
    SET_GPR_U32(ctx, 31, 0x2F460Cu);
    ctx->pc = 0x2F4608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4604u;
    // 0x2f4608: 0x24a5f150  addiu       $a1, $a1, -0xEB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9F68u, 0x2F4604u, 0x2F460Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F460Cu;
label_2f460c:
    // 0x2f460c: 0x100000a0  b           . + 4 + (0xA0 << 2)
label_2f4610:
    if (ctx->pc == 0x2F4610u) {
        ctx->pc = 0x2F4610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F460Cu;
        // 0x2f4610: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4614u;
        goto label_2f4614;
    }
    ctx->pc = 0x2F460Cu;
    {
        const bool branch_taken_0x2f460c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F460Cu;
        // 0x2f4610: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f460c) {
            ctx->pc = 0x2F4890u;
            goto label_2f4890;
        }
    }
    ctx->pc = 0x2F4614u;
label_2f4614:
    // 0x2f4614: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f4614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f4618:
    // 0x2f4618: 0xc0535c0  jal         func_14D700
label_2f461c:
    if (ctx->pc == 0x2F461Cu) {
        ctx->pc = 0x2F461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4618u;
        // 0x2f461c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4620u;
        goto label_2f4620;
    }
    ctx->pc = 0x2F4618u;
    SET_GPR_U32(ctx, 31, 0x2F4620u);
    ctx->pc = 0x2F461Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4618u;
    // 0x2f461c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D700u, 0x2F4618u, 0x2F4620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4620u;
label_2f4620:
    // 0x2f4620: 0x8e2402b0  lw          $a0, 0x2B0($s1)
    ctx->pc = 0x2f4620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2f4624:
    // 0x2f4624: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f4624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f4628:
    // 0x2f4628: 0xc0535c0  jal         func_14D700
label_2f462c:
    if (ctx->pc == 0x2F462Cu) {
        ctx->pc = 0x2F462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4628u;
        // 0x2f462c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4630u;
        goto label_2f4630;
    }
    ctx->pc = 0x2F4628u;
    SET_GPR_U32(ctx, 31, 0x2F4630u);
    ctx->pc = 0x2F462Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4628u;
    // 0x2f462c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D700u, 0x2F4628u, 0x2F4630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4630u;
label_2f4630:
    // 0x2f4630: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x2f4630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
label_2f4634:
    // 0x2f4634: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x2f4634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_2f4638:
    // 0x2f4638: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f4638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f463c:
    // 0x2f463c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2f4640:
    if (ctx->pc == 0x2F4640u) {
        ctx->pc = 0x2F4640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F463Cu;
        // 0x2f4640: 0x8e23011c  lw          $v1, 0x11C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4644u;
        goto label_2f4644;
    }
    ctx->pc = 0x2F463Cu;
    {
        const bool branch_taken_0x2f463c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f463c) {
            ctx->pc = 0x2F4640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F463Cu;
            // 0x2f4640: 0x8e23011c  lw          $v1, 0x11C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4658u;
            goto label_2f4658;
        }
    }
    ctx->pc = 0x2F4644u;
label_2f4644:
    // 0x2f4644: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x2f4644u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
label_2f4648:
    // 0x2f4648: 0x34a51011  ori         $a1, $a1, 0x1011
    ctx->pc = 0x2f4648u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4113);
label_2f464c:
    // 0x2f464c: 0xc0539de  jal         func_14E778
label_2f4650:
    if (ctx->pc == 0x2F4650u) {
        ctx->pc = 0x2F4650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F464Cu;
        // 0x2f4650: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4654u;
        goto label_2f4654;
    }
    ctx->pc = 0x2F464Cu;
    SET_GPR_U32(ctx, 31, 0x2F4654u);
    ctx->pc = 0x2F4650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F464Cu;
    // 0x2f4650: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E778u, 0x2F464Cu, 0x2F4654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4654u;
label_2f4654:
    // 0x2f4654: 0x8e23011c  lw          $v1, 0x11C($s1)
    ctx->pc = 0x2f4654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
label_2f4658:
    // 0x2f4658: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x2f4658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
label_2f465c:
    // 0x2f465c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2f4660:
    if (ctx->pc == 0x2F4660u) {
        ctx->pc = 0x2F4660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F465Cu;
        // 0x2f4660: 0x30624000  andi        $v0, $v1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4664u;
        goto label_2f4664;
    }
    ctx->pc = 0x2F465Cu;
    {
        const bool branch_taken_0x2f465c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F465Cu;
        // 0x2f4660: 0x30624000  andi        $v0, $v1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f465c) {
            ctx->pc = 0x2F4684u;
            goto label_2f4684;
        }
    }
    ctx->pc = 0x2F4664u;
label_2f4664:
    // 0x2f4664: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2f4668:
    if (ctx->pc == 0x2F4668u) {
        ctx->pc = 0x2F4668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4664u;
        // 0x2f4668: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F466Cu;
        goto label_2f466c;
    }
    ctx->pc = 0x2F4664u;
    {
        const bool branch_taken_0x2f4664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4664u;
        // 0x2f4668: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4664) {
            ctx->pc = 0x2F4678u;
            goto label_2f4678;
        }
    }
    ctx->pc = 0x2F466Cu;
label_2f466c:
    // 0x2f466c: 0x8e2202b0  lw          $v0, 0x2B0($s1)
    ctx->pc = 0x2f466cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2f4670:
    // 0x2f4670: 0x10000008  b           . + 4 + (0x8 << 2)
label_2f4674:
    if (ctx->pc == 0x2F4674u) {
        ctx->pc = 0x2F4674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4670u;
        // 0x2f4674: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4678u;
        goto label_2f4678;
    }
    ctx->pc = 0x2F4670u;
    {
        const bool branch_taken_0x2f4670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4670u;
        // 0x2f4674: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4670) {
            ctx->pc = 0x2F4694u;
            goto label_2f4694;
        }
    }
    ctx->pc = 0x2F4678u;
label_2f4678:
    // 0x2f4678: 0x8e2202b0  lw          $v0, 0x2B0($s1)
    ctx->pc = 0x2f4678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2f467c:
    // 0x2f467c: 0x10000005  b           . + 4 + (0x5 << 2)
label_2f4680:
    if (ctx->pc == 0x2F4680u) {
        ctx->pc = 0x2F4680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F467Cu;
        // 0x2f4680: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4684u;
        goto label_2f4684;
    }
    ctx->pc = 0x2F467Cu;
    {
        const bool branch_taken_0x2f467c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F467Cu;
        // 0x2f4680: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f467c) {
            ctx->pc = 0x2F4694u;
            goto label_2f4694;
        }
    }
    ctx->pc = 0x2F4684u;
label_2f4684:
    // 0x2f4684: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2f4688:
    if (ctx->pc == 0x2F4688u) {
        ctx->pc = 0x2F4688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4684u;
        // 0x2f4688: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F468Cu;
        goto label_2f468c;
    }
    ctx->pc = 0x2F4684u;
    {
        const bool branch_taken_0x2f4684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4684u;
        // 0x2f4688: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4684) {
            ctx->pc = 0x2F469Cu;
            goto label_2f469c;
        }
    }
    ctx->pc = 0x2F468Cu;
label_2f468c:
    // 0x2f468c: 0x8e2202b0  lw          $v0, 0x2B0($s1)
    ctx->pc = 0x2f468cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2f4690:
    // 0x2f4690: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2f4690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f4694:
    // 0x2f4694: 0xa44302ac  sh          $v1, 0x2AC($v0)
    ctx->pc = 0x2f4694u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 684), (uint16_t)GPR_U32(ctx, 3));
label_2f4698:
    // 0x2f4698: 0xac4402c0  sw          $a0, 0x2C0($v0)
    ctx->pc = 0x2f4698u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 704), GPR_U32(ctx, 4));
label_2f469c:
    // 0x2f469c: 0x8e2602b8  lw          $a2, 0x2B8($s1)
    ctx->pc = 0x2f469cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 696)));
label_2f46a0:
    // 0x2f46a0: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
label_2f46a4:
    if (ctx->pc == 0x2F46A4u) {
        ctx->pc = 0x2F46A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F46A0u;
        // 0x2f46a4: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F46A8u;
        goto label_2f46a8;
    }
    ctx->pc = 0x2F46A0u;
    {
        const bool branch_taken_0x2f46a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F46A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F46A0u;
        // 0x2f46a4: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f46a0) {
            ctx->pc = 0x2F46ECu;
            goto label_2f46ec;
        }
    }
    ctx->pc = 0x2F46A8u;
label_2f46a8:
    // 0x2f46a8: 0x8e2502b4  lw          $a1, 0x2B4($s1)
    ctx->pc = 0x2f46a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 692)));
label_2f46ac:
    // 0x2f46ac: 0x24841dc8  addiu       $a0, $a0, 0x1DC8
    ctx->pc = 0x2f46acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7624));
label_2f46b0:
    // 0x2f46b0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2f46b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_2f46b4:
    // 0x2f46b4: 0xc0c1b32  jal         func_306CC8
label_2f46b8:
    if (ctx->pc == 0x2F46B8u) {
        ctx->pc = 0x2F46B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F46B4u;
        // 0x2f46b8: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F46BCu;
        goto label_2f46bc;
    }
    ctx->pc = 0x2F46B4u;
    SET_GPR_U32(ctx, 31, 0x2F46BCu);
    ctx->pc = 0x2F46B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F46B4u;
    // 0x2f46b8: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306CC8u, 0x2F46B4u, 0x2F46BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F46BCu;
label_2f46bc:
    // 0x2f46bc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_2f46c0:
    if (ctx->pc == 0x2F46C0u) {
        ctx->pc = 0x2F46C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F46BCu;
        // 0x2f46c0: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F46C4u;
        goto label_2f46c4;
    }
    ctx->pc = 0x2F46BCu;
    {
        const bool branch_taken_0x2f46bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f46bc) {
            ctx->pc = 0x2F46C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F46BCu;
            // 0x2f46c0: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F46D8u;
            goto label_2f46d8;
        }
    }
    ctx->pc = 0x2F46C4u;
label_2f46c4:
    // 0x2f46c4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2f46c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_2f46c8:
    // 0x2f46c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f46c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f46cc:
    // 0x2f46cc: 0xc0b67da  jal         func_2D9F68
label_2f46d0:
    if (ctx->pc == 0x2F46D0u) {
        ctx->pc = 0x2F46D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F46CCu;
        // 0x2f46d0: 0x24a5f178  addiu       $a1, $a1, -0xE88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F46D4u;
        goto label_2f46d4;
    }
    ctx->pc = 0x2F46CCu;
    SET_GPR_U32(ctx, 31, 0x2F46D4u);
    ctx->pc = 0x2F46D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F46CCu;
    // 0x2f46d0: 0x24a5f178  addiu       $a1, $a1, -0xE88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9F68u, 0x2F46CCu, 0x2F46D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F46D4u;
label_2f46d4:
    // 0x2f46d4: 0x8e2402b0  lw          $a0, 0x2B0($s1)
    ctx->pc = 0x2f46d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2f46d8:
    // 0x2f46d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f46d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f46dc:
    // 0x2f46dc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2f46dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2f46e0:
    // 0x2f46e0: 0xac8204d0  sw          $v0, 0x4D0($a0)
    ctx->pc = 0x2f46e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1232), GPR_U32(ctx, 2));
label_2f46e4:
    // 0x2f46e4: 0x8e2302b0  lw          $v1, 0x2B0($s1)
    ctx->pc = 0x2f46e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2f46e8:
    // 0x2f46e8: 0xa06504d4  sb          $a1, 0x4D4($v1)
    ctx->pc = 0x2f46e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1236), (uint8_t)GPR_U32(ctx, 5));
label_2f46ec:
    // 0x2f46ec: 0x8e2202b0  lw          $v0, 0x2B0($s1)
    ctx->pc = 0x2f46ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2f46f0:
    // 0x2f46f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f46f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f46f4:
    // 0x2f46f4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2f46f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2f46f8:
    // 0x2f46f8: 0x8c4204d0  lw          $v0, 0x4D0($v0)
    ctx->pc = 0x2f46f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1232)));
label_2f46fc:
    // 0x2f46fc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_2f4700:
    if (ctx->pc == 0x2F4700u) {
        ctx->pc = 0x2F4700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F46FCu;
        // 0x2f4700: 0x8e220110  lw          $v0, 0x110($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4704u;
        goto label_2f4704;
    }
    ctx->pc = 0x2F46FCu;
    {
        const bool branch_taken_0x2f46fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f46fc) {
            ctx->pc = 0x2F4700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F46FCu;
            // 0x2f4700: 0x8e220110  lw          $v0, 0x110($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F471Cu;
            goto label_2f471c;
        }
    }
    ctx->pc = 0x2F4704u;
label_2f4704:
    // 0x2f4704: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x2f4704u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_2f4708:
    // 0x2f4708: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f4708u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f470c:
    // 0x2f470c: 0x0  nop
    ctx->pc = 0x2f470cu;
    // NOP
label_2f4710:
    // 0x2f4710: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f4710u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2f4714:
    // 0x2f4714: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x2f4714u;
    ctx->f[3] = ps2FpuDivide(ctx->fcr31, ctx->f[3], ctx->f[0]);
label_2f4718:
    // 0x2f4718: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x2f4718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_2f471c:
    // 0x2f471c: 0x26240220  addiu       $a0, $s1, 0x220
    ctx->pc = 0x2f471cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
label_2f4720:
    // 0x2f4720: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2f4720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2f4724:
    // 0x2f4724: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2f4724u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2f4728:
    // 0x2f4728: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2f4728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2f472c:
    // 0x2f472c: 0xc440013c  lwc1        $f0, 0x13C($v0)
    ctx->pc = 0x2f472cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f4730:
    // 0x2f4730: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2f4730u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_2f4734:
    // 0x2f4734: 0xe62002c0  swc1        $f0, 0x2C0($s1)
    ctx->pc = 0x2f4734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 704), bits); }
label_2f4738:
    // 0x2f4738: 0xc4410140  lwc1        $f1, 0x140($v0)
    ctx->pc = 0x2f4738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f473c:
    // 0x2f473c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2f473cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_2f4740:
    // 0x2f4740: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2f4740u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_2f4744:
    // 0x2f4744: 0xe62102c4  swc1        $f1, 0x2C4($s1)
    ctx->pc = 0x2f4744u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 708), bits); }
label_2f4748:
    // 0x2f4748: 0xc4400144  lwc1        $f0, 0x144($v0)
    ctx->pc = 0x2f4748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f474c:
    // 0x2f474c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2f474cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_2f4750:
    // 0x2f4750: 0xe62002c8  swc1        $f0, 0x2C8($s1)
    ctx->pc = 0x2f4750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 712), bits); }
label_2f4754:
    // 0x2f4754: 0xc4410148  lwc1        $f1, 0x148($v0)
    ctx->pc = 0x2f4754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f4758:
    // 0x2f4758: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2f4758u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_2f475c:
    // 0x2f475c: 0xe62102cc  swc1        $f1, 0x2CC($s1)
    ctx->pc = 0x2f475cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 716), bits); }
label_2f4760:
    // 0x2f4760: 0xc440014c  lwc1        $f0, 0x14C($v0)
    ctx->pc = 0x2f4760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f4764:
    // 0x2f4764: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2f4764u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_2f4768:
    // 0x2f4768: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2f4768u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_2f476c:
    // 0x2f476c: 0xe62002d0  swc1        $f0, 0x2D0($s1)
    ctx->pc = 0x2f476cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 720), bits); }
label_2f4770:
    // 0x2f4770: 0xc4410150  lwc1        $f1, 0x150($v0)
    ctx->pc = 0x2f4770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f4774:
    // 0x2f4774: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2f4774u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_2f4778:
    // 0x2f4778: 0xc0c7442  jal         func_31D108
label_2f477c:
    if (ctx->pc == 0x2F477Cu) {
        ctx->pc = 0x2F477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4778u;
        // 0x2f477c: 0xe62102d4  swc1        $f1, 0x2D4($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 724), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4780u;
        goto label_2f4780;
    }
    ctx->pc = 0x2F4778u;
    SET_GPR_U32(ctx, 31, 0x2F4780u);
    ctx->pc = 0x2F477Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4778u;
    // 0x2f477c: 0xe62102d4  swc1        $f1, 0x2D4($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 724), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D108u, 0x2F4778u, 0x2F4780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4780u;
label_2f4780:
    // 0x2f4780: 0xc62102d4  lwc1        $f1, 0x2D4($s1)
    ctx->pc = 0x2f4780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f4784:
    // 0x2f4784: 0xc62302c0  lwc1        $f3, 0x2C0($s1)
    ctx->pc = 0x2f4784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2f4788:
    // 0x2f4788: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f4788u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f478c:
    // 0x2f478c: 0xc62202c4  lwc1        $f2, 0x2C4($s1)
    ctx->pc = 0x2f478cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f4790:
    // 0x2f4790: 0xc62002c8  lwc1        $f0, 0x2C8($s1)
    ctx->pc = 0x2f4790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f4794:
    // 0x2f4794: 0xc62402cc  lwc1        $f4, 0x2CC($s1)
    ctx->pc = 0x2f4794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2f4798:
    // 0x2f4798: 0xc62502d0  lwc1        $f5, 0x2D0($s1)
    ctx->pc = 0x2f4798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2f479c:
    // 0x2f479c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f479cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f47a0:
    // 0x2f47a0: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x2f47a0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_2f47a4:
    // 0x2f47a4: 0x8e2202b0  lw          $v0, 0x2B0($s1)
    ctx->pc = 0x2f47a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2f47a8:
    // 0x2f47a8: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x2f47a8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
label_2f47ac:
    // 0x2f47ac: 0xe62002d8  swc1        $f0, 0x2D8($s1)
    ctx->pc = 0x2f47acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 728), bits); }
label_2f47b0:
    // 0x2f47b0: 0xe62302c0  swc1        $f3, 0x2C0($s1)
    ctx->pc = 0x2f47b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 704), bits); }
label_2f47b4:
    // 0x2f47b4: 0xe62202c4  swc1        $f2, 0x2C4($s1)
    ctx->pc = 0x2f47b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 708), bits); }
label_2f47b8:
    // 0x2f47b8: 0x8c4204d0  lw          $v0, 0x4D0($v0)
    ctx->pc = 0x2f47b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1232)));
label_2f47bc:
    // 0x2f47bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2f47c0:
    if (ctx->pc == 0x2F47C0u) {
        ctx->pc = 0x2F47C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F47BCu;
        // 0x2f47c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F47C4u;
        goto label_2f47c4;
    }
    ctx->pc = 0x2F47BCu;
    {
        const bool branch_taken_0x2f47bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F47C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F47BCu;
        // 0x2f47c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f47bc) {
            ctx->pc = 0x2F47CCu;
            goto label_2f47cc;
        }
    }
    ctx->pc = 0x2F47C4u;
label_2f47c4:
    // 0x2f47c4: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x2f47c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_2f47c8:
    // 0x2f47c8: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x2f47c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2f47cc:
    // 0x2f47cc: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_2f47d0:
    if (ctx->pc == 0x2F47D0u) {
        ctx->pc = 0x2F47D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F47CCu;
        // 0x2f47d0: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F47D4u;
        goto label_2f47d4;
    }
    ctx->pc = 0x2F47CCu;
    {
        const bool branch_taken_0x2f47cc = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2F47D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F47CCu;
        // 0x2f47d0: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f47cc) {
            ctx->pc = 0x2F47E8u;
            goto label_2f47e8;
        }
    }
    ctx->pc = 0x2F47D4u;
label_2f47d4:
    // 0x2f47d4: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x2f47d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2f47d8:
    // 0x2f47d8: 0x0  nop
    ctx->pc = 0x2f47d8u;
    // NOP
label_2f47dc:
    // 0x2f47dc: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x2f47dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_2f47e0:
    // 0x2f47e0: 0x10000008  b           . + 4 + (0x8 << 2)
label_2f47e4:
    if (ctx->pc == 0x2F47E4u) {
        ctx->pc = 0x2F47E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F47E0u;
        // 0x2f47e4: 0xc62002d8  lwc1        $f0, 0x2D8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F47E8u;
        goto label_2f47e8;
    }
    ctx->pc = 0x2F47E0u;
    {
        const bool branch_taken_0x2f47e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F47E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F47E0u;
        // 0x2f47e4: 0xc62002d8  lwc1        $f0, 0x2D8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f47e0) {
            ctx->pc = 0x2F4804u;
            goto label_2f4804;
        }
    }
    ctx->pc = 0x2F47E8u;
label_2f47e8:
    // 0x2f47e8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2f47e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_2f47ec:
    // 0x2f47ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2f47ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2f47f0:
    // 0x2f47f0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2f47f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2f47f4:
    // 0x2f47f4: 0x0  nop
    ctx->pc = 0x2f47f4u;
    // NOP
label_2f47f8:
    // 0x2f47f8: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x2f47f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_2f47fc:
    // 0x2f47fc: 0x460d6b40  add.s       $f13, $f13, $f13
    ctx->pc = 0x2f47fcu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
label_2f4800:
    // 0x2f4800: 0xc62002d8  lwc1        $f0, 0x2D8($s1)
    ctx->pc = 0x2f4800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f4804:
    // 0x2f4804: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f4804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f4808:
    // 0x2f4808: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f4808u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f480c:
    // 0x2f480c: 0x0  nop
    ctx->pc = 0x2f480cu;
    // NOP
label_2f4810:
    // 0x2f4810: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f4810u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f4814:
    // 0x2f4814: 0x0  nop
    ctx->pc = 0x2f4814u;
    // NOP
label_2f4818:
    // 0x2f4818: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2f481c:
    if (ctx->pc == 0x2F481Cu) {
        ctx->pc = 0x2F481Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4818u;
        // 0x2f481c: 0x46006b42  mul.s       $f13, $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4820u;
        goto label_2f4820;
    }
    ctx->pc = 0x2F4818u;
    {
        const bool branch_taken_0x2f4818 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F481Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4818u;
        // 0x2f481c: 0x46006b42  mul.s       $f13, $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4818) {
            ctx->pc = 0x2F4824u;
            goto label_2f4824;
        }
    }
    ctx->pc = 0x2F4820u;
label_2f4820:
    // 0x2f4820: 0xe62102d8  swc1        $f1, 0x2D8($s1)
    ctx->pc = 0x2f4820u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 728), bits); }
label_2f4824:
    // 0x2f4824: 0xc62002d8  lwc1        $f0, 0x2D8($s1)
    ctx->pc = 0x2f4824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f4828:
    // 0x2f4828: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f4828u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f482c:
    // 0x2f482c: 0x0  nop
    ctx->pc = 0x2f482cu;
    // NOP
label_2f4830:
    // 0x2f4830: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x2f4830u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f4834:
    // 0x2f4834: 0x0  nop
    ctx->pc = 0x2f4834u;
    // NOP
label_2f4838:
    // 0x2f4838: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2f483c:
    if (ctx->pc == 0x2F483Cu) {
        ctx->pc = 0x2F483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4838u;
        // 0x2f483c: 0xe62c02d8  swc1        $f12, 0x2D8($s1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 728), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4840u;
        goto label_2f4840;
    }
    ctx->pc = 0x2F4838u;
    {
        const bool branch_taken_0x2f4838 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f4838) {
            ctx->pc = 0x2F483Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4838u;
            // 0x2f483c: 0xe62c02d8  swc1        $f12, 0x2D8($s1) (Delay Slot)
            { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 728), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4840u;
            goto label_2f4840;
        }
    }
    ctx->pc = 0x2F4840u;
label_2f4840:
    // 0x2f4840: 0x8e2402b0  lw          $a0, 0x2B0($s1)
    ctx->pc = 0x2f4840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2f4844:
    // 0x2f4844: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f4844u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f4848:
    // 0x2f4848: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f4848u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f484c:
    // 0x2f484c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f484cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f4850:
    // 0x2f4850: 0xc055d5a  jal         func_157568
label_2f4854:
    if (ctx->pc == 0x2F4854u) {
        ctx->pc = 0x2F4854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4850u;
        // 0x2f4854: 0x8c8504d0  lw          $a1, 0x4D0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4858u;
        goto label_2f4858;
    }
    ctx->pc = 0x2F4850u;
    SET_GPR_U32(ctx, 31, 0x2F4858u);
    ctx->pc = 0x2F4854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4850u;
    // 0x2f4854: 0x8c8504d0  lw          $a1, 0x4D0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1232)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157568u, 0x2F4850u, 0x2F4858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4858u;
label_2f4858:
    // 0x2f4858: 0xc055f06  jal         func_157C18
label_2f485c:
    if (ctx->pc == 0x2F485Cu) {
        ctx->pc = 0x2F485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4858u;
        // 0x2f485c: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4860u;
        goto label_2f4860;
    }
    ctx->pc = 0x2F4858u;
    SET_GPR_U32(ctx, 31, 0x2F4860u);
    ctx->pc = 0x2F485Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4858u;
    // 0x2f485c: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2F4858u, 0x2F4860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4860u;
label_2f4860:
    // 0x2f4860: 0x8e2402b0  lw          $a0, 0x2B0($s1)
    ctx->pc = 0x2f4860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2f4864:
    // 0x2f4864: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f4864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_2f4868:
    // 0x2f4868: 0x8c820254  lw          $v0, 0x254($a0)
    ctx->pc = 0x2f4868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 596)));
label_2f486c:
    // 0x2f486c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2f486cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2f4870:
    // 0x2f4870: 0xac820254  sw          $v0, 0x254($a0)
    ctx->pc = 0x2f4870u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 596), GPR_U32(ctx, 2));
label_2f4874:
    // 0x2f4874: 0x8e2502b0  lw          $a1, 0x2B0($s1)
    ctx->pc = 0x2f4874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2f4878:
    // 0x2f4878: 0x8ca20214  lw          $v0, 0x214($a1)
    ctx->pc = 0x2f4878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_2f487c:
    // 0x2f487c: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x2f487cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_2f4880:
    // 0x2f4880: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x2f4880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2f4884:
    // 0x2f4884: 0x60f809  jalr        $v1
label_2f4888:
    if (ctx->pc == 0x2F4888u) {
        ctx->pc = 0x2F4888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4884u;
        // 0x2f4888: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F488Cu;
        goto label_2f488c;
    }
    ctx->pc = 0x2F4884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F488Cu);
        ctx->pc = 0x2F4888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4884u;
        // 0x2f4888: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4884u, 0x2F488Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F488Cu;
label_2f488c:
    // 0x2f488c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f488cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f4890:
    // 0x2f4890: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2f4890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2f4894:
    // 0x2f4894: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2f4894u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f4898:
    // 0x2f4898: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f4898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2f489c:
    // 0x2f489c: 0x3e00008  jr          $ra
label_2f48a0:
    if (ctx->pc == 0x2F48A0u) {
        ctx->pc = 0x2F48A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F489Cu;
        // 0x2f48a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F48A4u;
        goto label_2f48a4;
    }
    ctx->pc = 0x2F489Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F48A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F489Cu;
        // 0x2f48a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F489Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F48A4u;
label_2f48a4:
    // 0x2f48a4: 0x0  nop
    ctx->pc = 0x2f48a4u;
    // NOP
    ctx->pc = 0x2f48a8u;
}
