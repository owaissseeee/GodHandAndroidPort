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

// Function: func_00323A00
// Address: 0x323a00 - 0x323a70
void func_00323A00_0x323a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00323A00_0x323a00");
#endif

    switch (ctx->pc) {
        case 0x323a00u: goto label_323a00;
        case 0x323a04u: goto label_323a04;
        case 0x323a08u: goto label_323a08;
        case 0x323a0cu: goto label_323a0c;
        case 0x323a10u: goto label_323a10;
        case 0x323a14u: goto label_323a14;
        case 0x323a18u: goto label_323a18;
        case 0x323a1cu: goto label_323a1c;
        case 0x323a20u: goto label_323a20;
        case 0x323a24u: goto label_323a24;
        case 0x323a28u: goto label_323a28;
        case 0x323a2cu: goto label_323a2c;
        case 0x323a30u: goto label_323a30;
        case 0x323a34u: goto label_323a34;
        case 0x323a38u: goto label_323a38;
        case 0x323a3cu: goto label_323a3c;
        case 0x323a40u: goto label_323a40;
        case 0x323a44u: goto label_323a44;
        case 0x323a48u: goto label_323a48;
        case 0x323a4cu: goto label_323a4c;
        case 0x323a50u: goto label_323a50;
        case 0x323a54u: goto label_323a54;
        case 0x323a58u: goto label_323a58;
        case 0x323a5cu: goto label_323a5c;
        case 0x323a60u: goto label_323a60;
        case 0x323a64u: goto label_323a64;
        case 0x323a68u: goto label_323a68;
        case 0x323a6cu: goto label_323a6c;
        default: break;
    }

    ctx->pc = 0x323a00u;

label_323a00:
    // 0x323a00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x323a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_323a04:
    // 0x323a04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x323a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_323a08:
    // 0x323a08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x323a08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_323a0c:
    // 0x323a0c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x323a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_323a10:
    // 0x323a10: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x323a10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_323a14:
    // 0x323a14: 0x50a00013  beql        $a1, $zero, . + 4 + (0x13 << 2)
label_323a18:
    if (ctx->pc == 0x323A18u) {
        ctx->pc = 0x323A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323A14u;
        // 0x323a18: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323A1Cu;
        goto label_323a1c;
    }
    ctx->pc = 0x323A14u;
    {
        const bool branch_taken_0x323a14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x323a14) {
            ctx->pc = 0x323A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323A14u;
            // 0x323a18: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323A64u;
            goto label_323a64;
        }
    }
    ctx->pc = 0x323A1Cu;
label_323a1c:
    // 0x323a1c: 0x82020002  lb          $v0, 0x2($s0)
    ctx->pc = 0x323a1cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_323a20:
    // 0x323a20: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_323a24:
    if (ctx->pc == 0x323A24u) {
        ctx->pc = 0x323A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323A20u;
        // 0x323a24: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323A28u;
        goto label_323a28;
    }
    ctx->pc = 0x323A20u;
    {
        const bool branch_taken_0x323a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x323a20) {
            ctx->pc = 0x323A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323A20u;
            // 0x323a24: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323A64u;
            goto label_323a64;
        }
    }
    ctx->pc = 0x323A28u;
label_323a28:
    // 0x323a28: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x323a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_323a2c:
    // 0x323a2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x323a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_323a30:
    // 0x323a30: 0x8c43b708  lw          $v1, -0x48F8($v0)
    ctx->pc = 0x323a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948616)));
label_323a34:
    // 0x323a34: 0x54640006  bnel        $v1, $a0, . + 4 + (0x6 << 2)
label_323a38:
    if (ctx->pc == 0x323A38u) {
        ctx->pc = 0x323A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323A34u;
        // 0x323a38: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323A3Cu;
        goto label_323a3c;
    }
    ctx->pc = 0x323A34u;
    {
        const bool branch_taken_0x323a34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x323a34) {
            ctx->pc = 0x323A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323A34u;
            // 0x323a38: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323A50u;
            goto label_323a50;
        }
    }
    ctx->pc = 0x323A3Cu;
label_323a3c:
    // 0x323a3c: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x323a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_323a40:
    // 0x323a40: 0xc0cfcf4  jal         func_33F3D0
label_323a44:
    if (ctx->pc == 0x323A44u) {
        ctx->pc = 0x323A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323A40u;
        // 0x323a44: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323A48u;
        goto label_323a48;
    }
    ctx->pc = 0x323A40u;
    SET_GPR_U32(ctx, 31, 0x323A48u);
    ctx->pc = 0x323A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323A40u;
    // 0x323a44: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F3D0u, 0x323A40u, 0x323A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323A48u;
label_323a48:
    // 0x323a48: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x323a48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_323a4c:
    // 0x323a4c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x323a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_323a50:
    // 0x323a50: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x323a50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_323a54:
    // 0x323a54: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x323a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_323a58:
    // 0x323a58: 0x40f809  jalr        $v0
label_323a5c:
    if (ctx->pc == 0x323A5Cu) {
        ctx->pc = 0x323A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323A58u;
        // 0x323a5c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323A60u;
        goto label_323a60;
    }
    ctx->pc = 0x323A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x323A60u);
        ctx->pc = 0x323A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323A58u;
        // 0x323a5c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323A58u, 0x323A60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x323A60u;
label_323a60:
    // 0x323a60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x323a60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_323a64:
    // 0x323a64: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x323a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_323a68:
    // 0x323a68: 0x3e00008  jr          $ra
label_323a6c:
    if (ctx->pc == 0x323A6Cu) {
        ctx->pc = 0x323A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323A68u;
        // 0x323a6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323A70u;
        goto label_fallthrough_0x323a68;
    }
    ctx->pc = 0x323A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323A68u;
        // 0x323a6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x323a68:
    ctx->pc = 0x323A70u;
}
