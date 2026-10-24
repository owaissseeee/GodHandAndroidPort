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

// Function: func_002C45A8
// Address: 0x2c45a8 - 0x2c4868
void func_002C45A8_0x2c45a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C45A8_0x2c45a8");
#endif

    switch (ctx->pc) {
        case 0x2c45a8u: goto label_2c45a8;
        case 0x2c45acu: goto label_2c45ac;
        case 0x2c45b0u: goto label_2c45b0;
        case 0x2c45b4u: goto label_2c45b4;
        case 0x2c45b8u: goto label_2c45b8;
        case 0x2c45bcu: goto label_2c45bc;
        case 0x2c45c0u: goto label_2c45c0;
        case 0x2c45c4u: goto label_2c45c4;
        case 0x2c45c8u: goto label_2c45c8;
        case 0x2c45ccu: goto label_2c45cc;
        case 0x2c45d0u: goto label_2c45d0;
        case 0x2c45d4u: goto label_2c45d4;
        case 0x2c45d8u: goto label_2c45d8;
        case 0x2c45dcu: goto label_2c45dc;
        case 0x2c45e0u: goto label_2c45e0;
        case 0x2c45e4u: goto label_2c45e4;
        case 0x2c45e8u: goto label_2c45e8;
        case 0x2c45ecu: goto label_2c45ec;
        case 0x2c45f0u: goto label_2c45f0;
        case 0x2c45f4u: goto label_2c45f4;
        case 0x2c45f8u: goto label_2c45f8;
        case 0x2c45fcu: goto label_2c45fc;
        case 0x2c4600u: goto label_2c4600;
        case 0x2c4604u: goto label_2c4604;
        case 0x2c4608u: goto label_2c4608;
        case 0x2c460cu: goto label_2c460c;
        case 0x2c4610u: goto label_2c4610;
        case 0x2c4614u: goto label_2c4614;
        case 0x2c4618u: goto label_2c4618;
        case 0x2c461cu: goto label_2c461c;
        case 0x2c4620u: goto label_2c4620;
        case 0x2c4624u: goto label_2c4624;
        case 0x2c4628u: goto label_2c4628;
        case 0x2c462cu: goto label_2c462c;
        case 0x2c4630u: goto label_2c4630;
        case 0x2c4634u: goto label_2c4634;
        case 0x2c4638u: goto label_2c4638;
        case 0x2c463cu: goto label_2c463c;
        case 0x2c4640u: goto label_2c4640;
        case 0x2c4644u: goto label_2c4644;
        case 0x2c4648u: goto label_2c4648;
        case 0x2c464cu: goto label_2c464c;
        case 0x2c4650u: goto label_2c4650;
        case 0x2c4654u: goto label_2c4654;
        case 0x2c4658u: goto label_2c4658;
        case 0x2c465cu: goto label_2c465c;
        case 0x2c4660u: goto label_2c4660;
        case 0x2c4664u: goto label_2c4664;
        case 0x2c4668u: goto label_2c4668;
        case 0x2c466cu: goto label_2c466c;
        case 0x2c4670u: goto label_2c4670;
        case 0x2c4674u: goto label_2c4674;
        case 0x2c4678u: goto label_2c4678;
        case 0x2c467cu: goto label_2c467c;
        case 0x2c4680u: goto label_2c4680;
        case 0x2c4684u: goto label_2c4684;
        case 0x2c4688u: goto label_2c4688;
        case 0x2c468cu: goto label_2c468c;
        case 0x2c4690u: goto label_2c4690;
        case 0x2c4694u: goto label_2c4694;
        case 0x2c4698u: goto label_2c4698;
        case 0x2c469cu: goto label_2c469c;
        case 0x2c46a0u: goto label_2c46a0;
        case 0x2c46a4u: goto label_2c46a4;
        case 0x2c46a8u: goto label_2c46a8;
        case 0x2c46acu: goto label_2c46ac;
        case 0x2c46b0u: goto label_2c46b0;
        case 0x2c46b4u: goto label_2c46b4;
        case 0x2c46b8u: goto label_2c46b8;
        case 0x2c46bcu: goto label_2c46bc;
        case 0x2c46c0u: goto label_2c46c0;
        case 0x2c46c4u: goto label_2c46c4;
        case 0x2c46c8u: goto label_2c46c8;
        case 0x2c46ccu: goto label_2c46cc;
        case 0x2c46d0u: goto label_2c46d0;
        case 0x2c46d4u: goto label_2c46d4;
        case 0x2c46d8u: goto label_2c46d8;
        case 0x2c46dcu: goto label_2c46dc;
        case 0x2c46e0u: goto label_2c46e0;
        case 0x2c46e4u: goto label_2c46e4;
        case 0x2c46e8u: goto label_2c46e8;
        case 0x2c46ecu: goto label_2c46ec;
        case 0x2c46f0u: goto label_2c46f0;
        case 0x2c46f4u: goto label_2c46f4;
        case 0x2c46f8u: goto label_2c46f8;
        case 0x2c46fcu: goto label_2c46fc;
        case 0x2c4700u: goto label_2c4700;
        case 0x2c4704u: goto label_2c4704;
        case 0x2c4708u: goto label_2c4708;
        case 0x2c470cu: goto label_2c470c;
        case 0x2c4710u: goto label_2c4710;
        case 0x2c4714u: goto label_2c4714;
        case 0x2c4718u: goto label_2c4718;
        case 0x2c471cu: goto label_2c471c;
        case 0x2c4720u: goto label_2c4720;
        case 0x2c4724u: goto label_2c4724;
        case 0x2c4728u: goto label_2c4728;
        case 0x2c472cu: goto label_2c472c;
        case 0x2c4730u: goto label_2c4730;
        case 0x2c4734u: goto label_2c4734;
        case 0x2c4738u: goto label_2c4738;
        case 0x2c473cu: goto label_2c473c;
        case 0x2c4740u: goto label_2c4740;
        case 0x2c4744u: goto label_2c4744;
        case 0x2c4748u: goto label_2c4748;
        case 0x2c474cu: goto label_2c474c;
        case 0x2c4750u: goto label_2c4750;
        case 0x2c4754u: goto label_2c4754;
        case 0x2c4758u: goto label_2c4758;
        case 0x2c475cu: goto label_2c475c;
        case 0x2c4760u: goto label_2c4760;
        case 0x2c4764u: goto label_2c4764;
        case 0x2c4768u: goto label_2c4768;
        case 0x2c476cu: goto label_2c476c;
        case 0x2c4770u: goto label_2c4770;
        case 0x2c4774u: goto label_2c4774;
        case 0x2c4778u: goto label_2c4778;
        case 0x2c477cu: goto label_2c477c;
        case 0x2c4780u: goto label_2c4780;
        case 0x2c4784u: goto label_2c4784;
        case 0x2c4788u: goto label_2c4788;
        case 0x2c478cu: goto label_2c478c;
        case 0x2c4790u: goto label_2c4790;
        case 0x2c4794u: goto label_2c4794;
        case 0x2c4798u: goto label_2c4798;
        case 0x2c479cu: goto label_2c479c;
        case 0x2c47a0u: goto label_2c47a0;
        case 0x2c47a4u: goto label_2c47a4;
        case 0x2c47a8u: goto label_2c47a8;
        case 0x2c47acu: goto label_2c47ac;
        case 0x2c47b0u: goto label_2c47b0;
        case 0x2c47b4u: goto label_2c47b4;
        case 0x2c47b8u: goto label_2c47b8;
        case 0x2c47bcu: goto label_2c47bc;
        case 0x2c47c0u: goto label_2c47c0;
        case 0x2c47c4u: goto label_2c47c4;
        case 0x2c47c8u: goto label_2c47c8;
        case 0x2c47ccu: goto label_2c47cc;
        case 0x2c47d0u: goto label_2c47d0;
        case 0x2c47d4u: goto label_2c47d4;
        case 0x2c47d8u: goto label_2c47d8;
        case 0x2c47dcu: goto label_2c47dc;
        case 0x2c47e0u: goto label_2c47e0;
        case 0x2c47e4u: goto label_2c47e4;
        case 0x2c47e8u: goto label_2c47e8;
        case 0x2c47ecu: goto label_2c47ec;
        case 0x2c47f0u: goto label_2c47f0;
        case 0x2c47f4u: goto label_2c47f4;
        case 0x2c47f8u: goto label_2c47f8;
        case 0x2c47fcu: goto label_2c47fc;
        case 0x2c4800u: goto label_2c4800;
        case 0x2c4804u: goto label_2c4804;
        case 0x2c4808u: goto label_2c4808;
        case 0x2c480cu: goto label_2c480c;
        case 0x2c4810u: goto label_2c4810;
        case 0x2c4814u: goto label_2c4814;
        case 0x2c4818u: goto label_2c4818;
        case 0x2c481cu: goto label_2c481c;
        case 0x2c4820u: goto label_2c4820;
        case 0x2c4824u: goto label_2c4824;
        case 0x2c4828u: goto label_2c4828;
        case 0x2c482cu: goto label_2c482c;
        case 0x2c4830u: goto label_2c4830;
        case 0x2c4834u: goto label_2c4834;
        case 0x2c4838u: goto label_2c4838;
        case 0x2c483cu: goto label_2c483c;
        case 0x2c4840u: goto label_2c4840;
        case 0x2c4844u: goto label_2c4844;
        case 0x2c4848u: goto label_2c4848;
        case 0x2c484cu: goto label_2c484c;
        case 0x2c4850u: goto label_2c4850;
        case 0x2c4854u: goto label_2c4854;
        case 0x2c4858u: goto label_2c4858;
        case 0x2c485cu: goto label_2c485c;
        case 0x2c4860u: goto label_2c4860;
        case 0x2c4864u: goto label_2c4864;
        default: break;
    }

    ctx->pc = 0x2c45a8u;

