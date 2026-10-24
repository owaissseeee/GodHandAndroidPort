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

// Function: func_001D7560
// Address: 0x1d7560 - 0x1d79d8
void func_001D7560_0x1d7560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D7560_0x1d7560");
#endif

    switch (ctx->pc) {
        case 0x1d759cu: goto label_1d759c;
        case 0x1d75a8u: goto label_1d75a8;
        case 0x1d7620u: goto label_1d7620;
        case 0x1d7658u: goto label_1d7658;
        case 0x1d7664u: goto label_1d7664;
        case 0x1d7688u: goto label_1d7688;
        case 0x1d76c8u: goto label_1d76c8;
        case 0x1d76d4u: goto label_1d76d4;
        case 0x1d76f8u: goto label_1d76f8;
        case 0x1d773cu: goto label_1d773c;
        case 0x1d7754u: goto label_1d7754;
        case 0x1d776cu: goto label_1d776c;
        case 0x1d7778u: goto label_1d7778;
        case 0x1d7784u: goto label_1d7784;
        case 0x1d77a4u: goto label_1d77a4;
        case 0x1d77b0u: goto label_1d77b0;
        case 0x1d77bcu: goto label_1d77bc;
        case 0x1d77fcu: goto label_1d77fc;
        case 0x1d782cu: goto label_1d782c;
        case 0x1d7844u: goto label_1d7844;
        case 0x1d785cu: goto label_1d785c;
        case 0x1d7868u: goto label_1d7868;
        case 0x1d787cu: goto label_1d787c;
        case 0x1d7888u: goto label_1d7888;
        case 0x1d78b8u: goto label_1d78b8;
        case 0x1d78dcu: goto label_1d78dc;
        case 0x1d7900u: goto label_1d7900;
        case 0x1d7924u: goto label_1d7924;
        case 0x1d7948u: goto label_1d7948;
        case 0x1d7968u: goto label_1d7968;
        case 0x1d7980u: goto label_1d7980;
        case 0x1d79a4u: goto label_1d79a4;
        case 0x1d79c0u: goto label_1d79c0;
        default: break;
    }

    ctx->pc = 0x1d7560u;

    // 0x1d7560: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d7560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d7564: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d7564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d7568: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d7568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d756c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d756cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7570: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d7570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d7574: 0x92233025  lbu         $v1, 0x3025($s1)
    ctx->pc = 0x1d7574u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
    // 0x1d7578: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D7578u;
    {
        const bool branch_taken_0x1d7578 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D757Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7578u;
        // 0x1d757c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7578) {
            ctx->pc = 0x1D7590u;
            goto label_1d7590;
        }
    }
    ctx->pc = 0x1D7580u;
    // 0x1d7580: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D7580u;
    {
        const bool branch_taken_0x1d7580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D7584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7580u;
        // 0x1d7584: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7580) {
            ctx->pc = 0x1D75B8u;
            goto label_1d75b8;
        }
    }
    ctx->pc = 0x1D7588u;
    // 0x1d7588: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x1D7588u;
    {
        const bool branch_taken_0x1d7588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D758Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7588u;
        // 0x1d758c: 0x8e263034  lw          $a2, 0x3034($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7588) {
            ctx->pc = 0x1D78BCu;
            goto label_1d78bc;
        }
    }
    ctx->pc = 0x1D7590u;
label_1d7590:
    // 0x1d7590: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d7590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7594: 0xc0775dc  jal         func_1DD770
    ctx->pc = 0x1D7594u;
    SET_GPR_U32(ctx, 31, 0x1D759Cu);
    ctx->pc = 0x1D7598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7594u;
    // 0x1d7598: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD770u, 0x1D7594u, 0x1D759Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D759Cu;
label_1d759c:
    // 0x1d759c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d759cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d75a0: 0xc0776c4  jal         func_1DDB10
    ctx->pc = 0x1D75A0u;
    SET_GPR_U32(ctx, 31, 0x1D75A8u);
    ctx->pc = 0x1D75A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D75A0u;
    // 0x1d75a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDB10u, 0x1D75A0u, 0x1D75A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D75A8u;
