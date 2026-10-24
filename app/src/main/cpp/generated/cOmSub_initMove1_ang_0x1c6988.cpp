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

// Function: cOmSub_initMove1_ang
// Address: 0x1c6988 - 0x1c6a60
void cOmSub_initMove1_ang_0x1c6988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmSub_initMove1_ang_0x1c6988");
#endif

    switch (ctx->pc) {
        case 0x1c6a50u: goto label_1c6a50;
        default: break;
    }

    ctx->pc = 0x1c6988u;

    // 0x1c6988: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c6988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c698c: 0x35290002  ori         $t1, $t1, 0x2
    ctx->pc = 0x1c698cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2);
    // 0x1c6990: 0x10a0002b  beqz        $a1, . + 4 + (0x2B << 2)
    ctx->pc = 0x1C6990u;
    {
        const bool branch_taken_0x1c6990 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6990u;
        // 0x1c6994: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6990) {
            ctx->pc = 0x1C6A40u;
            goto label_1c6a40;
        }
    }
    ctx->pc = 0x1C6998u;
    // 0x1c6998: 0x4c0000c  bltz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x1C6998u;
    {
        const bool branch_taken_0x1c6998 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x1C699Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6998u;
        // 0x1c699c: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6998) {
            ctx->pc = 0x1C69CCu;
            goto label_1c69cc;
        }
    }
    ctx->pc = 0x1C69A0u;
    // 0x1c69a0: 0x90a202b4  lbu         $v0, 0x2B4($a1)
    ctx->pc = 0x1c69a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 692)));
    // 0x1c69a4: 0xc2182a  slt         $v1, $a2, $v0
    ctx->pc = 0x1c69a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c69a8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C69A8u;
    {
        const bool branch_taken_0x1c69a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C69ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C69A8u;
        // 0x1c69ac: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c69a8) {
            ctx->pc = 0x1C69C4u;
            goto label_1c69c4;
        }
    }
    ctx->pc = 0x1C69B0u;
    // 0x1c69b0: 0x8ca30278  lw          $v1, 0x278($a1)
    ctx->pc = 0x1c69b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 632)));
    // 0x1c69b4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1c69b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1c69b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c69b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c69bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C69BCu;
    {
        const bool branch_taken_0x1c69bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C69C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C69BCu;
        // 0x1c69c0: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c69bc) {
            ctx->pc = 0x1C69C8u;
            goto label_1c69c8;
        }
    }
    ctx->pc = 0x1C69C4u;
label_1c69c4:
    // 0x1c69c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c69c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c69c8:
    // 0x1c69c8: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x1c69c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c69cc:
    // 0x1c69cc: 0x5140001d  beql        $t2, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x1C69CCu;
    {
        const bool branch_taken_0x1c69cc = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c69cc) {
            ctx->pc = 0x1C69D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C69CCu;
            // 0x1c69d0: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6A44u;
            goto label_1c6a44;
        }
    }
    ctx->pc = 0x1C69D4u;
    // 0x1c69d4: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x1c69d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x1c69d8: 0x4c00003  bltz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C69D8u;
    {
        const bool branch_taken_0x1c69d8 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x1C69DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C69D8u;
        // 0x1c69dc: 0xac8a0008  sw          $t2, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c69d8) {
            ctx->pc = 0x1C69E8u;
            goto label_1c69e8;
        }
    }
    ctx->pc = 0x1C69E0u;
    // 0x1c69e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C69E0u;
    {
        const bool branch_taken_0x1c69e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C69E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C69E0u;
        // 0x1c69e4: 0x8d4200d0  lw          $v0, 0xD0($t2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c69e0) {
            ctx->pc = 0x1C69ECu;
            goto label_1c69ec;
        }
    }
    ctx->pc = 0x1C69E8u;
label_1c69e8:
    // 0x1c69e8: 0x8d4200f0  lw          $v0, 0xF0($t2)
    ctx->pc = 0x1c69e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 240)));
label_1c69ec:
    // 0x1c69ec: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x1c69ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
    // 0x1c69f0: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x1c69f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1c69f4: 0x24830070  addiu       $v1, $a0, 0x70
    ctx->pc = 0x1c69f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x1c69f8: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C69F8u;
    {
        const bool branch_taken_0x1c69f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c69f8) {
            ctx->pc = 0x1C69FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C69F8u;
            // 0x1c69fc: 0x24830080  addiu       $v1, $a0, 0x80 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6A1Cu;
            goto label_1c6a1c;
        }
    }
    ctx->pc = 0x1C6A00u;
    // 0x1c6a00: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1c6a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6a04: 0xe4800070  swc1        $f0, 0x70($a0)
    ctx->pc = 0x1c6a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x1c6a08: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1c6a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6a0c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1c6a0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1c6a10: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1c6a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6a14: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1c6a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1c6a18: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x1c6a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_1c6a1c:
    // 0x1c6a1c: 0x25420100  addiu       $v0, $t2, 0x100
    ctx->pc = 0x1c6a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 256));
    // 0x1c6a20: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C6A20u;
    {
        const bool branch_taken_0x1c6a20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6A20u;
        // 0x1c6a24: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6a20) {
            ctx->pc = 0x1C6A44u;
            goto label_1c6a44;
        }
    }
    ctx->pc = 0x1C6A28u;
    // 0x1c6a28: 0xc5400100  lwc1        $f0, 0x100($t2)
    ctx->pc = 0x1c6a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6a2c: 0xe4800080  swc1        $f0, 0x80($a0)
    ctx->pc = 0x1c6a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x1c6a30: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1c6a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6a34: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1c6a34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1c6a38: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1c6a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6a3c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1c6a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1c6a40:
    // 0x1c6a40: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1c6a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1c6a44:
    // 0x1c6a44: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1c6a44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a48: 0xc071a98  jal         func_1C6A60
    ctx->pc = 0x1C6A48u;
    SET_GPR_U32(ctx, 31, 0x1C6A50u);
    ctx->pc = 0x1C6A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6A48u;
    // 0x1c6a4c: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6A60u, 0x1C6A48u, 0x1C6A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A50u;
label_1c6a50:
    // 0x1c6a50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c6a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6a54: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6A54u;
        // 0x1c6a58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6A5Cu;
    // 0x1c6a5c: 0x0  nop
    ctx->pc = 0x1c6a5cu;
    // NOP
    ctx->pc = 0x1c6a60u;
}
