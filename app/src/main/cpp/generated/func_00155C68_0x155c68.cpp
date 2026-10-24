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

// Function: func_00155C68
// Address: 0x155c68 - 0x155d60
void func_00155C68_0x155c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00155C68_0x155c68");
#endif

    ctx->pc = 0x155c68u;

    // 0x155c68: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x155c68u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155c6c: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x155c6cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155c70: 0x5400022  bltz        $t2, . + 4 + (0x22 << 2)
    ctx->pc = 0x155C70u;
    {
        const bool branch_taken_0x155c70 = (GPR_S64(ctx, 10) < 0);
        ctx->pc = 0x155C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155C70u;
        // 0x155c74: 0xa0602d  daddu       $t4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155c70) {
            ctx->pc = 0x155CFCu;
            goto label_155cfc;
        }
    }
    ctx->pc = 0x155C78u;
    // 0x155c78: 0x314a00ff  andi        $t2, $t2, 0xFF
    ctx->pc = 0x155c78u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x155c7c: 0x3c07004a  lui         $a3, 0x4A
    ctx->pc = 0x155c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)74 << 16));
    // 0x155c80: 0x24e75d80  addiu       $a3, $a3, 0x5D80
    ctx->pc = 0x155c80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23936));
    // 0x155c84: 0xa18c0  sll         $v1, $t2, 3
    ctx->pc = 0x155c84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x155c88: 0x672821  addu        $a1, $v1, $a3
    ctx->pc = 0x155c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x155c8c: 0x24e80004  addiu       $t0, $a3, 0x4
    ctx->pc = 0x155c8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x155c90: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x155c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x155c94: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x155c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x155c98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x155c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x155c9c: 0x3c093000  lui         $t1, 0x3000
    ctx->pc = 0x155c9cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)12288 << 16));
    // 0x155ca0: 0x3c060fff  lui         $a2, 0xFFF
    ctx->pc = 0x155ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4095 << 16));
    // 0x155ca4: 0x25450001  addiu       $a1, $t2, 0x1
    ctx->pc = 0x155ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x155ca8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x155ca8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x155cac: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x155cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x155cb0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x155cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x155cb4: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x155cb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x155cb8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x155cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x155cbc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x155cbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x155cc0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x155cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x155cc4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x155cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x155cc8: 0xfd620000  sd          $v0, 0x0($t3)
    ctx->pc = 0x155cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 2));
    // 0x155ccc: 0xa84021  addu        $t0, $a1, $t0
    ctx->pc = 0x155cccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x155cd0: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x155cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x155cd4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x155cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x155cd8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x155cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x155cdc: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x155cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x155ce0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x155ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x155ce4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x155ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x155ce8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x155ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x155cec: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x155cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x155cf0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x155cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x155cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x155CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155CF4u;
        // 0x155cf8: 0xfd820000  sd          $v0, 0x0($t4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155CFCu;
label_155cfc:
    // 0x155cfc: 0x314a00ff  andi        $t2, $t2, 0xFF
    ctx->pc = 0x155cfcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x155d00: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x155d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x155d04: 0x25450001  addiu       $a1, $t2, 0x1
    ctx->pc = 0x155d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x155d08: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x155d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x155d0c: 0xfd620000  sd          $v0, 0x0($t3)
    ctx->pc = 0x155d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 2));
    // 0x155d10: 0x24635d80  addiu       $v1, $v1, 0x5D80
    ctx->pc = 0x155d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23936));
    // 0x155d14: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x155d14u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x155d18: 0x3c063000  lui         $a2, 0x3000
    ctx->pc = 0x155d18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)12288 << 16));
    // 0x155d1c: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x155d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x155d20: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x155d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x155d24: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x155d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x155d28: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x155d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x155d2c: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x155d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x155d30: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x155d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x155d34: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x155d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x155d38: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x155d38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x155d3c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x155d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x155d40: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x155d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x155d44: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x155d44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x155d48: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x155d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x155d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x155D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155D4Cu;
        // 0x155d50: 0xfd820000  sd          $v0, 0x0($t4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155D54u;
    // 0x155d54: 0x0  nop
    ctx->pc = 0x155d54u;
    // NOP
    // 0x155d58: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x155d58u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x155d5c: 0x0  nop
    ctx->pc = 0x155d5cu;
    // NOP
    ctx->pc = 0x155d60u;
}