label_1d75a8:
    // 0x1d75a8: 0x92223025  lbu         $v0, 0x3025($s1)
    ctx->pc = 0x1d75a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
    // 0x1d75ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d75acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d75b0: 0xa2223025  sb          $v0, 0x3025($s1)
    ctx->pc = 0x1d75b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d75b4: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1d75b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_1d75b8:
    // 0x1d75b8: 0x8c627a2c  lw          $v0, 0x7A2C($v1)
    ctx->pc = 0x1d75b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31276)));
    // 0x1d75bc: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1d75bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1d75c0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D75C0u;
    {
        const bool branch_taken_0x1d75c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D75C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D75C0u;
        // 0x1d75c4: 0x24647a2c  addiu       $a0, $v1, 0x7A2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 31276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d75c0) {
            ctx->pc = 0x1D7604u;
            goto label_1d7604;
        }
    }
    ctx->pc = 0x1D75C8u;
    // 0x1d75c8: 0xdc82fc14  ld          $v0, -0x3EC($a0)
    ctx->pc = 0x1d75c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 4294966292)));
    // 0x1d75cc: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1d75ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d75d0: 0x31f38  dsll        $v1, $v1, 28
    ctx->pc = 0x1d75d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 28);
    // 0x1d75d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d75d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d75d8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D75D8u;
    {
        const bool branch_taken_0x1d75d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D75DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D75D8u;
        // 0x1d75dc: 0x9e223020  lwu         $v0, 0x3020($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d75d8) {
            ctx->pc = 0x1D7608u;
            goto label_1d7608;
        }
    }
    ctx->pc = 0x1D75E0u;
    // 0x1d75e0: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1d75e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x1d75e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d75e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d75e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D75E8u;
    {
        const bool branch_taken_0x1d75e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D75ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D75E8u;
        // 0x1d75ec: 0x8e233020  lw          $v1, 0x3020($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d75e8) {
            ctx->pc = 0x1D75FCu;
            goto label_1d75fc;
        }
    }
    ctx->pc = 0x1D75F0u;
    // 0x1d75f0: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1d75f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1d75f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D75F4u;
    {
        const bool branch_taken_0x1d75f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D75F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D75F4u;
        // 0x1d75f8: 0x621024  and         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d75f4) {
            ctx->pc = 0x1D7600u;
            goto label_1d7600;
        }
    }
    ctx->pc = 0x1D75FCu;
label_1d75fc:
    // 0x1d75fc: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x1d75fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_1d7600:
    // 0x1d7600: 0xae223020  sw          $v0, 0x3020($s1)
    ctx->pc = 0x1d7600u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12320), GPR_U32(ctx, 2));
label_1d7604:
    // 0x1d7604: 0x9e223020  lwu         $v0, 0x3020($s1)
    ctx->pc = 0x1d7604u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12320)));
label_1d7608:
    // 0x1d7608: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1d7608u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x1d760c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d760cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d7610: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D7610u;
    {
        const bool branch_taken_0x1d7610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7610u;
        // 0x1d7614: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7610) {
            ctx->pc = 0x1D7628u;
            goto label_1d7628;
        }
    }
    ctx->pc = 0x1D7618u;
    // 0x1d7618: 0xc077398  jal         func_1DCE60
    ctx->pc = 0x1D7618u;
    SET_GPR_U32(ctx, 31, 0x1D7620u);
    ctx->pc = 0x1D761Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7618u;
    // 0x1d761c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCE60u, 0x1D7618u, 0x1D7620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7620u;
label_1d7620:
    // 0x1d7620: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x1D7620u;
    {
        const bool branch_taken_0x1d7620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7620u;
        // 0x1d7624: 0x8e263034  lw          $a2, 0x3034($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7620) {
            ctx->pc = 0x1D78BCu;
            goto label_1d78bc;
        }
    }
    ctx->pc = 0x1D7628u;