label_2c45a8:
    // 0x2c45a8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2c45a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2c45ac:
    // 0x2c45ac: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2c45acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_2c45b0:
    // 0x2c45b0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2c45b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2c45b4:
    // 0x2c45b4: 0x30b0ffff  andi        $s0, $a1, 0xFFFF
    ctx->pc = 0x2c45b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_2c45b8:
    // 0x2c45b8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2c45b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_2c45bc:
    // 0x2c45bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c45bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c45c0:
    // 0x2c45c0: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2c45c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_2c45c4:
    // 0x2c45c4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2c45c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c45c8:
    // 0x2c45c8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2c45c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2c45cc:
    // 0x2c45cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c45ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2c45d0:
    // 0x2c45d0: 0x92220014  lbu         $v0, 0x14($s1)
    ctx->pc = 0x2c45d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
label_2c45d4:
    // 0x2c45d4: 0x1440009c  bnez        $v0, . + 4 + (0x9C << 2)
label_2c45d8:
    if (ctx->pc == 0x2C45D8u) {
        ctx->pc = 0x2C45D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C45D4u;
        // 0x2c45d8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C45DCu;
        goto label_2c45dc;
    }
    ctx->pc = 0x2C45D4u;
    {
        const bool branch_taken_0x2c45d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C45D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C45D4u;
        // 0x2c45d8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c45d4) {
            ctx->pc = 0x2C4848u;
            goto label_2c4848;
        }
    }
    ctx->pc = 0x2C45DCu;
