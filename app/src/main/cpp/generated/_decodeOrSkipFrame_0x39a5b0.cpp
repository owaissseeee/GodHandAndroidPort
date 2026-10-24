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

// Function: _decodeOrSkipFrame
// Address: 0x39a5b0 - 0x39a720
void _decodeOrSkipFrame_0x39a5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_decodeOrSkipFrame_0x39a5b0");
#endif

    switch (ctx->pc) {
        case 0x39a5b0u: goto label_39a5b0;
        case 0x39a5b4u: goto label_39a5b4;
        case 0x39a5b8u: goto label_39a5b8;
        case 0x39a5bcu: goto label_39a5bc;
        case 0x39a5c0u: goto label_39a5c0;
        case 0x39a5c4u: goto label_39a5c4;
        case 0x39a5c8u: goto label_39a5c8;
        case 0x39a5ccu: goto label_39a5cc;
        case 0x39a5d0u: goto label_39a5d0;
        case 0x39a5d4u: goto label_39a5d4;
        case 0x39a5d8u: goto label_39a5d8;
        case 0x39a5dcu: goto label_39a5dc;
        case 0x39a5e0u: goto label_39a5e0;
        case 0x39a5e4u: goto label_39a5e4;
        case 0x39a5e8u: goto label_39a5e8;
        case 0x39a5ecu: goto label_39a5ec;
        case 0x39a5f0u: goto label_39a5f0;
        case 0x39a5f4u: goto label_39a5f4;
        case 0x39a5f8u: goto label_39a5f8;
        case 0x39a5fcu: goto label_39a5fc;
        case 0x39a600u: goto label_39a600;
        case 0x39a604u: goto label_39a604;
        case 0x39a608u: goto label_39a608;
        case 0x39a60cu: goto label_39a60c;
        case 0x39a610u: goto label_39a610;
        case 0x39a614u: goto label_39a614;
        case 0x39a618u: goto label_39a618;
        case 0x39a61cu: goto label_39a61c;
        case 0x39a620u: goto label_39a620;
        case 0x39a624u: goto label_39a624;
        case 0x39a628u: goto label_39a628;
        case 0x39a62cu: goto label_39a62c;
        case 0x39a630u: goto label_39a630;
        case 0x39a634u: goto label_39a634;
        case 0x39a638u: goto label_39a638;
        case 0x39a63cu: goto label_39a63c;
        case 0x39a640u: goto label_39a640;
        case 0x39a644u: goto label_39a644;
        case 0x39a648u: goto label_39a648;
        case 0x39a64cu: goto label_39a64c;
        case 0x39a650u: goto label_39a650;
        case 0x39a654u: goto label_39a654;
        case 0x39a658u: goto label_39a658;
        case 0x39a65cu: goto label_39a65c;
        case 0x39a660u: goto label_39a660;
        case 0x39a664u: goto label_39a664;
        case 0x39a668u: goto label_39a668;
        case 0x39a66cu: goto label_39a66c;
        case 0x39a670u: goto label_39a670;
        case 0x39a674u: goto label_39a674;
        case 0x39a678u: goto label_39a678;
        case 0x39a67cu: goto label_39a67c;
        case 0x39a680u: goto label_39a680;
        case 0x39a684u: goto label_39a684;
        case 0x39a688u: goto label_39a688;
        case 0x39a68cu: goto label_39a68c;
        case 0x39a690u: goto label_39a690;
        case 0x39a694u: goto label_39a694;
        case 0x39a698u: goto label_39a698;
        case 0x39a69cu: goto label_39a69c;
        case 0x39a6a0u: goto label_39a6a0;
        case 0x39a6a4u: goto label_39a6a4;
        case 0x39a6a8u: goto label_39a6a8;
        case 0x39a6acu: goto label_39a6ac;
        case 0x39a6b0u: goto label_39a6b0;
        case 0x39a6b4u: goto label_39a6b4;
        case 0x39a6b8u: goto label_39a6b8;
        case 0x39a6bcu: goto label_39a6bc;
        case 0x39a6c0u: goto label_39a6c0;
        case 0x39a6c4u: goto label_39a6c4;
        case 0x39a6c8u: goto label_39a6c8;
        case 0x39a6ccu: goto label_39a6cc;
        case 0x39a6d0u: goto label_39a6d0;
        case 0x39a6d4u: goto label_39a6d4;
        case 0x39a6d8u: goto label_39a6d8;
        case 0x39a6dcu: goto label_39a6dc;
        case 0x39a6e0u: goto label_39a6e0;
        case 0x39a6e4u: goto label_39a6e4;
        case 0x39a6e8u: goto label_39a6e8;
        case 0x39a6ecu: goto label_39a6ec;
        case 0x39a6f0u: goto label_39a6f0;
        case 0x39a6f4u: goto label_39a6f4;
        case 0x39a6f8u: goto label_39a6f8;
        case 0x39a6fcu: goto label_39a6fc;
        case 0x39a700u: goto label_39a700;
        case 0x39a704u: goto label_39a704;
        case 0x39a708u: goto label_39a708;
        case 0x39a70cu: goto label_39a70c;
        case 0x39a710u: goto label_39a710;
        case 0x39a714u: goto label_39a714;
        case 0x39a718u: goto label_39a718;
        case 0x39a71cu: goto label_39a71c;
        default: break;
    }

    ctx->pc = 0x39a5b0u;

