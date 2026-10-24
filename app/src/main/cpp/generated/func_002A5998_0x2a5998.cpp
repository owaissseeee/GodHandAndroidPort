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

// Function: func_002A5998
// Address: 0x2a5998 - 0x2a5ad0
void func_002A5998_0x2a5998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A5998_0x2a5998");
#endif

    switch (ctx->pc) {
        case 0x2a59e0u: goto label_2a59e0;
        case 0x2a59f8u: goto label_2a59f8;
        case 0x2a5a00u: goto label_2a5a00;
        case 0x2a5a08u: goto label_2a5a08;
        case 0x2a5a38u: goto label_2a5a38;
        case 0x2a5a48u: goto label_2a5a48;
        case 0x2a5a58u: goto label_2a5a58;
        case 0x2a5a68u: goto label_2a5a68;
        case 0x2a5a78u: goto label_2a5a78;
        case 0x2a5a88u: goto label_2a5a88;
        case 0x2a5a98u: goto label_2a5a98;
        case 0x2a5ab0u: goto label_2a5ab0;
        default: break;
    }

    ctx->pc = 0x2a5998u;

    // 0x2a5998: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a5998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a599c: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x2a599cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x2a59a0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2a59a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2a59a4: 0x3c100074  lui         $s0, 0x74
    ctx->pc = 0x2a59a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)116 << 16));
    // 0x2a59a8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2a59a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2a59ac: 0x8e027a24  lw          $v0, 0x7A24($s0)
    ctx->pc = 0x2a59acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x2a59b0: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x2a59b0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
    // 0x2a59b4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2a59b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2a59b8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x2a59b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x2a59bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a59bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a59c0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2a59c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2a59c4: 0x2484ac90  addiu       $a0, $a0, -0x5370
    ctx->pc = 0x2a59c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945936));
    // 0x2a59c8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2a59c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2a59cc: 0x3c130075  lui         $s3, 0x75
    ctx->pc = 0x2a59ccu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)117 << 16));
    // 0x2a59d0: 0xae027a24  sw          $v0, 0x7A24($s0)
    ctx->pc = 0x2a59d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x747A24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A24u, _value); } while (0);
    // 0x2a59d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a59d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a59d8: 0xc0a96c0  jal         func_2A5B00
    ctx->pc = 0x2A59D8u;
    SET_GPR_U32(ctx, 31, 0x2A59E0u);
    ctx->pc = 0x2A59DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A59D8u;
    // 0x2a59dc: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5B00u, 0x2A59D8u, 0x2A59E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A59E0u;
label_2a59e0:
    // 0x2a59e0: 0x8e027a24  lw          $v0, 0x7A24($s0)
    ctx->pc = 0x2a59e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 31268)));
    // 0x2a59e4: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x2a59e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x2a59e8: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2A59E8u;
    {
        const bool branch_taken_0x2a59e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A59ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A59E8u;
        // 0x2a59ec: 0x26622c00  addiu       $v0, $s3, 0x2C00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 11264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a59e8) {
            ctx->pc = 0x2A5AA8u;
            goto label_2a5aa8;
        }
    }
    ctx->pc = 0x2A59F0u;
    // 0x2a59f0: 0x2650ac90  addiu       $s0, $s2, -0x5370
    ctx->pc = 0x2a59f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945936));
    // 0x2a59f4: 0x0  nop
    ctx->pc = 0x2a59f4u;
    // NOP
label_2a59f8:
    // 0x2a59f8: 0xc0a9b2a  jal         func_2A6CA8
    ctx->pc = 0x2A59F8u;
    SET_GPR_U32(ctx, 31, 0x2A5A00u);
    ctx->pc = 0x2A59FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A59F8u;
    // 0x2a59fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6CA8u, 0x2A59F8u, 0x2A5A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5A00u;
label_2a5a00:
    // 0x2a5a00: 0xc0a9b6a  jal         func_2A6DA8
    ctx->pc = 0x2A5A00u;
    SET_GPR_U32(ctx, 31, 0x2A5A08u);
    ctx->pc = 0x2A5A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5A00u;
    // 0x2a5a04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6DA8u, 0x2A5A00u, 0x2A5A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5A08u;
