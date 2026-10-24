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

// Function: func_00143998
// Address: 0x143998 - 0x143a90
void func_00143998_0x143998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00143998_0x143998");
#endif

    switch (ctx->pc) {
        case 0x1439e0u: goto label_1439e0;
        case 0x1439f0u: goto label_1439f0;
        case 0x143a00u: goto label_143a00;
        case 0x143a44u: goto label_143a44;
        case 0x143a4cu: goto label_143a4c;
        default: break;
    }

    ctx->pc = 0x143998u;

    // 0x143998: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x143998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x14399c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x14399cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1439a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1439a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1439a4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1439a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1439a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1439a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1439ac: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1439acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x1439b0: 0x26140100  addiu       $s4, $s0, 0x100
    ctx->pc = 0x1439b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x1439b4: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1439b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x1439b8: 0x261501b0  addiu       $s5, $s0, 0x1B0
    ctx->pc = 0x1439b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
    // 0x1439bc: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1439bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1439c0: 0x26160140  addiu       $s6, $s0, 0x140
    ctx->pc = 0x1439c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x1439c4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1439c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1439c8: 0x261301a0  addiu       $s3, $s0, 0x1A0
    ctx->pc = 0x1439c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x1439cc: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x1439ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x1439d0: 0x261000b0  addiu       $s0, $s0, 0xB0
    ctx->pc = 0x1439d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1439d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1439d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1439d8: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x1439D8u;
    SET_GPR_U32(ctx, 31, 0x1439E0u);
    ctx->pc = 0x1439DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1439D8u;
    // 0x1439dc: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x1439D8u, 0x1439E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1439E0u;
label_1439e0:
    // 0x1439e0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1439e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1439e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1439e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1439e8: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1439E8u;
    SET_GPR_U32(ctx, 31, 0x1439F0u);
    ctx->pc = 0x1439ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1439E8u;
    // 0x1439ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1439E8u, 0x1439F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1439F0u;
label_1439f0:
    // 0x1439f0: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1439f0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1439f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1439f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1439f8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1439f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1439fc: 0x0  nop
    ctx->pc = 0x1439fcu;
    // NOP
label_143a00:
    // 0x143a00: 0x2713021  addu        $a2, $s3, $s1
    ctx->pc = 0x143a00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x143a04: 0x2822821  addu        $a1, $s4, $v0
    ctx->pc = 0x143a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x143a08: 0x2c23821  addu        $a3, $s6, $v0
    ctx->pc = 0x143a08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x143a0c: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x143a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x143a10: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x143a10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x143a14: 0x1477000d  bne         $v1, $s7, . + 4 + (0xD << 2)
    ctx->pc = 0x143A14u;
    {
        const bool branch_taken_0x143a14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        ctx->pc = 0x143A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143A14u;
        // 0x143a18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143a14) {
            ctx->pc = 0x143A4Cu;
            goto label_143a4c;
        }
    }
    ctx->pc = 0x143A1Cu;
    // 0x143a1c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x143a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x143a20: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x143a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x143a24: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x143a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143a28: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x143a28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x143a2c: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x143a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x143a30: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x143a30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x143a34: 0xa202004f  sb          $v0, 0x4F($s0)
    ctx->pc = 0x143a34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 79), (uint8_t)GPR_U32(ctx, 2));
    // 0x143a38: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x143a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x143a3c: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x143A3Cu;
    SET_GPR_U32(ctx, 31, 0x143A44u);
    ctx->pc = 0x143A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143A3Cu;
    // 0x143a40: 0xae030084  sw          $v1, 0x84($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x143A3Cu, 0x143A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143A44u;
label_143a44:
    // 0x143a44: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x143A44u;
    SET_GPR_U32(ctx, 31, 0x143A4Cu);
    ctx->pc = 0x143A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143A44u;
    // 0x143a48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x143A44u, 0x143A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143A4Cu;
label_143a4c:
    // 0x143a4c: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x143a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x143a50: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x143a50u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x143a54: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x143a54u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x143a58: 0x5460ffe9  bnel        $v1, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x143A58u;
    {
        const bool branch_taken_0x143a58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x143a58) {
            ctx->pc = 0x143A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x143A58u;
            // 0x143a5c: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x143A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143a00;
        }
    }
    ctx->pc = 0x143A60u;
    // 0x143a60: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x143a60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x143a64: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x143a64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x143a68: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x143a68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x143a6c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x143a6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x143a70: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x143a70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x143a74: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x143a74u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x143a78: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x143a78u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x143a7c: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x143a7cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143a80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x143a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143a84: 0x3e00008  jr          $ra
    ctx->pc = 0x143A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143A84u;
        // 0x143a88: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143A8Cu;
    // 0x143a8c: 0x0  nop
    ctx->pc = 0x143a8cu;
    // NOP
    ctx->pc = 0x143a90u;
}