label_1d7628:
    // 0x1d7628: 0x3402cc00  ori         $v0, $zero, 0xCC00
    ctx->pc = 0x1d7628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52224);
    // 0x1d762c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1d762cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1d7630: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x1d7630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x1d7634: 0x21338  dsll        $v0, $v0, 12
    ctx->pc = 0x1d7634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 12);
    // 0x1d7638: 0x246374a0  addiu       $v1, $v1, 0x74A0
    ctx->pc = 0x1d7638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x1d763c: 0xdc6401b0  ld          $a0, 0x1B0($v1)
    ctx->pc = 0x1d763cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 432)));
    // 0x1d7640: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1d7640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1d7644: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D7644u;
    {
        const bool branch_taken_0x1d7644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7644) {
            ctx->pc = 0x1D76A4u;
            goto label_1d76a4;
        }
    }
    ctx->pc = 0x1D764Cu;
    // 0x1d764c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d764cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7650: 0xc0775dc  jal         func_1DD770
    ctx->pc = 0x1D7650u;
    SET_GPR_U32(ctx, 31, 0x1D7658u);
    ctx->pc = 0x1D7654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7650u;
    // 0x1d7654: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD770u, 0x1D7650u, 0x1D7658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7658u;
label_1d7658:
    // 0x1d7658: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d7658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d765c: 0xc0776c4  jal         func_1DDB10
    ctx->pc = 0x1D765Cu;
    SET_GPR_U32(ctx, 31, 0x1D7664u);
    ctx->pc = 0x1D7660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D765Cu;
    // 0x1d7660: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDB10u, 0x1D765Cu, 0x1D7664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7664u;
label_1d7664:
    // 0x1d7664: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d7664u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d7668: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d766c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d766cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d7670: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x1d7670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x1d7674: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1d7674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d7678: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1d7678u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d767c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d767cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7680: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1D7680u;
    SET_GPR_U32(ctx, 31, 0x1D7688u);
    ctx->pc = 0x1D7684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7680u;
    // 0x1d7684: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1D7680u, 0x1D7688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7688u;
label_1d7688:
    // 0x1d7688: 0x8e233034  lw          $v1, 0x3034($s1)
    ctx->pc = 0x1d7688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d768c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D768Cu;
    {
        const bool branch_taken_0x1d768c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D768Cu;
        // 0x1d7690: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d768c) {
            ctx->pc = 0x1D7698u;
            goto label_1d7698;
        }
    }
    ctx->pc = 0x1D7694u;
    // 0x1d7694: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d7694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d7698:
    // 0x1d7698: 0xa2203025  sb          $zero, 0x3025($s1)
    ctx->pc = 0x1d7698u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d769c: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x1D769Cu;
    {
        const bool branch_taken_0x1d769c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D76A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D769Cu;
        // 0x1d76a0: 0xa2223024  sb          $v0, 0x3024($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12324), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d769c) {
            ctx->pc = 0x1D78B8u;
            goto label_1d78b8;
        }
    }
    ctx->pc = 0x1D76A4u;
label_1d76a4:
    // 0x1d76a4: 0x3402cc00  ori         $v0, $zero, 0xCC00
    ctx->pc = 0x1d76a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52224);
    // 0x1d76a8: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1d76a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1d76ac: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x1d76acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x1d76b0: 0x212b8  dsll        $v0, $v0, 10
    ctx->pc = 0x1d76b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 10);
    // 0x1d76b4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1d76b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1d76b8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D76B8u;
    {
        const bool branch_taken_0x1d76b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D76BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D76B8u;
        // 0x1d76bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d76b8) {
            ctx->pc = 0x1D7708u;
            goto label_1d7708;
        }
    }
    ctx->pc = 0x1D76C0u;
    // 0x1d76c0: 0xc0775dc  jal         func_1DD770
    ctx->pc = 0x1D76C0u;
    SET_GPR_U32(ctx, 31, 0x1D76C8u);
    ctx->pc = 0x1D76C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D76C0u;
    // 0x1d76c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD770u, 0x1D76C0u, 0x1D76C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D76C8u;
label_1d76c8:
    // 0x1d76c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d76c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d76cc: 0xc0776c4  jal         func_1DDB10
    ctx->pc = 0x1D76CCu;
    SET_GPR_U32(ctx, 31, 0x1D76D4u);
    ctx->pc = 0x1D76D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D76CCu;
    // 0x1d76d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDB10u, 0x1D76CCu, 0x1D76D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D76D4u;