label_2a5a08:
    // 0x2a5a08: 0x9243ac90  lbu         $v1, -0x5370($s2)
    ctx->pc = 0x2a5a08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294945936)));
    // 0x2a5a0c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x2a5a0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2a5a10: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2A5A10u;
    {
        const bool branch_taken_0x2a5a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5A10u;
        // 0x2a5a14: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5a10) {
            ctx->pc = 0x2A5A88u;
            goto label_2a5a88;
        }
    }
    ctx->pc = 0x2A5A18u;
    // 0x2a5a18: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a5a18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a5a1c: 0x2442ad40  addiu       $v0, $v0, -0x52C0
    ctx->pc = 0x2a5a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946112));
    // 0x2a5a20: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5a24: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2a5a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a5a28: 0x800008  jr          $a0
    ctx->pc = 0x2A5A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A5A30u: goto label_2a5a30;
            case 0x2A5A40u: goto label_2a5a40;
            case 0x2A5A50u: goto label_2a5a50;
            case 0x2A5A60u: goto label_2a5a60;
            case 0x2A5A70u: goto label_2a5a70;
            case 0x2A5A80u: goto label_2a5a80;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5A28u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2A5A30u;
label_2a5a30:
    // 0x2a5a30: 0xc0a96c6  jal         func_2A5B18
    ctx->pc = 0x2A5A30u;
    SET_GPR_U32(ctx, 31, 0x2A5A38u);
    ctx->pc = 0x2A5A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5A30u;
    // 0x2a5a34: 0x2644ac90  addiu       $a0, $s2, -0x5370 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5B18u, 0x2A5A30u, 0x2A5A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5A38u;
label_2a5a38:
    // 0x2a5a38: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2A5A38u;
    {
        const bool branch_taken_0x2a5a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5A38u;
        // 0x2a5a3c: 0x26622c00  addiu       $v0, $s3, 0x2C00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 11264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5a38) {
            ctx->pc = 0x2A5A8Cu;
            goto label_2a5a8c;
        }
    }
    ctx->pc = 0x2A5A40u;
label_2a5a40:
    // 0x2a5a40: 0xc0a96ee  jal         func_2A5BB8
    ctx->pc = 0x2A5A40u;
    SET_GPR_U32(ctx, 31, 0x2A5A48u);
    ctx->pc = 0x2A5A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5A40u;
    // 0x2a5a44: 0x2644ac90  addiu       $a0, $s2, -0x5370 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5BB8u, 0x2A5A40u, 0x2A5A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5A48u;
label_2a5a48:
    // 0x2a5a48: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2A5A48u;
    {
        const bool branch_taken_0x2a5a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5A48u;
        // 0x2a5a4c: 0x26622c00  addiu       $v0, $s3, 0x2C00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 11264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5a48) {
            ctx->pc = 0x2A5A8Cu;
            goto label_2a5a8c;
        }
    }
    ctx->pc = 0x2A5A50u;
label_2a5a50:
    // 0x2a5a50: 0xc0a9750  jal         func_2A5D40
    ctx->pc = 0x2A5A50u;
    SET_GPR_U32(ctx, 31, 0x2A5A58u);
    ctx->pc = 0x2A5A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5A50u;
    // 0x2a5a54: 0x2644ac90  addiu       $a0, $s2, -0x5370 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5D40u, 0x2A5A50u, 0x2A5A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5A58u;
label_2a5a58:
    // 0x2a5a58: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2A5A58u;
    {
        const bool branch_taken_0x2a5a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5A58u;
        // 0x2a5a5c: 0x26622c00  addiu       $v0, $s3, 0x2C00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 11264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5a58) {
            ctx->pc = 0x2A5A8Cu;
            goto label_2a5a8c;
        }
    }
    ctx->pc = 0x2A5A60u;