label_39a5b0:
    // 0x39a5b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x39a5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_39a5b4:
    // 0x39a5b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x39a5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_39a5b8:
    // 0x39a5b8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x39a5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_39a5bc:
    // 0x39a5bc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x39a5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_39a5c0:
    // 0x39a5c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x39a5c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39a5c4:
    // 0x39a5c4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x39a5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_39a5c8:
    // 0x39a5c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x39a5c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39a5cc:
    // 0x39a5cc: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x39a5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_39a5d0:
    // 0x39a5d0: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x39a5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_39a5d4:
    // 0x39a5d4: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
label_39a5d8:
    if (ctx->pc == 0x39A5D8u) {
        ctx->pc = 0x39A5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A5D4u;
        // 0x39a5d8: 0x8e510040  lw          $s1, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A5DCu;
        goto label_39a5dc;
    }
    ctx->pc = 0x39A5D4u;
    {
        const bool branch_taken_0x39a5d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x39A5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A5D4u;
        // 0x39a5d8: 0x8e510040  lw          $s1, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a5d4) {
            ctx->pc = 0x39A5E8u;
            goto label_39a5e8;
        }
    }
    ctx->pc = 0x39A5DCu;
label_39a5dc:
    // 0x39a5dc: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x39a5dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_39a5e0:
    // 0x39a5e0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_39a5e4:
    if (ctx->pc == 0x39A5E4u) {
        ctx->pc = 0x39A5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A5E0u;
        // 0x39a5e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A5E8u;
        goto label_39a5e8;
    }
    ctx->pc = 0x39A5E0u;
    {
        const bool branch_taken_0x39a5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A5E0u;
        // 0x39a5e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a5e0) {
            ctx->pc = 0x39A624u;
            goto label_39a624;
        }
    }
    ctx->pc = 0x39A5E8u;
label_39a5e8:
    // 0x39a5e8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x39a5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_39a5ec:
    // 0x39a5ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_39a5f0:
    if (ctx->pc == 0x39A5F0u) {
        ctx->pc = 0x39A5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A5ECu;
        // 0x39a5f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A5F4u;
        goto label_39a5f4;
    }
    ctx->pc = 0x39A5ECu;
    {
        const bool branch_taken_0x39a5ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39A5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A5ECu;
        // 0x39a5f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a5ec) {
            ctx->pc = 0x39A600u;
            goto label_39a600;
        }
    }
    ctx->pc = 0x39A5F4u;