label_2c45dc:
    // 0x2c45dc: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2c45dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_2c45e0:
    // 0x2c45e0: 0xc0a4230  jal         func_2908C0
label_2c45e4:
    if (ctx->pc == 0x2C45E4u) {
        ctx->pc = 0x2C45E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C45E0u;
        // 0x2c45e4: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C45E8u;
        goto label_2c45e8;
    }
    ctx->pc = 0x2C45E0u;
    SET_GPR_U32(ctx, 31, 0x2C45E8u);
    ctx->pc = 0x2C45E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C45E0u;
    // 0x2c45e4: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2908C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2908C0u, 0x2C45E0u, 0x2C45E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C45E8u;
label_2c45e8:
    // 0x2c45e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c45e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c45ec:
    // 0x2c45ec: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2c45ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_2c45f0:
    // 0x2c45f0: 0xa2220014  sb          $v0, 0x14($s1)
    ctx->pc = 0x2c45f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 20), (uint8_t)GPR_U32(ctx, 2));
label_2c45f4:
    // 0x2c45f4: 0x247274a0  addiu       $s2, $v1, 0x74A0
    ctx->pc = 0x2c45f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
label_2c45f8:
    // 0x2c45f8: 0x964205b0  lhu         $v0, 0x5B0($s2)
    ctx->pc = 0x2c45f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1456)));
label_2c45fc:
    // 0x2c45fc: 0xc0b6dac  jal         func_2DB6B0
label_2c4600:
    if (ctx->pc == 0x2C4600u) {
        ctx->pc = 0x2C4600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C45FCu;
        // 0x2c4600: 0xa6220016  sh          $v0, 0x16($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 22), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4604u;
        goto label_2c4604;
    }
    ctx->pc = 0x2C45FCu;
    SET_GPR_U32(ctx, 31, 0x2C4604u);
    ctx->pc = 0x2C4600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C45FCu;
    // 0x2c4600: 0xa6220016  sh          $v0, 0x16($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 22), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2C45FCu, 0x2C4604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4604u;
label_2c4604:
    // 0x2c4604: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x2c4604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_2c4608:
    // 0x2c4608: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x2c4608u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_2c460c:
    // 0x2c460c: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x2c460cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_2c4610:
    // 0x2c4610: 0xa0f809  jalr        $a1
label_2c4614:
    if (ctx->pc == 0x2C4614u) {
        ctx->pc = 0x2C4614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4610u;
        // 0x2c4614: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4618u;
        goto label_2c4618;
    }
    ctx->pc = 0x2C4610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2C4618u);
        ctx->pc = 0x2C4614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4610u;
        // 0x2c4614: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4610u, 0x2C4618u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C4618u;
label_2c4618:
    // 0x2c4618: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
label_2c461c:
    if (ctx->pc == 0x2C461Cu) {
        ctx->pc = 0x2C4620u;
        goto label_2c4620;
    }
    ctx->pc = 0x2C4618u;
    {
        const bool branch_taken_0x2c4618 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c4618) {
            ctx->pc = 0x2C4638u;
            goto label_2c4638;
        }
    }
    ctx->pc = 0x2C4620u;
label_2c4620:
    // 0x2c4620: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2c4620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c4624:
    // 0x2c4624: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2c4624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2c4628:
    // 0x2c4628: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2c4628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c462c:
    // 0x2c462c: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x2c462cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_2c4630:
    // 0x2c4630: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2c4630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c4634:
    // 0x2c4634: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x2c4634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_2c4638:
    // 0x2c4638: 0xc0b6dac  jal         func_2DB6B0
