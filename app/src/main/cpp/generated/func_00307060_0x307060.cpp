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

// Function: func_00307060
// Address: 0x307060 - 0x307118
void func_00307060_0x307060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00307060_0x307060");
#endif

    switch (ctx->pc) {
        case 0x307088u: goto label_307088;
        case 0x3070d4u: goto label_3070d4;
        default: break;
    }

    ctx->pc = 0x307060u;

    // 0x307060: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x307060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x307064: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x307064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x307068: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x307068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30706c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30706cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307070: 0x26064200  addiu       $a2, $s0, 0x4200
    ctx->pc = 0x307070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16896));
    // 0x307074: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x307074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x307078: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x307078u;
    {
        const bool branch_taken_0x307078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307078) {
            ctx->pc = 0x30707Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307078u;
            // 0x30707c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3070F4u;
            goto label_3070f4;
        }
    }
    ctx->pc = 0x307080u;
    // 0x307080: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x307080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x307084: 0x0  nop
    ctx->pc = 0x307084u;
    // NOP
label_307088:
    // 0x307088: 0x94c70010  lhu         $a3, 0x10($a2)
    ctx->pc = 0x307088u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x30708c: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x30708cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x307090: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x307090u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x307094: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x307094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x307098: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x307098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x30709c: 0x5443000f  bnel        $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x30709Cu;
    {
        const bool branch_taken_0x30709c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x30709c) {
            ctx->pc = 0x3070A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30709Cu;
            // 0x3070a0: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3070DCu;
            goto label_3070dc;
        }
    }
    ctx->pc = 0x3070A4u;
    // 0x3070a4: 0x94a20010  lhu         $v0, 0x10($a1)
    ctx->pc = 0x3070a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3070a8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3070a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3070ac: 0xa4c20010  sh          $v0, 0x10($a2)
    ctx->pc = 0x3070acu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x3070b0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3070b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3070b4: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3070B4u;
    {
        const bool branch_taken_0x3070b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3070b4) {
            ctx->pc = 0x3070B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3070B4u;
            // 0x3070b8: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3070C8u;
            goto label_3070c8;
        }
    }
    ctx->pc = 0x3070BCu;
    // 0x3070bc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3070bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3070c0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3070c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3070c4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3070c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3070c8:
    // 0x3070c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3070c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3070cc: 0xc0c1bf0  jal         func_306FC0
    ctx->pc = 0x3070CCu;
    SET_GPR_U32(ctx, 31, 0x3070D4u);
    ctx->pc = 0x3070D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3070CCu;
    // 0x3070d0: 0xacc20004  sw          $v0, 0x4($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306FC0u, 0x3070CCu, 0x3070D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3070D4u;
label_3070d4:
    // 0x3070d4: 0x26064200  addiu       $a2, $s0, 0x4200
    ctx->pc = 0x3070d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16896));
    // 0x3070d8: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x3070d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_3070dc:
    // 0x3070dc: 0x50c00005  beql        $a2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3070DCu;
    {
        const bool branch_taken_0x3070dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3070dc) {
            ctx->pc = 0x3070E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3070DCu;
            // 0x3070e0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3070F4u;
            goto label_3070f4;
        }
    }
    ctx->pc = 0x3070E4u;
    // 0x3070e4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x3070e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3070e8: 0x5440ffe7  bnel        $v0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x3070E8u;
    {
        const bool branch_taken_0x3070e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3070e8) {
            ctx->pc = 0x3070ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3070E8u;
            // 0x3070ec: 0x8cc50004  lw          $a1, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_307088;
        }
    }
    ctx->pc = 0x3070F0u;
    // 0x3070f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3070f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3070f4:
    // 0x3070f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3070f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3070f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3070F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3070FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3070F8u;
        // 0x3070fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3070F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307100u;
    // 0x307100: 0x94420010  lhu         $v0, 0x10($v0)
    ctx->pc = 0x307100u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x307104: 0x0  nop
    ctx->pc = 0x307104u;
    // NOP
    // 0x307108: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x307108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30710c: 0x0  nop
    ctx->pc = 0x30710cu;
    // NOP
    // 0x307110: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x307110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x307114: 0x0  nop
    ctx->pc = 0x307114u;
    // NOP
    ctx->pc = 0x307118u;
}