label_39a5f4:
    // 0x39a5f4: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x39a5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_39a5f8:
    // 0x39a5f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39a5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39a5fc:
    // 0x39a5fc: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x39a5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_39a600:
    // 0x39a600: 0xc0e68be  jal         func_39A2F8
label_39a604:
    if (ctx->pc == 0x39A604u) {
        ctx->pc = 0x39A604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A600u;
        // 0x39a604: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A608u;
        goto label_39a608;
    }
    ctx->pc = 0x39A600u;
    SET_GPR_U32(ctx, 31, 0x39A608u);
    ctx->pc = 0x39A604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A600u;
    // 0x39a604: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A2F8u, 0x39A600u, 0x39A608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A608u;
label_39a608:
    // 0x39a608: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_39a60c:
    if (ctx->pc == 0x39A60Cu) {
        ctx->pc = 0x39A60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A608u;
        // 0x39a60c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A610u;
        goto label_39a610;
    }
    ctx->pc = 0x39A608u;
    {
        const bool branch_taken_0x39a608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A608u;
        // 0x39a60c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a608) {
            ctx->pc = 0x39A61Cu;
            goto label_39a61c;
        }
    }
    ctx->pc = 0x39A610u;
label_39a610:
    // 0x39a610: 0xc0e6b36  jal         func_39ACD8
label_39a614:
    if (ctx->pc == 0x39A614u) {
        ctx->pc = 0x39A614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A610u;
        // 0x39a614: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A618u;
        goto label_39a618;
    }
    ctx->pc = 0x39A610u;
    SET_GPR_U32(ctx, 31, 0x39A618u);
    ctx->pc = 0x39A614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A610u;
    // 0x39a614: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39ACD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39ACD8u, 0x39A610u, 0x39A618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A618u;
label_39a618:
    // 0x39a618: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x39a618u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_39a61c:
    // 0x39a61c: 0x1000001b  b           . + 4 + (0x1B << 2)
label_39a620:
    if (ctx->pc == 0x39A620u) {
        ctx->pc = 0x39A620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A61Cu;
        // 0x39a620: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A624u;
        goto label_39a624;
    }
    ctx->pc = 0x39A61Cu;
    {
        const bool branch_taken_0x39a61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A61Cu;
        // 0x39a620: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a61c) {
            ctx->pc = 0x39A68Cu;
            goto label_39a68c;
        }
    }
    ctx->pc = 0x39A624u;
label_39a624:
    // 0x39a624: 0xc0e68be  jal         func_39A2F8
label_39a628:
    if (ctx->pc == 0x39A628u) {
        ctx->pc = 0x39A628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A624u;
        // 0x39a628: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A62Cu;
        goto label_39a62c;
    }
    ctx->pc = 0x39A624u;
    SET_GPR_U32(ctx, 31, 0x39A62Cu);
    ctx->pc = 0x39A628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A624u;
    // 0x39a628: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A2F8u, 0x39A624u, 0x39A62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A62Cu;
label_39a62c:
    // 0x39a62c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39a62cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39a630:
    // 0x39a630: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x39a630u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39a634:
    // 0x39a634: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
label_39a638:
    if (ctx->pc == 0x39A638u) {
        ctx->pc = 0x39A638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A634u;
        // 0x39a638: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A63Cu;
        goto label_39a63c;
    }
    ctx->pc = 0x39A634u;
    {
        const bool branch_taken_0x39a634 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A634u;
        // 0x39a638: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a634) {
            ctx->pc = 0x39A688u;
            goto label_39a688;
        }
    }
    ctx->pc = 0x39A63Cu;
label_39a63c:
    // 0x39a63c: 0x8e460040  lw          $a2, 0x40($s2)
    ctx->pc = 0x39a63cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_39a640:
    // 0x39a640: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