label_1d76d4:
    // 0x1d76d4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d76d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d76d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d76d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d76dc: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d76dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d76e0: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x1d76e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x1d76e4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1d76e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d76e8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1d76e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d76ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d76ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d76f0: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1D76F0u;
    SET_GPR_U32(ctx, 31, 0x1D76F8u);
    ctx->pc = 0x1D76F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D76F0u;
    // 0x1d76f4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1D76F0u, 0x1D76F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D76F8u;
label_1d76f8:
    // 0x1d76f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d76f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d76fc: 0xa2203025  sb          $zero, 0x3025($s1)
    ctx->pc = 0x1d76fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d7700: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x1D7700u;
    {
        const bool branch_taken_0x1d7700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7700u;
        // 0x1d7704: 0xa2233024  sb          $v1, 0x3024($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12324), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7700) {
            ctx->pc = 0x1D78B8u;
            goto label_1d78b8;
        }
    }
    ctx->pc = 0x1D7708u;
label_1d7708:
    // 0x1d7708: 0xdc6301a0  ld          $v1, 0x1A0($v1)
    ctx->pc = 0x1d7708u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 416)));
    // 0x1d770c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1d770cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1d7710: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d7710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d7714: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x1D7714u;
    {
        const bool branch_taken_0x1d7714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7714u;
        // 0x1d7718: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7714) {
            ctx->pc = 0x1D7804u;
            goto label_1d7804;
        }
    }
    ctx->pc = 0x1D771Cu;
    // 0x1d771c: 0x8e223034  lw          $v0, 0x3034($s1)
    ctx->pc = 0x1d771cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d7720: 0x8e233030  lw          $v1, 0x3030($s1)
    ctx->pc = 0x1d7720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12336)));
    // 0x1d7724: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1d7724u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1d7728: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1D7728u;
    {
        const bool branch_taken_0x1d7728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7728u;
        // 0x1d772c: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7728) {
            ctx->pc = 0x1D77D8u;
            goto label_1d77d8;
        }
    }
    ctx->pc = 0x1D7730u;
    // 0x1d7730: 0x24509b70  addiu       $s0, $v0, -0x6490
    ctx->pc = 0x1d7730u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x1d7734: 0xc07e9c4  jal         func_1FA710
    ctx->pc = 0x1D7734u;
    SET_GPR_U32(ctx, 31, 0x1D773Cu);
    ctx->pc = 0x1D7738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7734u;
    // 0x1d7738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA710u, 0x1D7734u, 0x1D773Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D773Cu;
label_1d773c:
    // 0x1d773c: 0x28420064  slti        $v0, $v0, 0x64
    ctx->pc = 0x1d773cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x1d7740: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1D7740u;
    {
        const bool branch_taken_0x1d7740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7740u;
        // 0x1d7744: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7740) {
            ctx->pc = 0x1D77DCu;
            goto label_1d77dc;
        }
    }
    ctx->pc = 0x1D7748u;
    // 0x1d7748: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d774c: 0xc07ea1c  jal         func_1FA870
    ctx->pc = 0x1D774Cu;
    SET_GPR_U32(ctx, 31, 0x1D7754u);
    ctx->pc = 0x1D7750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D774Cu;
    // 0x1d7750: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA870u, 0x1D774Cu, 0x1D7754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7754u;
label_1d7754:
    // 0x1d7754: 0x8e223034  lw          $v0, 0x3034($s1)
    ctx->pc = 0x1d7754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d7758: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d7758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d775c: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x1d775cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x1d7760: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d7760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7764: 0xc077486  jal         func_1DD218
    ctx->pc = 0x1D7764u;
    SET_GPR_U32(ctx, 31, 0x1D776Cu);
    ctx->pc = 0x1D7768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7764u;
    // 0x1d7768: 0xae223034  sw          $v0, 0x3034($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12340), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD218u, 0x1D7764u, 0x1D776Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D776Cu;
label_1d776c:
    // 0x1d776c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d776cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7770: 0xc077644  jal         func_1DD910
    ctx->pc = 0x1D7770u;
    SET_GPR_U32(ctx, 31, 0x1D7778u);
    ctx->pc = 0x1D7774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7770u;
    // 0x1d7774: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD910u, 0x1D7770u, 0x1D7778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7778u;