label_2c463c:
    if (ctx->pc == 0x2C463Cu) {
        ctx->pc = 0x2C4640u;
        goto label_2c4640;
    }
    ctx->pc = 0x2C4638u;
    SET_GPR_U32(ctx, 31, 0x2C4640u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2C4638u, 0x2C4640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4640u;
label_2c4640:
    // 0x2c4640: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x2c4640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_2c4644:
    // 0x2c4644: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x2c4644u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_2c4648:
    // 0x2c4648: 0x8c65008c  lw          $a1, 0x8C($v1)
    ctx->pc = 0x2c4648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_2c464c:
    // 0x2c464c: 0xa0f809  jalr        $a1
label_2c4650:
    if (ctx->pc == 0x2C4650u) {
        ctx->pc = 0x2C4650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C464Cu;
        // 0x2c4650: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4654u;
        goto label_2c4654;
    }
    ctx->pc = 0x2C464Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2C4654u);
        ctx->pc = 0x2C4650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C464Cu;
        // 0x2c4650: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C464Cu, 0x2C4654u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C4654u;
label_2c4654:
    // 0x2c4654: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2c4654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c4658:
    // 0x2c4658: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c4658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c465c:
    // 0x2c465c: 0xc0b0e08  jal         func_2C3820
label_2c4660:
    if (ctx->pc == 0x2C4660u) {
        ctx->pc = 0x2C4660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C465Cu;
        // 0x2c4660: 0xe6200010  swc1        $f0, 0x10($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4664u;
        goto label_2c4664;
    }
    ctx->pc = 0x2C465Cu;
    SET_GPR_U32(ctx, 31, 0x2C4664u);
    ctx->pc = 0x2C4660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C465Cu;
    // 0x2c4660: 0xe6200010  swc1        $f0, 0x10($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3820u, 0x2C465Cu, 0x2C4664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4664u;
label_2c4664:
    // 0x2c4664: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2c4664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_2c4668:
    // 0x2c4668: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c4668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c466c:
    // 0x2c466c: 0x8c44264c  lw          $a0, 0x264C($v0)
    ctx->pc = 0x2c466cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9804)));
label_2c4670:
    // 0x2c4670: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c4670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c4674:
    // 0x2c4674: 0xc0b016c  jal         func_2C05B0
label_2c4678:
    if (ctx->pc == 0x2C4678u) {
        ctx->pc = 0x2C4678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4674u;
        // 0x2c4678: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C467Cu;
        goto label_2c467c;
    }
    ctx->pc = 0x2C4674u;
    SET_GPR_U32(ctx, 31, 0x2C467Cu);
    ctx->pc = 0x2C4678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4674u;
    // 0x2c4678: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x2C4674u, 0x2C467Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C467Cu;
label_2c467c:
    // 0x2c467c: 0x8e420584  lw          $v0, 0x584($s2)
    ctx->pc = 0x2c467cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1412)));
label_2c4680:
    // 0x2c4680: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2c4680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_2c4684:
    // 0x2c4684: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c4684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2c4688:
    // 0x2c4688: 0xae420584  sw          $v0, 0x584($s2)
    ctx->pc = 0x2c4688u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1412), GPR_U32(ctx, 2));
label_2c468c:
    // 0x2c468c: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x2c468cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_2c4690:
    // 0x2c4690: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2c4690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_2c4694:
    // 0x2c4694: 0x964305b0  lhu         $v1, 0x5B0($s2)
    ctx->pc = 0x2c4694u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1456)));
label_2c4698:
    // 0x2c4698: 0x24020404  addiu       $v0, $zero, 0x404
    ctx->pc = 0x2c4698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1028));
label_2c469c:
    // 0x2c469c: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
label_2c46a0:
    if (ctx->pc == 0x2C46A0u) {
        ctx->pc = 0x2C46A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C469Cu;
        // 0x2c46a0: 0x28620405  slti        $v0, $v1, 0x405 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1029) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C46A4u;
        goto label_2c46a4;
    }
    ctx->pc = 0x2C469Cu;
    {
        const bool branch_taken_0x2c469c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C46A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C469Cu;
        // 0x2c46a0: 0x28620405  slti        $v0, $v1, 0x405 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1029) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c469c) {
            ctx->pc = 0x2C4774u;
            goto label_2c4774;
        }
    }
    ctx->pc = 0x2C46A4u;
label_2c46a4:
    // 0x2c46a4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2c46a8:
    if (ctx->pc == 0x2C46A8u) {
        ctx->pc = 0x2C46A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C46A4u;
        // 0x2c46a8: 0x24020105  addiu       $v0, $zero, 0x105 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C46ACu;
        goto label_2c46ac;
    }
    ctx->pc = 0x2C46A4u;
    {
        const bool branch_taken_0x2c46a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C46A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C46A4u;
        // 0x2c46a8: 0x24020105  addiu       $v0, $zero, 0x105 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c46a4) {
            ctx->pc = 0x2C46E8u;
            goto label_2c46e8;
        }
    }
    ctx->pc = 0x2C46ACu;
