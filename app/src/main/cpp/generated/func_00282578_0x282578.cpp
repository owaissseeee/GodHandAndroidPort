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

// Function: func_00282578
// Address: 0x282578 - 0x2826c8
void func_00282578_0x282578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00282578_0x282578");
#endif

    switch (ctx->pc) {
        case 0x282608u: goto label_282608;
        case 0x28261cu: goto label_28261c;
        case 0x28264cu: goto label_28264c;
        case 0x282660u: goto label_282660;
        case 0x2826a4u: goto label_2826a4;
        case 0x2826b8u: goto label_2826b8;
        default: break;
    }

    ctx->pc = 0x282578u;

    // 0x282578: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x282578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28257c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28257cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x282580: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x282580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x282584: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x282584u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282588: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x282588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28258c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28258cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282590: 0x920502f6  lbu         $a1, 0x2F6($s0)
    ctx->pc = 0x282590u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x282594: 0x920315b0  lbu         $v1, 0x15B0($s0)
    ctx->pc = 0x282594u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x282598: 0x2ca40008  sltiu       $a0, $a1, 0x8
    ctx->pc = 0x282598u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x28259c: 0x10800046  beqz        $a0, . + 4 + (0x46 << 2)
    ctx->pc = 0x28259Cu;
    {
        const bool branch_taken_0x28259c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2825A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28259Cu;
        // 0x2825a0: 0x43400b  movn        $t0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28259c) {
            ctx->pc = 0x2826B8u;
            goto label_2826b8;
        }
    }
    ctx->pc = 0x2825A4u;
    // 0x2825a4: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2825a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2825a8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2825a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2825ac: 0x244286f0  addiu       $v0, $v0, -0x7910
    ctx->pc = 0x2825acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936304));
    // 0x2825b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2825b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2825b4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2825b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2825b8: 0x800008  jr          $a0
    ctx->pc = 0x2825B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2825C0u: goto label_2825c0;
            case 0x2825E0u: goto label_2825e0;
            case 0x282614u: goto label_282614;
            case 0x282624u: goto label_282624;
            case 0x282658u: goto label_282658;
            case 0x28267Cu: goto label_28267c;
            case 0x2826B0u: goto label_2826b0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2825B8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2825C0u;
label_2825c0:
    // 0x2825c0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2825c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2825c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2825c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2825c8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2825c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2825cc: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2825ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2825d0: 0x8c450138  lw          $a1, 0x138($v0)
    ctx->pc = 0x2825d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
    // 0x2825d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2825d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2825d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2825D8u;
    {
        const bool branch_taken_0x2825d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2825DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2825D8u;
        // 0x2825dc: 0x8c46013c  lw          $a2, 0x13C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2825d8) {
            ctx->pc = 0x2825FCu;
            goto label_2825fc;
        }
    }
    ctx->pc = 0x2825E0u;
label_2825e0:
    // 0x2825e0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2825e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2825e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2825e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2825e8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2825e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2825ec: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2825ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2825f0: 0x8c450140  lw          $a1, 0x140($v0)
    ctx->pc = 0x2825f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
    // 0x2825f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2825f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2825f8: 0x8c460144  lw          $a2, 0x144($v0)
    ctx->pc = 0x2825f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 324)));
label_2825fc:
    // 0x2825fc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2825fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x282600: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x282600u;
    SET_GPR_U32(ctx, 31, 0x282608u);
    ctx->pc = 0x282604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282600u;
    // 0x282604: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x282600u, 0x282608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282608u;
label_282608:
    // 0x282608: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x282608u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x28260c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28260cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x282610: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x282610u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_282614:
    // 0x282614: 0xc055f06  jal         func_157C18
    ctx->pc = 0x282614u;
    SET_GPR_U32(ctx, 31, 0x28261Cu);
    ctx->pc = 0x282618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282614u;
    // 0x282618: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x282614u, 0x28261Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28261Cu;
label_28261c:
    // 0x28261c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x28261Cu;
    {
        const bool branch_taken_0x28261c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28261Cu;
        // 0x282620: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28261c) {
            ctx->pc = 0x2826BCu;
            goto label_2826bc;
        }
    }
    ctx->pc = 0x282624u;
label_282624:
    // 0x282624: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x282624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x282628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28262c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28262cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x282630: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x282630u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x282634: 0x8c450148  lw          $a1, 0x148($v0)
    ctx->pc = 0x282634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
    // 0x282638: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x282638u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28263c: 0x8c46014c  lw          $a2, 0x14C($v0)
    ctx->pc = 0x28263cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
    // 0x282640: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x282640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x282644: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x282644u;
    SET_GPR_U32(ctx, 31, 0x28264Cu);
    ctx->pc = 0x282648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282644u;
    // 0x282648: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x282644u, 0x28264Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28264Cu;
label_28264c:
    // 0x28264c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x28264cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x282650: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x282650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x282654: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x282654u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_282658:
    // 0x282658: 0xc055f06  jal         func_157C18
    ctx->pc = 0x282658u;
    SET_GPR_U32(ctx, 31, 0x282660u);
    ctx->pc = 0x28265Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282658u;
    // 0x28265c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x282658u, 0x282660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282660u;
label_282660:
    // 0x282660: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x282660u;
    {
        const bool branch_taken_0x282660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x282660) {
            ctx->pc = 0x282664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282660u;
            // 0x282664: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2826BCu;
            goto label_2826bc;
        }
    }
    ctx->pc = 0x282668u;
    // 0x282668: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x282668u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x28266c: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x28266cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x282670: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x282670u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x282674: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x282674u;
    {
        const bool branch_taken_0x282674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282674u;
        // 0x282678: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282674) {
            ctx->pc = 0x2826B8u;
            goto label_2826b8;
        }
    }
    ctx->pc = 0x28267Cu;
label_28267c:
    // 0x28267c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28267cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x282680: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282684: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x282684u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x282688: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x282688u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x28268c: 0x8c450150  lw          $a1, 0x150($v0)
    ctx->pc = 0x28268cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x282690: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x282690u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282694: 0x8c460154  lw          $a2, 0x154($v0)
    ctx->pc = 0x282694u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x282698: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x282698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x28269c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x28269Cu;
    SET_GPR_U32(ctx, 31, 0x2826A4u);
    ctx->pc = 0x2826A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28269Cu;
    // 0x2826a0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x28269Cu, 0x2826A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2826A4u;
label_2826a4:
    // 0x2826a4: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2826a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2826a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2826a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2826ac: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2826acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2826b0:
    // 0x2826b0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2826B0u;
    SET_GPR_U32(ctx, 31, 0x2826B8u);
    ctx->pc = 0x2826B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2826B0u;
    // 0x2826b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2826B0u, 0x2826B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2826B8u;
label_2826b8:
    // 0x2826b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2826b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2826bc:
    // 0x2826bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2826bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2826c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2826C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2826C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2826C0u;
        // 0x2826c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2826C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2826C8u;
}