label_1d7778:
    // 0x1d7778: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d7778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d777c: 0xc077568  jal         func_1DD5A0
    ctx->pc = 0x1D777Cu;
    SET_GPR_U32(ctx, 31, 0x1D7784u);
    ctx->pc = 0x1D7780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D777Cu;
    // 0x1d7780: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD5A0u, 0x1D777Cu, 0x1D7784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7784u;
label_1d7784:
    // 0x1d7784: 0x8e223034  lw          $v0, 0x3034($s1)
    ctx->pc = 0x1d7784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d7788: 0x8e233030  lw          $v1, 0x3030($s1)
    ctx->pc = 0x1d7788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12336)));
    // 0x1d778c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1d778cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1d7790: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1D7790u;
    {
        const bool branch_taken_0x1d7790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7790) {
            ctx->pc = 0x1D7794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D7790u;
            // 0x1d7794: 0x8e223020  lw          $v0, 0x3020($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D77CCu;
            goto label_1d77cc;
        }
    }
    ctx->pc = 0x1D7798u;
    // 0x1d7798: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d7798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d779c: 0xc0775dc  jal         func_1DD770
    ctx->pc = 0x1D779Cu;
    SET_GPR_U32(ctx, 31, 0x1D77A4u);
    ctx->pc = 0x1D77A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D779Cu;
    // 0x1d77a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD770u, 0x1D779Cu, 0x1D77A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D77A4u;
label_1d77a4:
    // 0x1d77a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d77a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d77a8: 0xc0776c4  jal         func_1DDB10
    ctx->pc = 0x1D77A8u;
    SET_GPR_U32(ctx, 31, 0x1D77B0u);
    ctx->pc = 0x1D77ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D77A8u;
    // 0x1d77ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDB10u, 0x1D77A8u, 0x1D77B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D77B0u;
label_1d77b0:
    // 0x1d77b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d77b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d77b4: 0xc077610  jal         func_1DD840
    ctx->pc = 0x1D77B4u;
    SET_GPR_U32(ctx, 31, 0x1D77BCu);
    ctx->pc = 0x1D77B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D77B4u;
    // 0x1d77b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD840u, 0x1D77B4u, 0x1D77BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D77BCu;
label_1d77bc:
    // 0x1d77bc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d77bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d77c0: 0xa2203025  sb          $zero, 0x3025($s1)
    ctx->pc = 0x1d77c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d77c4: 0xa2223024  sb          $v0, 0x3024($s1)
    ctx->pc = 0x1d77c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12324), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d77c8: 0x8e223020  lw          $v0, 0x3020($s1)
    ctx->pc = 0x1d77c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12320)));
label_1d77cc:
    // 0x1d77cc: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x1d77ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x1d77d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d77d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d77d4: 0xae223020  sw          $v0, 0x3020($s1)
    ctx->pc = 0x1d77d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12320), GPR_U32(ctx, 2));
label_1d77d8:
    // 0x1d77d8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d77d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1d77dc:
    // 0x1d77dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d77dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d77e0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d77e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d77e4: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x1d77e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x1d77e8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1d77e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d77ec: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1d77ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d77f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d77f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d77f4: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1D77F4u;
    SET_GPR_U32(ctx, 31, 0x1D77FCu);
    ctx->pc = 0x1D77F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D77F4u;
    // 0x1d77f8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1D77F4u, 0x1D77FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D77FCu;
label_1d77fc:
    // 0x1d77fc: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1D77FCu;
    {
        const bool branch_taken_0x1d77fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D77FCu;
        // 0x1d7800: 0x8e263034  lw          $a2, 0x3034($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d77fc) {
            ctx->pc = 0x1D78BCu;
            goto label_1d78bc;
        }
    }
    ctx->pc = 0x1D7804u;
