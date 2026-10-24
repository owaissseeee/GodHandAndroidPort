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

// Function: _decPicture
// Address: 0x39acd8 - 0x39ada8
void _decPicture_0x39acd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_decPicture_0x39acd8");
#endif

    switch (ctx->pc) {
        case 0x39ad14u: goto label_39ad14;
        case 0x39ad74u: goto label_39ad74;
        case 0x39ad7cu: goto label_39ad7c;
        default: break;
    }

    ctx->pc = 0x39acd8u;

    // 0x39acd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39acd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x39acdc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x39acdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x39ace0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39ace0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39ace4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39ace4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x39ace8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39ace8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39acec: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x39acecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x39acf0: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x39acf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x39acf4: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x39ACF4u;
    {
        const bool branch_taken_0x39acf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x39ACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ACF4u;
        // 0x39acf8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39acf4) {
            ctx->pc = 0x39AD20u;
            goto label_39ad20;
        }
    }
    ctx->pc = 0x39ACFCu;
    // 0x39acfc: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x39acfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x39ad00: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x39AD00u;
    {
        const bool branch_taken_0x39ad00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AD00u;
        // 0x39ad04: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ad00) {
            ctx->pc = 0x39AD20u;
            goto label_39ad20;
        }
    }
    ctx->pc = 0x39AD08u;
    // 0x39ad08: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x39ad08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x39ad0c: 0xc0e70e4  jal         func_39C390
    ctx->pc = 0x39AD0Cu;
    SET_GPR_U32(ctx, 31, 0x39AD14u);
    ctx->pc = 0x39AD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AD0Cu;
    // 0x39ad10: 0x24a5e548  addiu       $a1, $a1, -0x1AB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C390u, 0x39AD0Cu, 0x39AD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AD14u;
label_39ad14:
    // 0x39ad14: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x39ad14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
    // 0x39ad18: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x39ad18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x39ad1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x39ad1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_39ad20:
    // 0x39ad20: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x39AD20u;
    {
        const bool branch_taken_0x39ad20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x39AD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AD20u;
        // 0x39ad24: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ad20) {
            ctx->pc = 0x39AD5Cu;
            goto label_39ad5c;
        }
    }
    ctx->pc = 0x39AD28u;
    // 0x39ad28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39AD28u;
    {
        const bool branch_taken_0x39ad28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AD28u;
        // 0x39ad2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ad28) {
            ctx->pc = 0x39AD40u;
            goto label_39ad40;
        }
    }
    ctx->pc = 0x39AD30u;
    // 0x39ad30: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x39AD30u;
    {
        const bool branch_taken_0x39ad30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x39AD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AD30u;
        // 0x39ad34: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ad30) {
            ctx->pc = 0x39AD54u;
            goto label_39ad54;
        }
    }
    ctx->pc = 0x39AD38u;
    // 0x39ad38: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x39AD38u;
    {
        const bool branch_taken_0x39ad38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AD38u;
        // 0x39ad3c: 0x8e1101d0  lw          $s1, 0x1D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ad38) {
            ctx->pc = 0x39AD68u;
            goto label_39ad68;
        }
    }
    ctx->pc = 0x39AD40u;
label_39ad40:
    // 0x39ad40: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x39ad40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x39ad44: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x39AD44u;
    {
        const bool branch_taken_0x39ad44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x39AD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AD44u;
        // 0x39ad48: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ad44) {
            ctx->pc = 0x39AD64u;
            goto label_39ad64;
        }
    }
    ctx->pc = 0x39AD4Cu;
    // 0x39ad4c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x39AD4Cu;
    {
        const bool branch_taken_0x39ad4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AD4Cu;
        // 0x39ad50: 0x8e1101d0  lw          $s1, 0x1D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ad4c) {
            ctx->pc = 0x39AD74u;
            goto label_39ad74;
        }
    }
    ctx->pc = 0x39AD54u;
label_39ad54:
    // 0x39ad54: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x39AD54u;
    {
        const bool branch_taken_0x39ad54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AD54u;
        // 0x39ad58: 0x8e1101e0  lw          $s1, 0x1E0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ad54) {
            ctx->pc = 0x39AD74u;
            goto label_39ad74;
        }
    }
    ctx->pc = 0x39AD5Cu;
label_39ad5c:
    // 0x39ad5c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x39AD5Cu;
    {
        const bool branch_taken_0x39ad5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AD5Cu;
        // 0x39ad60: 0x8e1101f0  lw          $s1, 0x1F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ad5c) {
            ctx->pc = 0x39AD74u;
            goto label_39ad74;
        }
    }
    ctx->pc = 0x39AD64u;
label_39ad64:
    // 0x39ad64: 0x8e1101d0  lw          $s1, 0x1D0($s0)
    ctx->pc = 0x39ad64u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
label_39ad68:
    // 0x39ad68: 0x24a5e568  addiu       $a1, $a1, -0x1A98
    ctx->pc = 0x39ad68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960488));
    // 0x39ad6c: 0xc0e70e4  jal         func_39C390
    ctx->pc = 0x39AD6Cu;
    SET_GPR_U32(ctx, 31, 0x39AD74u);
    ctx->pc = 0x39AD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AD6Cu;
    // 0x39ad70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C390u, 0x39AD6Cu, 0x39AD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AD74u;
label_39ad74:
    // 0x39ad74: 0xc0e756e  jal         func_39D5B8
    ctx->pc = 0x39AD74u;
    SET_GPR_U32(ctx, 31, 0x39AD7Cu);
    ctx->pc = 0x39AD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AD74u;
    // 0x39ad78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39D5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39D5B8u, 0x39AD74u, 0x39AD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AD7Cu;
label_39ad7c:
    // 0x39ad7c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x39ad7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ad80: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x39AD80u;
    {
        const bool branch_taken_0x39ad80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AD80u;
        // 0x39ad84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ad80) {
            ctx->pc = 0x39AD8Cu;
            goto label_39ad8c;
        }
    }
    ctx->pc = 0x39AD88u;
    // 0x39ad88: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x39ad88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_39ad8c:
    // 0x39ad8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39ad8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39ad90: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x39ad90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ad94: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x39ad94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39ad98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39ad98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39ad9c: 0x3e00008  jr          $ra
    ctx->pc = 0x39AD9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39ADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AD9Cu;
        // 0x39ada0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39AD9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39ADA4u;
    // 0x39ada4: 0x0  nop
    ctx->pc = 0x39ada4u;
    // NOP
    ctx->pc = 0x39ada8u;
}