label_2c46ac:
    // 0x2c46ac: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
label_2c46b0:
    if (ctx->pc == 0x2C46B0u) {
        ctx->pc = 0x2C46B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C46ACu;
        // 0x2c46b0: 0x28620106  slti        $v0, $v1, 0x106 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)262) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C46B4u;
        goto label_2c46b4;
    }
    ctx->pc = 0x2C46ACu;
    {
        const bool branch_taken_0x2c46ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C46B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C46ACu;
        // 0x2c46b0: 0x28620106  slti        $v0, $v1, 0x106 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)262) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c46ac) {
            ctx->pc = 0x2C4728u;
            goto label_2c4728;
        }
    }
    ctx->pc = 0x2C46B4u;
label_2c46b4:
    // 0x2c46b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2c46b8:
    if (ctx->pc == 0x2C46B8u) {
        ctx->pc = 0x2C46B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C46B4u;
        // 0x2c46b8: 0x24020102  addiu       $v0, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C46BCu;
        goto label_2c46bc;
    }
    ctx->pc = 0x2C46B4u;
    {
        const bool branch_taken_0x2c46b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C46B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C46B4u;
        // 0x2c46b8: 0x24020102  addiu       $v0, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c46b4) {
            ctx->pc = 0x2C46CCu;
            goto label_2c46cc;
        }
    }
    ctx->pc = 0x2C46BCu;
label_2c46bc:
    // 0x2c46bc: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
label_2c46c0:
    if (ctx->pc == 0x2C46C0u) {
        ctx->pc = 0x2C46C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C46BCu;
        // 0x2c46c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C46C4u;
        goto label_2c46c4;
    }
    ctx->pc = 0x2C46BCu;
    {
        const bool branch_taken_0x2c46bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C46C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C46BCu;
        // 0x2c46c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c46bc) {
            ctx->pc = 0x2C4744u;
            goto label_2c4744;
        }
    }
    ctx->pc = 0x2C46C4u;
label_2c46c4:
    // 0x2c46c4: 0x1000005a  b           . + 4 + (0x5A << 2)
label_2c46c8:
    if (ctx->pc == 0x2C46C8u) {
        ctx->pc = 0x2C46C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C46C4u;
        // 0x2c46c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C46CCu;
        goto label_2c46cc;
    }
    ctx->pc = 0x2C46C4u;
    {
        const bool branch_taken_0x2c46c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C46C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C46C4u;
        // 0x2c46c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c46c4) {
            ctx->pc = 0x2C4830u;
            goto label_2c4830;
        }
    }
    ctx->pc = 0x2C46CCu;
label_2c46cc:
    // 0x2c46cc: 0x24020204  addiu       $v0, $zero, 0x204
    ctx->pc = 0x2c46ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 516));
label_2c46d0:
    // 0x2c46d0: 0x10620049  beq         $v1, $v0, . + 4 + (0x49 << 2)
label_2c46d4:
    if (ctx->pc == 0x2C46D4u) {
        ctx->pc = 0x2C46D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C46D0u;
        // 0x2c46d4: 0x24020300  addiu       $v0, $zero, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C46D8u;
        goto label_2c46d8;
    }
    ctx->pc = 0x2C46D0u;
    {
        const bool branch_taken_0x2c46d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C46D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C46D0u;
        // 0x2c46d4: 0x24020300  addiu       $v0, $zero, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c46d0) {
            ctx->pc = 0x2C47F8u;
            goto label_2c47f8;
        }
    }
    ctx->pc = 0x2C46D8u;
label_2c46d8:
    // 0x2c46d8: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
label_2c46dc:
    if (ctx->pc == 0x2C46DCu) {
        ctx->pc = 0x2C46DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C46D8u;
        // 0x2c46dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C46E0u;
        goto label_2c46e0;
    }
    ctx->pc = 0x2C46D8u;
    {
        const bool branch_taken_0x2c46d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C46DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C46D8u;
        // 0x2c46dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c46d8) {
            ctx->pc = 0x2C4758u;
            goto label_2c4758;
        }
    }
    ctx->pc = 0x2C46E0u;
label_2c46e0:
    // 0x2c46e0: 0x10000053  b           . + 4 + (0x53 << 2)
label_2c46e4:
    if (ctx->pc == 0x2C46E4u) {
        ctx->pc = 0x2C46E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C46E0u;
        // 0x2c46e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C46E8u;
        goto label_2c46e8;
    }
    ctx->pc = 0x2C46E0u;
    {
        const bool branch_taken_0x2c46e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C46E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C46E0u;
        // 0x2c46e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c46e0) {
            ctx->pc = 0x2C4830u;
            goto label_2c4830;
        }
    }
    ctx->pc = 0x2C46E8u;
