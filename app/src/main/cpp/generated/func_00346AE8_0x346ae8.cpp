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

// Function: func_00346AE8
// Address: 0x346ae8 - 0x346b78
void func_00346AE8_0x346ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00346AE8_0x346ae8");
#endif

    switch (ctx->pc) {
        case 0x346afcu: goto label_346afc;
        case 0x346b14u: goto label_346b14;
        default: break;
    }

    ctx->pc = 0x346ae8u;

    // 0x346ae8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x346ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x346aec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x346aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x346af0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x346af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x346af4: 0xc0d1a0a  jal         func_346828
    ctx->pc = 0x346AF4u;
    SET_GPR_U32(ctx, 31, 0x346AFCu);
    ctx->pc = 0x346AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346AF4u;
    // 0x346af8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346828u, 0x346AF4u, 0x346AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346AFCu;
label_346afc:
    // 0x346afc: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x346afcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x346b00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x346b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x346b04: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x346B04u;
    {
        const bool branch_taken_0x346b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x346B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346B04u;
        // 0x346b08: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346b04) {
            ctx->pc = 0x346B20u;
            goto label_346b20;
        }
    }
    ctx->pc = 0x346B0Cu;
    // 0x346b0c: 0xc0d22f8  jal         func_348BE0
    ctx->pc = 0x346B0Cu;
    SET_GPR_U32(ctx, 31, 0x346B14u);
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x346B0Cu, 0x346B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346B14u;
label_346b14:
    // 0x346b14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x346B14u;
    {
        const bool branch_taken_0x346b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346B14u;
        // 0x346b18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346b14) {
            ctx->pc = 0x346B24u;
            goto label_346b24;
        }
    }
    ctx->pc = 0x346B1Cu;
    // 0x346b1c: 0x0  nop
    ctx->pc = 0x346b1cu;
    // NOP
label_346b20:
    // 0x346b20: 0x8e0201c0  lw          $v0, 0x1C0($s0)
    ctx->pc = 0x346b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
label_346b24:
    // 0x346b24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x346b24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346b28: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x346b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x346b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x346B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346B2Cu;
        // 0x346b30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346B34u;
    // 0x346b34: 0x0  nop
    ctx->pc = 0x346b34u;
    // NOP
    // 0x346b38: 0x27bd01b0  addiu       $sp, $sp, 0x1B0
    ctx->pc = 0x346b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x346b3c: 0x0  nop
    ctx->pc = 0x346b3cu;
    // NOP
    // 0x346b40: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x346b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x346b44: 0x0  nop
    ctx->pc = 0x346b44u;
    // NOP
    // 0x346b48: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x346b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x346b4c: 0x0  nop
    ctx->pc = 0x346b4cu;
    // NOP
    // 0x346b50: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x346b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x346b54: 0x0  nop
    ctx->pc = 0x346b54u;
    // NOP
    // 0x346b58: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x346b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x346b5c: 0x0  nop
    ctx->pc = 0x346b5cu;
    // NOP
    // 0x346b60: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x346b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x346b64: 0x0  nop
    ctx->pc = 0x346b64u;
    // NOP
    // 0x346b68: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x346b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x346b6c: 0x0  nop
    ctx->pc = 0x346b6cu;
    // NOP
    // 0x346b70: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x346b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x346b74: 0x0  nop
    ctx->pc = 0x346b74u;
    // NOP
    ctx->pc = 0x346b78u;
}
