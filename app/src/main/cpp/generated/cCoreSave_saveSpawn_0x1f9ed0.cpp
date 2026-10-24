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

// Function: cCoreSave_saveSpawn
// Address: 0x1f9ed0 - 0x1f9f50
void cCoreSave_saveSpawn_0x1f9ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_saveSpawn_0x1f9ed0");
#endif

    ctx->pc = 0x1f9ed0u;

    // 0x1f9ed0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1f9ed0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9ed4: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1f9ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f9ed8: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1F9ED8u;
    {
        const bool branch_taken_0x1f9ed8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9ED8u;
        // 0x1f9edc: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ed8) {
            ctx->pc = 0x1F9F44u;
            goto label_1f9f44;
        }
    }
    ctx->pc = 0x1F9EE0u;
    // 0x1f9ee0: 0x24423ec0  addiu       $v0, $v0, 0x3EC0
    ctx->pc = 0x1f9ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16064));
    // 0x1f9ee4: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x1f9ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x1f9ee8: 0x94830010  lhu         $v1, 0x10($a0)
    ctx->pc = 0x1f9ee8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1f9eec: 0xa4a3015a  sh          $v1, 0x15A($a1)
    ctx->pc = 0x1f9eecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 346), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f9ef0: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x1f9ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9ef4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1f9ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f9ef8: 0xe460015c  swc1        $f0, 0x15C($v1)
    ctx->pc = 0x1f9ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 348), bits); }
    // 0x1f9efc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f9efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f9f00: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1f9f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9f04: 0xe4400160  swc1        $f0, 0x160($v0)
    ctx->pc = 0x1f9f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 352), bits); }
    // 0x1f9f08: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1f9f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f9f0c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1f9f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9f10: 0xe4600164  swc1        $f0, 0x164($v1)
    ctx->pc = 0x1f9f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 356), bits); }
    // 0x1f9f14: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f9f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f9f18: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x1f9f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9f1c: 0xe4400168  swc1        $f0, 0x168($v0)
    ctx->pc = 0x1f9f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 360), bits); }
    // 0x1f9f20: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1f9f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f9f24: 0x90820012  lbu         $v0, 0x12($a0)
    ctx->pc = 0x1f9f24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x1f9f28: 0xa0620158  sb          $v0, 0x158($v1)
    ctx->pc = 0x1f9f28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 344), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f9f2c: 0x90820013  lbu         $v0, 0x13($a0)
    ctx->pc = 0x1f9f2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 19)));
    // 0x1f9f30: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1f9f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f9f34: 0xa0a20159  sb          $v0, 0x159($a1)
    ctx->pc = 0x1f9f34u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 345), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f9f38: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1f9f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f9f3c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1f9f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1f9f40: 0xac62016c  sw          $v0, 0x16C($v1)
    ctx->pc = 0x1f9f40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 364), GPR_U32(ctx, 2));
label_1f9f44:
    // 0x1f9f44: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9F4Cu;
    // 0x1f9f4c: 0x0  nop
    ctx->pc = 0x1f9f4cu;
    // NOP
    ctx->pc = 0x1f9f50u;
}