label_1d7804:
    // 0x1d7804: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d7804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d7808: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x1D7808u;
    {
        const bool branch_taken_0x1d7808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7808) {
            ctx->pc = 0x1D780Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D7808u;
            // 0x1d780c: 0x8e263034  lw          $a2, 0x3034($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D78BCu;
            goto label_1d78bc;
        }
    }
    ctx->pc = 0x1D7810u;
    // 0x1d7810: 0x8e223034  lw          $v0, 0x3034($s1)
    ctx->pc = 0x1d7810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d7814: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1D7814u;
    {
        const bool branch_taken_0x1d7814 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1D7818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7814u;
        // 0x1d7818: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7814) {
            ctx->pc = 0x1D7870u;
            goto label_1d7870;
        }
    }
    ctx->pc = 0x1D781Cu;
    // 0x1d781c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x1d781cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1d7820: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x1d7820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x1d7824: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1D7824u;
    SET_GPR_U32(ctx, 31, 0x1D782Cu);
    ctx->pc = 0x1D7828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7824u;
    // 0x1d7828: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1D7824u, 0x1D782Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D782Cu;
label_1d782c:
    // 0x1d782c: 0x8e223034  lw          $v0, 0x3034($s1)
    ctx->pc = 0x1d782cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d7830: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d7830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7834: 0x2442ff9c  addiu       $v0, $v0, -0x64
    ctx->pc = 0x1d7834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x1d7838: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d7838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d783c: 0xc077486  jal         func_1DD218
    ctx->pc = 0x1D783Cu;
    SET_GPR_U32(ctx, 31, 0x1D7844u);
    ctx->pc = 0x1D7840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D783Cu;
    // 0x1d7840: 0xae223034  sw          $v0, 0x3034($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12340), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD218u, 0x1D783Cu, 0x1D7844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7844u;
label_1d7844:
    // 0x1d7844: 0x8e223034  lw          $v0, 0x3034($s1)
    ctx->pc = 0x1d7844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d7848: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D7848u;
    {
        const bool branch_taken_0x1d7848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D784Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7848u;
        // 0x1d784c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7848) {
            ctx->pc = 0x1D7898u;
            goto label_1d7898;
        }
    }
    ctx->pc = 0x1D7850u;
    // 0x1d7850: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d7850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7854: 0xc077644  jal         func_1DD910
    ctx->pc = 0x1D7854u;
    SET_GPR_U32(ctx, 31, 0x1D785Cu);
    ctx->pc = 0x1D7858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7854u;
    // 0x1d7858: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD910u, 0x1D7854u, 0x1D785Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D785Cu;
label_1d785c:
    // 0x1d785c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d785cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7860: 0xc077568  jal         func_1DD5A0
    ctx->pc = 0x1D7860u;
    SET_GPR_U32(ctx, 31, 0x1D7868u);
    ctx->pc = 0x1D7864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7860u;
    // 0x1d7864: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD5A0u, 0x1D7860u, 0x1D7868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7868u;
label_1d7868:
    // 0x1d7868: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D7868u;
    {
        const bool branch_taken_0x1d7868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D786Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7868u;
        // 0x1d786c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7868) {
            ctx->pc = 0x1D7898u;
            goto label_1d7898;
        }
    }
    ctx->pc = 0x1D7870u;
label_1d7870:
    // 0x1d7870: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d7870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7874: 0xc0775dc  jal         func_1DD770
    ctx->pc = 0x1D7874u;
    SET_GPR_U32(ctx, 31, 0x1D787Cu);
    ctx->pc = 0x1D7878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7874u;
    // 0x1d7878: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD770u, 0x1D7874u, 0x1D787Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D787Cu;
label_1d787c:
    // 0x1d787c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d787cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7880: 0xc0776c4  jal         func_1DDB10
    ctx->pc = 0x1D7880u;
    SET_GPR_U32(ctx, 31, 0x1D7888u);
    ctx->pc = 0x1D7884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7880u;
    // 0x1d7884: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDB10u, 0x1D7880u, 0x1D7888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7888u;
label_1d7888:
    // 0x1d7888: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d7888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d788c: 0xa2203025  sb          $zero, 0x3025($s1)
    ctx->pc = 0x1d788cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d7890: 0xa2223024  sb          $v0, 0x3024($s1)
    ctx->pc = 0x1d7890u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12324), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d7894: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d7894u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1d7898:
    // 0x1d7898: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d789c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d789cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d78a0: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x1d78a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x1d78a4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1d78a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d78a8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1d78a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d78ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d78acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d78b0: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1D78B0u;
    SET_GPR_U32(ctx, 31, 0x1D78B8u);
    ctx->pc = 0x1D78B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D78B0u;
    // 0x1d78b4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1D78B0u, 0x1D78B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D78B8u;
