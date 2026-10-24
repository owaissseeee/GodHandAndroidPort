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

// Function: func_001C2378
// Address: 0x1c2378 - 0x1c2408
void func_001C2378_0x1c2378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001C2378_0x1c2378");
#endif

    switch (ctx->pc) {
        case 0x1c23f8u: goto label_1c23f8;
        default: break;
    }

    ctx->pc = 0x1c2378u;

    // 0x1c2378: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c2378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c237c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c237cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c2380: 0x8c830630  lw          $v1, 0x630($a0)
    ctx->pc = 0x1c2380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1584)));
    // 0x1c2384: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1C2384u;
    {
        const bool branch_taken_0x1c2384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2384u;
        // 0x1c2388: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2384) {
            ctx->pc = 0x1C23F8u;
            goto label_1c23f8;
        }
    }
    ctx->pc = 0x1C238Cu;
    // 0x1c238c: 0x906602b4  lbu         $a2, 0x2B4($v1)
    ctx->pc = 0x1c238cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 692)));
    // 0x1c2390: 0x8c850634  lw          $a1, 0x634($a0)
    ctx->pc = 0x1c2390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1588)));
    // 0x1c2394: 0x4a00002  bltz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C2394u;
    {
        const bool branch_taken_0x1c2394 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1C2398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2394u;
        // 0x1c2398: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2394) {
            ctx->pc = 0x1C23A0u;
            goto label_1c23a0;
        }
    }
    ctx->pc = 0x1C239Cu;
    // 0x1c239c: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x1c239cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1c23a0:
    // 0x1c23a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c23a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c23a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C23A4u;
    {
        const bool branch_taken_0x1c23a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C23A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C23A4u;
        // 0x1c23a8: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c23a4) {
            ctx->pc = 0x1C23BCu;
            goto label_1c23bc;
        }
    }
    ctx->pc = 0x1C23ACu;
    // 0x1c23ac: 0x8c630278  lw          $v1, 0x278($v1)
    ctx->pc = 0x1c23acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 632)));
    // 0x1c23b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c23b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c23b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C23B4u;
    {
        const bool branch_taken_0x1c23b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C23B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C23B4u;
        // 0x1c23b8: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c23b4) {
            ctx->pc = 0x1C23C0u;
            goto label_1c23c0;
        }
    }
    ctx->pc = 0x1C23BCu;
label_1c23bc:
    // 0x1c23bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c23bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c23c0:
    // 0x1c23c0: 0x8c8600f0  lw          $a2, 0xF0($a0)
    ctx->pc = 0x1c23c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x1c23c4: 0x24830640  addiu       $v1, $a0, 0x640
    ctx->pc = 0x1c23c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1600));
    // 0x1c23c8: 0x50c30008  beql        $a2, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C23C8u;
    {
        const bool branch_taken_0x1c23c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c23c8) {
            ctx->pc = 0x1C23CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C23C8u;
            // 0x1c23cc: 0x8c8400f0  lw          $a0, 0xF0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C23ECu;
            goto label_1c23ec;
        }
    }
    ctx->pc = 0x1C23D0u;
    // 0x1c23d0: 0xc4800640  lwc1        $f0, 0x640($a0)
    ctx->pc = 0x1c23d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c23d4: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1c23d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1c23d8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1c23d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c23dc: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x1c23dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x1c23e0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1c23e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c23e4: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x1c23e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x1c23e8: 0x8c8400f0  lw          $a0, 0xF0($a0)
    ctx->pc = 0x1c23e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_1c23ec:
    // 0x1c23ec: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x1c23ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1c23f0: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x1C23F0u;
    SET_GPR_U32(ctx, 31, 0x1C23F8u);
    ctx->pc = 0x1C23F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C23F0u;
    // 0x1c23f4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x1C23F0u, 0x1C23F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C23F8u;
label_1c23f8:
    // 0x1c23f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c23f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c23fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C23FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C23FCu;
        // 0x1c2400: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C23FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2404u;
    // 0x1c2404: 0x0  nop
    ctx->pc = 0x1c2404u;
    // NOP
    ctx->pc = 0x1c2408u;
}