label_2c46e8:
    // 0x2c46e8: 0x24020607  addiu       $v0, $zero, 0x607
    ctx->pc = 0x2c46e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1543));
label_2c46ec:
    // 0x2c46ec: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
label_2c46f0:
    if (ctx->pc == 0x2C46F0u) {
        ctx->pc = 0x2C46F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C46ECu;
        // 0x2c46f0: 0x28620608  slti        $v0, $v1, 0x608 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1544) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C46F4u;
        goto label_2c46f4;
    }
    ctx->pc = 0x2C46ECu;
    {
        const bool branch_taken_0x2c46ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C46F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C46ECu;
        // 0x2c46f0: 0x28620608  slti        $v0, $v1, 0x608 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1544) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c46ec) {
            ctx->pc = 0x2C47A4u;
            goto label_2c47a4;
        }
    }
    ctx->pc = 0x2C46F4u;
label_2c46f4:
    // 0x2c46f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2c46f8:
    if (ctx->pc == 0x2C46F8u) {
        ctx->pc = 0x2C46F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C46F4u;
        // 0x2c46f8: 0x24020503  addiu       $v0, $zero, 0x503 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C46FCu;
        goto label_2c46fc;
    }
    ctx->pc = 0x2C46F4u;
    {
        const bool branch_taken_0x2c46f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C46F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C46F4u;
        // 0x2c46f8: 0x24020503  addiu       $v0, $zero, 0x503 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c46f4) {
            ctx->pc = 0x2C470Cu;
            goto label_2c470c;
        }
    }
    ctx->pc = 0x2C46FCu;
label_2c46fc:
    // 0x2c46fc: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
label_2c4700:
    if (ctx->pc == 0x2C4700u) {
        ctx->pc = 0x2C4700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C46FCu;
        // 0x2c4700: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4704u;
        goto label_2c4704;
    }
    ctx->pc = 0x2C46FCu;
    {
        const bool branch_taken_0x2c46fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C4700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C46FCu;
        // 0x2c4700: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c46fc) {
            ctx->pc = 0x2C4788u;
            goto label_2c4788;
        }
    }
    ctx->pc = 0x2C4704u;
label_2c4704:
    // 0x2c4704: 0x1000004a  b           . + 4 + (0x4A << 2)
label_2c4708:
    if (ctx->pc == 0x2C4708u) {
        ctx->pc = 0x2C4708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4704u;
        // 0x2c4708: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C470Cu;
        goto label_2c470c;
    }
    ctx->pc = 0x2C4704u;
    {
        const bool branch_taken_0x2c4704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4704u;
        // 0x2c4708: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4704) {
            ctx->pc = 0x2C4830u;
            goto label_2c4830;
        }
    }
    ctx->pc = 0x2C470Cu;
label_2c470c:
    // 0x2c470c: 0x24020701  addiu       $v0, $zero, 0x701
    ctx->pc = 0x2c470cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1793));
label_2c4710:
    // 0x2c4710: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
label_2c4714:
    if (ctx->pc == 0x2C4714u) {
        ctx->pc = 0x2C4714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4710u;
        // 0x2c4714: 0x24020802  addiu       $v0, $zero, 0x802 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2050));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4718u;
        goto label_2c4718;
    }
    ctx->pc = 0x2C4710u;
    {
        const bool branch_taken_0x2c4710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C4714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4710u;
        // 0x2c4714: 0x24020802  addiu       $v0, $zero, 0x802 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2050));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4710) {
            ctx->pc = 0x2C47C0u;
            goto label_2c47c0;
        }
    }
    ctx->pc = 0x2C4718u;
label_2c4718:
    // 0x2c4718: 0x10620037  beq         $v1, $v0, . + 4 + (0x37 << 2)
label_2c471c:
    if (ctx->pc == 0x2C471Cu) {
        ctx->pc = 0x2C471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4718u;
        // 0x2c471c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4720u;
        goto label_2c4720;
    }
    ctx->pc = 0x2C4718u;
    {
        const bool branch_taken_0x2c4718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4718u;
        // 0x2c471c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4718) {
            ctx->pc = 0x2C47F8u;
            goto label_2c47f8;
        }
    }
    ctx->pc = 0x2C4720u;
label_2c4720:
    // 0x2c4720: 0x10000043  b           . + 4 + (0x43 << 2)
label_2c4724:
    if (ctx->pc == 0x2C4724u) {
        ctx->pc = 0x2C4724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4720u;
        // 0x2c4724: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4728u;
        goto label_2c4728;
    }
    ctx->pc = 0x2C4720u;
    {
        const bool branch_taken_0x2c4720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4720u;
        // 0x2c4724: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4720) {
            ctx->pc = 0x2C4830u;
            goto label_2c4830;
        }
    }
    ctx->pc = 0x2C4728u;
label_2c4728:
    // 0x2c4728: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2c4728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
