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

// Function: InitFields_1B6E90
// Address: 0x1b6e90 - 0x1b6f38
void InitFields_1B6E90_0x1b6e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitFields_1B6E90_0x1b6e90");
#endif

    switch (ctx->pc) {
        case 0x1b6ea4u: goto label_1b6ea4;
        default: break;
    }

    ctx->pc = 0x1b6e90u;

    // 0x1b6e90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b6e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b6e94: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b6e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b6e98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b6e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b6e9c: 0xc0a9cce  jal         func_2A7338
    ctx->pc = 0x1B6E9Cu;
    SET_GPR_U32(ctx, 31, 0x1B6EA4u);
    ctx->pc = 0x1B6EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6E9Cu;
    // 0x1b6ea0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7338u, 0x1B6E9Cu, 0x1B6EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6EA4u;
label_1b6ea4:
    // 0x1b6ea4: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1b6ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1b6ea8: 0xae0005b0  sw          $zero, 0x5B0($s0)
    ctx->pc = 0x1b6ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 0));
    // 0x1b6eac: 0x24638a20  addiu       $v1, $v1, -0x75E0
    ctx->pc = 0x1b6eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937120));
    // 0x1b6eb0: 0xae0005b4  sw          $zero, 0x5B4($s0)
    ctx->pc = 0x1b6eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1460), GPR_U32(ctx, 0));
    // 0x1b6eb4: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x1b6eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x1b6eb8: 0xae0005b8  sw          $zero, 0x5B8($s0)
    ctx->pc = 0x1b6eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 0));
    // 0x1b6ebc: 0xfa0005c0  sqc2        $vf0, 0x5C0($s0)
    ctx->pc = 0x1b6ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1472), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b6ec0: 0x260405d0  addiu       $a0, $s0, 0x5D0
    ctx->pc = 0x1b6ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1488));
    // 0x1b6ec4: 0xfa0005d0  sqc2        $vf0, 0x5D0($s0)
    ctx->pc = 0x1b6ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1488), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b6ec8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1b6ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1b6ecc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1b6eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1b6ed0: 0xae030560  sw          $v1, 0x560($s0)
    ctx->pc = 0x1b6ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 3));
    // 0x1b6ed4: 0x244289f0  addiu       $v0, $v0, -0x7610
    ctx->pc = 0x1b6ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937072));
    // 0x1b6ed8: 0xae0204ac  sw          $v0, 0x4AC($s0)
    ctx->pc = 0x1b6ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1196), GPR_U32(ctx, 2));
    // 0x1b6edc: 0x26030490  addiu       $v1, $s0, 0x490
    ctx->pc = 0x1b6edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
    // 0x1b6ee0: 0xae0005e0  sw          $zero, 0x5E0($s0)
    ctx->pc = 0x1b6ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1504), GPR_U32(ctx, 0));
    // 0x1b6ee4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b6ee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6ee8: 0xae0005e8  sw          $zero, 0x5E8($s0)
    ctx->pc = 0x1b6ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 0));
    // 0x1b6eec: 0xae0005e4  sw          $zero, 0x5E4($s0)
    ctx->pc = 0x1b6eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 0));
    // 0x1b6ef0: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x1b6ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x1b6ef4: 0xae0005ec  sw          $zero, 0x5EC($s0)
    ctx->pc = 0x1b6ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 0));
    // 0x1b6ef8: 0xa60005f4  sh          $zero, 0x5F4($s0)
    ctx->pc = 0x1b6ef8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1524), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b6efc: 0xa60005f6  sh          $zero, 0x5F6($s0)
    ctx->pc = 0x1b6efcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1526), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b6f00: 0xae000490  sw          $zero, 0x490($s0)
    ctx->pc = 0x1b6f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1168), GPR_U32(ctx, 0));
    // 0x1b6f04: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1b6f04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1b6f08: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1b6f08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1b6f0c: 0xae0005d0  sw          $zero, 0x5D0($s0)
    ctx->pc = 0x1b6f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1488), GPR_U32(ctx, 0));
    // 0x1b6f10: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1b6f10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1b6f14: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1b6f14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1b6f18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b6f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6f1c: 0x8e0305b8  lw          $v1, 0x5B8($s0)
    ctx->pc = 0x1b6f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
    // 0x1b6f20: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x1b6f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x1b6f24: 0xae0305b8  sw          $v1, 0x5B8($s0)
    ctx->pc = 0x1b6f24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 3));
    // 0x1b6f28: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b6f28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6F2Cu;
        // 0x1b6f30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6F34u;
    // 0x1b6f34: 0x0  nop
    ctx->pc = 0x1b6f34u;
    // NOP
    ctx->pc = 0x1b6f38u;
}