label_39a644:
    if (ctx->pc == 0x39A644u) {
        ctx->pc = 0x39A644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A640u;
        // 0x39a644: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A648u;
        goto label_39a648;
    }
    ctx->pc = 0x39A640u;
    {
        const bool branch_taken_0x39a640 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A640u;
        // 0x39a644: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a640) {
            ctx->pc = 0x39A68Cu;
            goto label_39a68c;
        }
    }
    ctx->pc = 0x39A648u;
label_39a648:
    // 0x39a648: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x39a648u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_39a64c:
    // 0x39a64c: 0x50e00010  beql        $a3, $zero, . + 4 + (0x10 << 2)
label_39a650:
    if (ctx->pc == 0x39A650u) {
        ctx->pc = 0x39A650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A64Cu;
        // 0x39a650: 0x8e220878  lw          $v0, 0x878($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A654u;
        goto label_39a654;
    }
    ctx->pc = 0x39A64Cu;
    {
        const bool branch_taken_0x39a64c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a64c) {
            ctx->pc = 0x39A650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A64Cu;
            // 0x39a650: 0x8e220878  lw          $v0, 0x878($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A690u;
            goto label_39a690;
        }
    }
    ctx->pc = 0x39A654u;
label_39a654:
    // 0x39a654: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x39a654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_39a658:
    // 0x39a658: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x39a658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_39a65c:
    // 0x39a65c: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x39a65cu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39a660:
    // 0x39a660: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x39a660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_39a664:
    // 0x39a664: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x39a664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_39a668:
    // 0x39a668: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39a668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39a66c:
    // 0x39a66c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x39a66cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_39a670:
    // 0x39a670: 0x624018  mult        $t0, $v1, $v0
    ctx->pc = 0x39a670u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_39a674:
    // 0x39a674: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x39a674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_39a678:
    // 0x39a678: 0xe0f809  jalr        $a3
label_39a67c:
    if (ctx->pc == 0x39A67Cu) {
        ctx->pc = 0x39A67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A678u;
        // 0x39a67c: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A680u;
        goto label_39a680;
    }
    ctx->pc = 0x39A678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x39A680u);
        ctx->pc = 0x39A67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A678u;
        // 0x39a67c: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A678u, 0x39A680u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39A680u;
label_39a680:
    // 0x39a680: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x39a680u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_39a684:
    // 0x39a684: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x39a684u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39a688:
    // 0x39a688: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x39a688u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39a68c:
    // 0x39a68c: 0x8e220878  lw          $v0, 0x878($s1)
    ctx->pc = 0x39a68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
label_39a690:
    // 0x39a690: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_39a694:
    if (ctx->pc == 0x39A694u) {
        ctx->pc = 0x39A694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A690u;
        // 0x39a694: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A698u;
        goto label_39a698;
    }
    ctx->pc = 0x39A690u;
    {
        const bool branch_taken_0x39a690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39A694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A690u;
        // 0x39a694: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a690) {
            ctx->pc = 0x39A704u;
            goto label_39a704;
        }
    }
    ctx->pc = 0x39A698u;
label_39a698:
    // 0x39a698: 0x8e250128  lw          $a1, 0x128($s1)
    ctx->pc = 0x39a698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_39a69c:
    // 0x39a69c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39a69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39a6a0:
    // 0x39a6a0: 0xc0e6e34  jal         func_39B8D0
label_39a6a4:
    if (ctx->pc == 0x39A6A4u) {
        ctx->pc = 0x39A6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A6A0u;
        // 0x39a6a4: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A6A8u;
        goto label_39a6a8;
    }
    ctx->pc = 0x39A6A0u;
    SET_GPR_U32(ctx, 31, 0x39A6A8u);
    ctx->pc = 0x39A6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A6A0u;
    // 0x39a6a4: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B8D0u, 0x39A6A0u, 0x39A6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A6A8u;
label_39a6a8:
    // 0x39a6a8: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x39a6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
label_39a6ac:
    // 0x39a6ac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x39a6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_39a6b0:
    // 0x39a6b0: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