label_2c472c:
    // 0x2c472c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2c472cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_2c4730:
    // 0x2c4730: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c4730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2c4734:
    // 0x2c4734: 0x3c0140b0  lui         $at, 0x40B0
    ctx->pc = 0x2c4734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16560 << 16));
label_2c4738:
    // 0x2c4738: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c4738u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c473c:
    // 0x2c473c: 0x10000034  b           . + 4 + (0x34 << 2)
label_2c4740:
    if (ctx->pc == 0x2C4740u) {
        ctx->pc = 0x2C4740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C473Cu;
        // 0x2c4740: 0x24100042  addiu       $s0, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4744u;
        goto label_2c4744;
    }
    ctx->pc = 0x2C473Cu;
    {
        const bool branch_taken_0x2c473c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C473Cu;
        // 0x2c4740: 0x24100042  addiu       $s0, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c473c) {
            ctx->pc = 0x2C4810u;
            goto label_2c4810;
        }
    }
    ctx->pc = 0x2C4744u;
label_2c4744:
    // 0x2c4744: 0x3c014099  lui         $at, 0x4099
    ctx->pc = 0x2c4744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16537 << 16));
label_2c4748:
    // 0x2c4748: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2c4748u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2c474c:
    // 0x2c474c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c474cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2c4750:
    // 0x2c4750: 0x1000001f  b           . + 4 + (0x1F << 2)
label_2c4754:
    if (ctx->pc == 0x2C4754u) {
        ctx->pc = 0x2C4754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4750u;
        // 0x2c4754: 0x24100044  addiu       $s0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4758u;
        goto label_2c4758;
    }
    ctx->pc = 0x2C4750u;
    {
        const bool branch_taken_0x2c4750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4750u;
        // 0x2c4754: 0x24100044  addiu       $s0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4750) {
            ctx->pc = 0x2C47D0u;
            goto label_2c47d0;
        }
    }
    ctx->pc = 0x2C4758u;
label_2c4758:
    // 0x2c4758: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2c4758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2c475c:
    // 0x2c475c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c475cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c4760:
    // 0x2c4760: 0x24100041  addiu       $s0, $zero, 0x41
    ctx->pc = 0x2c4760u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_2c4764:
    // 0x2c4764: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2c4764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_2c4768:
    // 0x2c4768: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2c4768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2c476c:
    // 0x2c476c: 0x1000002b  b           . + 4 + (0x2B << 2)
label_2c4770:
    if (ctx->pc == 0x2C4770u) {
        ctx->pc = 0x2C4770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C476Cu;
        // 0x2c4770: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4774u;
        goto label_2c4774;
    }
    ctx->pc = 0x2C476Cu;
    {
        const bool branch_taken_0x2c476c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C476Cu;
        // 0x2c4770: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c476c) {
            ctx->pc = 0x2C481Cu;
            goto label_2c481c;
        }
    }
    ctx->pc = 0x2C4774u;
label_2c4774:
    // 0x2c4774: 0x3c014099  lui         $at, 0x4099
    ctx->pc = 0x2c4774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16537 << 16));
label_2c4778:
    // 0x2c4778: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2c4778u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2c477c:
    // 0x2c477c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c477cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2c4780:
    // 0x2c4780: 0x10000013  b           . + 4 + (0x13 << 2)
label_2c4784:
    if (ctx->pc == 0x2C4784u) {
        ctx->pc = 0x2C4784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4780u;
        // 0x2c4784: 0x2410004c  addiu       $s0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4788u;
        goto label_2c4788;
    }
    ctx->pc = 0x2C4780u;
    {
        const bool branch_taken_0x2c4780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4780u;
        // 0x2c4784: 0x2410004c  addiu       $s0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4780) {
            ctx->pc = 0x2C47D0u;
            goto label_2c47d0;
        }
    }
    ctx->pc = 0x2C4788u;
label_2c4788:
    // 0x2c4788: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x2c4788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
label_2c478c:
    // 0x2c478c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2c478cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2c4790:
    // 0x2c4790: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c4790u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2c4794:
    // 0x2c4794: 0x3c0140b0  lui         $at, 0x40B0
    ctx->pc = 0x2c4794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16560 << 16));
label_2c4798:
    // 0x2c4798: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c4798u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c479c:
    // 0x2c479c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_2c47a0:
    if (ctx->pc == 0x2C47A0u) {
        ctx->pc = 0x2C47A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C479Cu;
        // 0x2c47a0: 0x24100043  addiu       $s0, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C47A4u;
        goto label_2c47a4;
    }
    ctx->pc = 0x2C479Cu;
    {
        const bool branch_taken_0x2c479c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C47A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C479Cu;
        // 0x2c47a0: 0x24100043  addiu       $s0, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c479c) {
            ctx->pc = 0x2C4810u;
            goto label_2c4810;
        }
    }
    ctx->pc = 0x2C47A4u;
label_2c47a4:
    // 0x2c47a4: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2c47a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