label_1d78b8:
    // 0x1d78b8: 0x8e263034  lw          $a2, 0x3034($s1)
    ctx->pc = 0x1d78b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
label_1d78bc:
    // 0x1d78bc: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D78BCu;
    {
        const bool branch_taken_0x1d78bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D78C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D78BCu;
        // 0x1d78c0: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d78bc) {
            ctx->pc = 0x1D78CCu;
            goto label_1d78cc;
        }
    }
    ctx->pc = 0x1D78C4u;
    // 0x1d78c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D78C4u;
    {
        const bool branch_taken_0x1d78c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D78C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D78C4u;
        // 0x1d78c8: 0xc23018  mult        $a2, $a2, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d78c4) {
            ctx->pc = 0x1D78D0u;
            goto label_1d78d0;
        }
    }
    ctx->pc = 0x1D78CCu;
label_1d78cc:
    // 0x1d78cc: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x1d78ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1d78d0:
    // 0x1d78d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d78d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d78d4: 0xc077592  jal         func_1DD648
    ctx->pc = 0x1D78D4u;
    SET_GPR_U32(ctx, 31, 0x1D78DCu);
    ctx->pc = 0x1D78D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D78D4u;
    // 0x1d78d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD648u, 0x1D78D4u, 0x1D78DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D78DCu;
label_1d78dc:
    // 0x1d78dc: 0x8e263034  lw          $a2, 0x3034($s1)
    ctx->pc = 0x1d78dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d78e0: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D78E0u;
    {
        const bool branch_taken_0x1d78e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D78E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D78E0u;
        // 0x1d78e4: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d78e0) {
            ctx->pc = 0x1D78F0u;
            goto label_1d78f0;
        }
    }
    ctx->pc = 0x1D78E8u;
    // 0x1d78e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D78E8u;
    {
        const bool branch_taken_0x1d78e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D78ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D78E8u;
        // 0x1d78ec: 0xc23018  mult        $a2, $a2, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d78e8) {
            ctx->pc = 0x1D78F4u;
            goto label_1d78f4;
        }
    }
    ctx->pc = 0x1D78F0u;
label_1d78f0:
    // 0x1d78f0: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1d78f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d78f4:
    // 0x1d78f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d78f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d78f8: 0xc077592  jal         func_1DD648
    ctx->pc = 0x1D78F8u;
    SET_GPR_U32(ctx, 31, 0x1D7900u);
    ctx->pc = 0x1D78FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D78F8u;
    // 0x1d78fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD648u, 0x1D78F8u, 0x1D7900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7900u;
label_1d7900:
    // 0x1d7900: 0x8e263034  lw          $a2, 0x3034($s1)
    ctx->pc = 0x1d7900u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d7904: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7904u;
    {
        const bool branch_taken_0x1d7904 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7904u;
        // 0x1d7908: 0x61100  sll         $v0, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7904) {
            ctx->pc = 0x1D7914u;
            goto label_1d7914;
        }
    }
    ctx->pc = 0x1D790Cu;
    // 0x1d790c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D790Cu;
    {
        const bool branch_taken_0x1d790c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D790Cu;
        // 0x1d7910: 0x463023  subu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d790c) {
            ctx->pc = 0x1D7918u;
            goto label_1d7918;
        }
    }
    ctx->pc = 0x1D7914u;
label_1d7914:
    // 0x1d7914: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x1d7914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1d7918:
    // 0x1d7918: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d7918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d791c: 0xc077592  jal         func_1DD648
    ctx->pc = 0x1D791Cu;
    SET_GPR_U32(ctx, 31, 0x1D7924u);
    ctx->pc = 0x1D7920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D791Cu;
    // 0x1d7920: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD648u, 0x1D791Cu, 0x1D7924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7924u;