label_39a6b4:
    if (ctx->pc == 0x39A6B4u) {
        ctx->pc = 0x39A6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A6B0u;
        // 0x39a6b4: 0x8e2300c0  lw          $v1, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A6B8u;
        goto label_39a6b8;
    }
    ctx->pc = 0x39A6B0u;
    {
        const bool branch_taken_0x39a6b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x39a6b0) {
            ctx->pc = 0x39A6B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A6B0u;
            // 0x39a6b4: 0x8e2300c0  lw          $v1, 0xC0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A6D0u;
            goto label_39a6d0;
        }
    }
    ctx->pc = 0x39A6B8u;
label_39a6b8:
    // 0x39a6b8: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
label_39a6bc:
    if (ctx->pc == 0x39A6BCu) {
        ctx->pc = 0x39A6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A6B8u;
        // 0x39a6bc: 0x8e2300c0  lw          $v1, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A6C0u;
        goto label_39a6c0;
    }
    ctx->pc = 0x39A6B8u;
    {
        const bool branch_taken_0x39a6b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x39a6b8) {
            ctx->pc = 0x39A6BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A6B8u;
            // 0x39a6bc: 0x8e2300c0  lw          $v1, 0xC0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A6D0u;
            goto label_39a6d0;
        }
    }
    ctx->pc = 0x39A6C0u;
label_39a6c0:
    // 0x39a6c0: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x39a6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
label_39a6c4:
    // 0x39a6c4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x39a6c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_39a6c8:
    // 0x39a6c8: 0xae220130  sw          $v0, 0x130($s1)
    ctx->pc = 0x39a6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 2));
label_39a6cc:
    // 0x39a6cc: 0x8e2300c0  lw          $v1, 0xC0($s1)
    ctx->pc = 0x39a6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_39a6d0:
    // 0x39a6d0: 0x8e220128  lw          $v0, 0x128($s1)
    ctx->pc = 0x39a6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_39a6d4:
    // 0x39a6d4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x39a6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_39a6d8:
    // 0x39a6d8: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x39a6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_39a6dc:
    // 0x39a6dc: 0x8e230130  lw          $v1, 0x130($s1)
    ctx->pc = 0x39a6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
label_39a6e0:
    // 0x39a6e0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_39a6e4:
    if (ctx->pc == 0x39A6E4u) {
        ctx->pc = 0x39A6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A6E0u;
        // 0x39a6e4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A6E8u;
        goto label_39a6e8;
    }
    ctx->pc = 0x39A6E0u;
    {
        const bool branch_taken_0x39a6e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39A6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A6E0u;
        // 0x39a6e4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a6e0) {
            ctx->pc = 0x39A704u;
            goto label_39a704;
        }
    }
    ctx->pc = 0x39A6E8u;
label_39a6e8:
    // 0x39a6e8: 0x8e220128  lw          $v0, 0x128($s1)
    ctx->pc = 0x39a6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_39a6ec:
    // 0x39a6ec: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x39a6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_39a6f0:
    // 0x39a6f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x39a6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_39a6f4:
    // 0x39a6f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x39a6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_39a6f8:
    // 0x39a6f8: 0xae220128  sw          $v0, 0x128($s1)
    ctx->pc = 0x39a6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 2));
label_39a6fc:
    // 0x39a6fc: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x39a6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_39a700:
    // 0x39a700: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x39a700u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39a704:
    // 0x39a704: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x39a704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_39a708:
    // 0x39a708: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x39a708u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_39a70c:
    // 0x39a70c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x39a70cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_39a710:
    // 0x39a710: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x39a710u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_39a714:
    // 0x39a714: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x39a714u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39a718:
    // 0x39a718: 0x3e00008  jr          $ra
label_39a71c:
    if (ctx->pc == 0x39A71Cu) {
        ctx->pc = 0x39A71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A718u;
        // 0x39a71c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A720u;
        goto label_fallthrough_0x39a718;
    }
    ctx->pc = 0x39A718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A718u;
        // 0x39a71c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x39a718:
    ctx->pc = 0x39A720u;
}