label_2a5a60:
    // 0x2a5a60: 0xc0a97b0  jal         func_2A5EC0
    ctx->pc = 0x2A5A60u;
    SET_GPR_U32(ctx, 31, 0x2A5A68u);
    ctx->pc = 0x2A5A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5A60u;
    // 0x2a5a64: 0x2644ac90  addiu       $a0, $s2, -0x5370 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5EC0u, 0x2A5A60u, 0x2A5A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5A68u;
label_2a5a68:
    // 0x2a5a68: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A5A68u;
    {
        const bool branch_taken_0x2a5a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5A68u;
        // 0x2a5a6c: 0x26622c00  addiu       $v0, $s3, 0x2C00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 11264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5a68) {
            ctx->pc = 0x2A5A8Cu;
            goto label_2a5a8c;
        }
    }
    ctx->pc = 0x2A5A70u;
label_2a5a70:
    // 0x2a5a70: 0xc0a99a4  jal         func_2A6690
    ctx->pc = 0x2A5A70u;
    SET_GPR_U32(ctx, 31, 0x2A5A78u);
    ctx->pc = 0x2A5A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5A70u;
    // 0x2a5a74: 0x2644ac90  addiu       $a0, $s2, -0x5370 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6690u, 0x2A5A70u, 0x2A5A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5A78u;
label_2a5a78:
    // 0x2a5a78: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A5A78u;
    {
        const bool branch_taken_0x2a5a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5A78u;
        // 0x2a5a7c: 0x26622c00  addiu       $v0, $s3, 0x2C00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 11264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5a78) {
            ctx->pc = 0x2A5A8Cu;
            goto label_2a5a8c;
        }
    }
    ctx->pc = 0x2A5A80u;
label_2a5a80:
    // 0x2a5a80: 0xc0a99f4  jal         func_2A67D0
    ctx->pc = 0x2A5A80u;
    SET_GPR_U32(ctx, 31, 0x2A5A88u);
    ctx->pc = 0x2A5A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5A80u;
    // 0x2a5a84: 0x2644ac90  addiu       $a0, $s2, -0x5370 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A67D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A67D0u, 0x2A5A80u, 0x2A5A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5A88u;
label_2a5a88:
    // 0x2a5a88: 0x26622c00  addiu       $v0, $s3, 0x2C00
    ctx->pc = 0x2a5a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 11264));
label_2a5a8c:
    // 0x2a5a8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a5a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5a90: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x2A5A90u;
    SET_GPR_U32(ctx, 31, 0x2A5A98u);
    ctx->pc = 0x2A5A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5A90u;
    // 0x2a5a94: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x2A5A90u, 0x2A5A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5A98u;
label_2a5a98:
    // 0x2a5a98: 0x8e827a24  lw          $v0, 0x7A24($s4)
    ctx->pc = 0x2a5a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 31268)));
    // 0x2a5a9c: 0x440ffd6  bltz        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x2A5A9Cu;
    {
        const bool branch_taken_0x2a5a9c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2A5AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5A9Cu;
        // 0x2a5aa0: 0x2650ac90  addiu       $s0, $s2, -0x5370 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5a9c) {
            ctx->pc = 0x2A59F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a59f8;
        }
    }
    ctx->pc = 0x2A5AA4u;
    // 0x2a5aa4: 0x26622c00  addiu       $v0, $s3, 0x2C00
    ctx->pc = 0x2a5aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 11264));
label_2a5aa8:
    // 0x2a5aa8: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x2A5AA8u;
    SET_GPR_U32(ctx, 31, 0x2A5AB0u);
    ctx->pc = 0x2A5AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5AA8u;
    // 0x2a5aac: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x2A5AA8u, 0x2A5AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5AB0u;
label_2a5ab0:
    // 0x2a5ab0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2a5ab0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a5ab4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2a5ab4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a5ab8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2a5ab8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a5abc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2a5abcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a5ac0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2a5ac0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a5ac4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a5ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a5ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5AC8u;
        // 0x2a5acc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A5AD0u;
}