label_1d7924:
    // 0x1d7924: 0x8e263034  lw          $a2, 0x3034($s1)
    ctx->pc = 0x1d7924u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d7928: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7928u;
    {
        const bool branch_taken_0x1d7928 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D792Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7928u;
        // 0x1d792c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7928) {
            ctx->pc = 0x1D7938u;
            goto label_1d7938;
        }
    }
    ctx->pc = 0x1D7930u;
    // 0x1d7930: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7930u;
    {
        const bool branch_taken_0x1d7930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7930u;
        // 0x1d7934: 0xc23018  mult        $a2, $a2, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7930) {
            ctx->pc = 0x1D793Cu;
            goto label_1d793c;
        }
    }
    ctx->pc = 0x1D7938u;
label_1d7938:
    // 0x1d7938: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1d7938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d793c:
    // 0x1d793c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d793cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7940: 0xc077592  jal         func_1DD648
    ctx->pc = 0x1D7940u;
    SET_GPR_U32(ctx, 31, 0x1D7948u);
    ctx->pc = 0x1D7944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7940u;
    // 0x1d7944: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD648u, 0x1D7940u, 0x1D7948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7948u;
label_1d7948:
    // 0x1d7948: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x1d7948u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d794c: 0x8e223034  lw          $v0, 0x3034($s1)
    ctx->pc = 0x1d794cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d7950: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1d7950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d7954: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d7954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7958: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d7958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d795c: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x1d795cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d7960: 0xc077592  jal         func_1DD648
    ctx->pc = 0x1D7960u;
    SET_GPR_U32(ctx, 31, 0x1D7968u);
    ctx->pc = 0x1D7964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7960u;
    // 0x1d7964: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD648u, 0x1D7960u, 0x1D7968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7968u;
label_1d7968:
    // 0x1d7968: 0x8e223034  lw          $v0, 0x3034($s1)
    ctx->pc = 0x1d7968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d796c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d796cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7970: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1d7970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d7974: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x1d7974u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d7978: 0xc077592  jal         func_1DD648
    ctx->pc = 0x1D7978u;
    SET_GPR_U32(ctx, 31, 0x1D7980u);
    ctx->pc = 0x1D797Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7978u;
    // 0x1d797c: 0x202300a  movz        $a2, $s0, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD648u, 0x1D7978u, 0x1D7980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7980u;
label_1d7980:
    // 0x1d7980: 0x8e263034  lw          $a2, 0x3034($s1)
    ctx->pc = 0x1d7980u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d7984: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7984u;
    {
        const bool branch_taken_0x1d7984 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7984u;
        // 0x1d7988: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7984) {
            ctx->pc = 0x1D7994u;
            goto label_1d7994;
        }
    }
    ctx->pc = 0x1D798Cu;
    // 0x1d798c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D798Cu;
    {
        const bool branch_taken_0x1d798c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D798Cu;
        // 0x1d7990: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d798c) {
            ctx->pc = 0x1D7998u;
            goto label_1d7998;
        }
    }
    ctx->pc = 0x1D7994u;
label_1d7994:
    // 0x1d7994: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1d7994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d7998:
    // 0x1d7998: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d7998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d799c: 0xc077592  jal         func_1DD648
    ctx->pc = 0x1D799Cu;
    SET_GPR_U32(ctx, 31, 0x1D79A4u);
    ctx->pc = 0x1D79A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D799Cu;
    // 0x1d79a0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD648u, 0x1D799Cu, 0x1D79A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D79A4u;
label_1d79a4:
    // 0x1d79a4: 0x8e223034  lw          $v0, 0x3034($s1)
    ctx->pc = 0x1d79a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d79a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d79a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d79ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d79acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d79b0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1d79b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1d79b4: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x1d79b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d79b8: 0xc077592  jal         func_1DD648
    ctx->pc = 0x1D79B8u;
    SET_GPR_U32(ctx, 31, 0x1D79C0u);
    ctx->pc = 0x1D79BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D79B8u;
    // 0x1d79bc: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD648u, 0x1D79B8u, 0x1D79C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D79C0u;
label_1d79c0:
    // 0x1d79c0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d79c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d79c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d79c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d79c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d79c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d79cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D79CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D79D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D79CCu;
        // 0x1d79d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D79CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D79D4u;
    // 0x1d79d4: 0x0  nop
    ctx->pc = 0x1d79d4u;
    // NOP
    ctx->pc = 0x1d79d8u;
}