label_2c47a8:
    // 0x2c47a8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2c47a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_2c47ac:
    // 0x2c47ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c47acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2c47b0:
    // 0x2c47b0: 0x3c0140b0  lui         $at, 0x40B0
    ctx->pc = 0x2c47b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16560 << 16));
label_2c47b4:
    // 0x2c47b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c47b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c47b8:
    // 0x2c47b8: 0x10000015  b           . + 4 + (0x15 << 2)
label_2c47bc:
    if (ctx->pc == 0x2C47BCu) {
        ctx->pc = 0x2C47BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C47B8u;
        // 0x2c47bc: 0x24100040  addiu       $s0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C47C0u;
        goto label_2c47c0;
    }
    ctx->pc = 0x2C47B8u;
    {
        const bool branch_taken_0x2c47b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C47BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C47B8u;
        // 0x2c47bc: 0x24100040  addiu       $s0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c47b8) {
            ctx->pc = 0x2C4810u;
            goto label_2c4810;
        }
    }
    ctx->pc = 0x2C47C0u;
label_2c47c0:
    // 0x2c47c0: 0x3c014099  lui         $at, 0x4099
    ctx->pc = 0x2c47c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16537 << 16));
label_2c47c4:
    // 0x2c47c4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2c47c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2c47c8:
    // 0x2c47c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c47c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2c47cc:
    // 0x2c47cc: 0x2410004d  addiu       $s0, $zero, 0x4D
    ctx->pc = 0x2c47ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
label_2c47d0:
    // 0x2c47d0: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x2c47d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
label_2c47d4:
    // 0x2c47d4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2c47d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2c47d8:
    // 0x2c47d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c47d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c47dc:
    // 0x2c47dc: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2c47dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2c47e0:
    // 0x2c47e0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2c47e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2c47e4:
    // 0x2c47e4: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x2c47e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
label_2c47e8:
    // 0x2c47e8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2c47e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2c47ec:
    // 0x2c47ec: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2c47ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2c47f0:
    // 0x2c47f0: 0x1000000d  b           . + 4 + (0xD << 2)
label_2c47f4:
    if (ctx->pc == 0x2C47F4u) {
        ctx->pc = 0x2C47F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C47F0u;
        // 0x2c47f4: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C47F8u;
        goto label_2c47f8;
    }
    ctx->pc = 0x2C47F0u;
    {
        const bool branch_taken_0x2c47f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C47F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C47F0u;
        // 0x2c47f4: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c47f0) {
            ctx->pc = 0x2C4828u;
            goto label_2c4828;
        }
    }
    ctx->pc = 0x2C47F8u;
label_2c47f8:
    // 0x2c47f8: 0x3c014226  lui         $at, 0x4226
    ctx->pc = 0x2c47f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16934 << 16));
label_2c47fc:
    // 0x2c47fc: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x2c47fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
label_2c4800:
    // 0x2c4800: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c4800u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2c4804:
    // 0x2c4804: 0x24100045  addiu       $s0, $zero, 0x45
    ctx->pc = 0x2c4804u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_2c4808:
    // 0x2c4808: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2c4808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_2c480c:
    // 0x2c480c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c480cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c4810:
    // 0x2c4810: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2c4810u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2c4814:
    // 0x2c4814: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2c4814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2c4818:
    // 0x2c4818: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2c4818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_2c481c:
    // 0x2c481c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2c481cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_2c4820:
    // 0x2c4820: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2c4820u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2c4824:
    // 0x2c4824: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2c4824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2c4828:
    // 0x2c4828: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c4828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c482c:
    // 0x2c482c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c482cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c4830:
    // 0x2c4830: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c4830u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2c4834:
    // 0x2c4834: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2c4834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c4838:
    // 0x2c4838: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c4838u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c483c:
    // 0x2c483c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c483cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c4840:
    // 0x2c4840: 0xc0b1152  jal         func_2C4548
label_2c4844:
    if (ctx->pc == 0x2C4844u) {
        ctx->pc = 0x2C4844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4840u;
        // 0x2c4844: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4848u;
        goto label_2c4848;
    }
    ctx->pc = 0x2C4840u;
    SET_GPR_U32(ctx, 31, 0x2C4848u);
    ctx->pc = 0x2C4844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4840u;
    // 0x2c4844: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x2C4840u, 0x2C4848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4848u;
label_2c4848:
    // 0x2c4848: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2c4848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2c484c:
    // 0x2c484c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2c484cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2c4850:
    // 0x2c4850: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2c4850u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c4854:
    // 0x2c4854: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2c4854u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c4858:
    // 0x2c4858: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c4858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c485c:
    // 0x2c485c: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2c485cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2c4860:
    // 0x2c4860: 0x3e00008  jr          $ra
label_2c4864:
    if (ctx->pc == 0x2C4864u) {
        ctx->pc = 0x2C4864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4860u;
        // 0x2c4864: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4868u;
        goto label_fallthrough_0x2c4860;
    }
    ctx->pc = 0x2C4860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4860u;
        // 0x2c4864: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2c4860:
    ctx->pc = 0x2C4868u;
}
