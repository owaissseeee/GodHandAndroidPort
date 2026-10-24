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

// Function: dvCiSeek
// Address: 0x332dd0 - 0x332e68
void dvCiSeek_0x332dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dvCiSeek_0x332dd0");
#endif

    switch (ctx->pc) {
        case 0x332decu: goto label_332dec;
        default: break;
    }

    ctx->pc = 0x332dd0u;

    // 0x332dd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x332dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x332dd4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x332dd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332dd8: 0x14e00007  bnez        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x332DD8u;
    {
        const bool branch_taken_0x332dd8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x332DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332DD8u;
        // 0x332ddc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332dd8) {
            ctx->pc = 0x332DF8u;
            goto label_332df8;
        }
    }
    ctx->pc = 0x332DE0u;
    // 0x332de0: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x332de0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x332de4: 0xc0cca02  jal         func_332808
    ctx->pc = 0x332DE4u;
    SET_GPR_U32(ctx, 31, 0x332DECu);
    ctx->pc = 0x332DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332DE4u;
    // 0x332de8: 0x24a54458  addiu       $a1, $a1, 0x4458 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332808u, 0x332DE4u, 0x332DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332DECu;
label_332dec:
    // 0x332dec: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x332DECu;
    {
        const bool branch_taken_0x332dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332DECu;
        // 0x332df0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332dec) {
            ctx->pc = 0x332E58u;
            goto label_332e58;
        }
    }
    ctx->pc = 0x332DF4u;
    // 0x332df4: 0x0  nop
    ctx->pc = 0x332df4u;
    // NOP
label_332df8:
    // 0x332df8: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x332DF8u;
    {
        const bool branch_taken_0x332df8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x332DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332DF8u;
        // 0x332dfc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332df8) {
            ctx->pc = 0x332E08u;
            goto label_332e08;
        }
    }
    ctx->pc = 0x332E00u;
    // 0x332e00: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x332E00u;
    {
        const bool branch_taken_0x332e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332E00u;
        // 0x332e04: 0xace5000c  sw          $a1, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332e00) {
            ctx->pc = 0x332E38u;
            goto label_332e38;
        }
    }
    ctx->pc = 0x332E08u;
label_332e08:
    // 0x332e08: 0x14c20005  bne         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x332E08u;
    {
        const bool branch_taken_0x332e08 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x332E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332E08u;
        // 0x332e0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332e08) {
            ctx->pc = 0x332E20u;
            goto label_332e20;
        }
    }
    ctx->pc = 0x332E10u;
    // 0x332e10: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x332e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x332e14: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x332e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x332e18: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x332E18u;
    {
        const bool branch_taken_0x332e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332E18u;
        // 0x332e1c: 0xace2000c  sw          $v0, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332e18) {
            ctx->pc = 0x332E3Cu;
            goto label_332e3c;
        }
    }
    ctx->pc = 0x332E20u;
label_332e20:
    // 0x332e20: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x332E20u;
    {
        const bool branch_taken_0x332e20 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x332E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332E20u;
        // 0x332e24: 0x8ce40008  lw          $a0, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332e20) {
            ctx->pc = 0x332E3Cu;
            goto label_332e3c;
        }
    }
    ctx->pc = 0x332E28u;
    // 0x332e28: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x332e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x332e2c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x332e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x332e30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x332E30u;
    {
        const bool branch_taken_0x332e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332E30u;
        // 0x332e34: 0xace2000c  sw          $v0, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332e30) {
            ctx->pc = 0x332E3Cu;
            goto label_332e3c;
        }
    }
    ctx->pc = 0x332E38u;
label_332e38:
    // 0x332e38: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x332e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_332e3c:
    // 0x332e3c: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x332e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x332e40: 0xace00014  sw          $zero, 0x14($a3)
    ctx->pc = 0x332e40u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 0));
    // 0x332e44: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x332e44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x332e48: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x332e48u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x332e4c: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x332e4cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x332e50: 0x4100b  movn        $v0, $zero, $a0
    ctx->pc = 0x332e50u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x332e54: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x332e54u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_332e58:
    // 0x332e58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x332e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x332e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x332E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332E5Cu;
        // 0x332e60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x332E64u;
    // 0x332e64: 0x0  nop
    ctx->pc = 0x332e64u;
    // NOP
    ctx->pc = 0x332e68u;
}
