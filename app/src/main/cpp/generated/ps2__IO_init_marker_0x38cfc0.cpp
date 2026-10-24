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

// Function: _IO_init_marker
// Address: 0x38cfc0 - 0x38d038
void ps2__IO_init_marker_0x38cfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IO_init_marker_0x38cfc0");
#endif

    switch (ctx->pc) {
        case 0x38cff4u: goto label_38cff4;
        default: break;
    }

    ctx->pc = 0x38cfc0u;

    // 0x38cfc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38cfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38cfc4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38cfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x38cfc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38cfc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38cfcc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38cfccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38cfd0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38cfd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x38cfd4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x38cfd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38cfd8: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x38cfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x38cfdc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x38cfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38cfe0: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x38cfe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x38cfe4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38CFE4u;
    {
        const bool branch_taken_0x38cfe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CFE4u;
        // 0x38cfe8: 0x30620100  andi        $v0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cfe4) {
            ctx->pc = 0x38CFFCu;
            goto label_38cffc;
        }
    }
    ctx->pc = 0x38CFECu;
    // 0x38cfec: 0xc0e30bc  jal         func_38C2F0
    ctx->pc = 0x38CFECu;
    SET_GPR_U32(ctx, 31, 0x38CFF4u);
    ctx->pc = 0x38CFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CFECu;
    // 0x38cff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C2F0u, 0x38CFECu, 0x38CFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CFF4u;
label_38cff4:
    // 0x38cff4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x38cff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38cff8: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x38cff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_38cffc:
    // 0x38cffc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38CFFCu;
    {
        const bool branch_taken_0x38cffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CFFCu;
        // 0x38d000: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cffc) {
            ctx->pc = 0x38D00Cu;
            goto label_38d00c;
        }
    }
    ctx->pc = 0x38D004u;
    // 0x38d004: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38D004u;
    {
        const bool branch_taken_0x38d004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D004u;
        // 0x38d008: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d004) {
            ctx->pc = 0x38D010u;
            goto label_38d010;
        }
    }
    ctx->pc = 0x38D00Cu;
label_38d00c:
    // 0x38d00c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x38d00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_38d010:
    // 0x38d010: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x38d010u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38d014: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x38d014u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x38d018: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x38d018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x38d01c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38d01cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38d020: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x38d020u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x38d024: 0xae110030  sw          $s1, 0x30($s0)
    ctx->pc = 0x38d024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 17));
    // 0x38d028: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38d028u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38d02c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38d02cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38d030: 0x3e00008  jr          $ra
    ctx->pc = 0x38D030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D030u;
        // 0x38d034: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D038u;
}
