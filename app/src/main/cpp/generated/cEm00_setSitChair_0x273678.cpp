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

// Function: cEm00_setSitChair
// Address: 0x273678 - 0x2736f8
void cEm00_setSitChair_0x273678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_setSitChair_0x273678");
#endif

    ctx->pc = 0x273678u;

    // 0x273678: 0x8c8316d0  lw          $v1, 0x16D0($a0)
    ctx->pc = 0x273678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5840)));
    // 0x27367c: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x27367cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
    // 0x273680: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x273680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x273684: 0x24860490  addiu       $a2, $a0, 0x490
    ctx->pc = 0x273684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1168));
    // 0x273688: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x273688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x27368c: 0xac8016ec  sw          $zero, 0x16EC($a0)
    ctx->pc = 0x27368cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5868), GPR_U32(ctx, 0));
    // 0x273690: 0x10c50007  beq         $a2, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x273690u;
    {
        const bool branch_taken_0x273690 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x273694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273690u;
        // 0x273694: 0xac8316d0  sw          $v1, 0x16D0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 5840), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273690) {
            ctx->pc = 0x2736B0u;
            goto label_2736b0;
        }
    }
    ctx->pc = 0x273698u;
    // 0x273698: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x273698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27369c: 0xe4800490  swc1        $f0, 0x490($a0)
    ctx->pc = 0x27369cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1168), bits); }
    // 0x2736a0: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2736a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2736a4: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x2736a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x2736a8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2736a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2736ac: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x2736acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_2736b0:
    // 0x2736b0: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x2736b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x2736b4: 0x50460008  beql        $v0, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2736B4u;
    {
        const bool branch_taken_0x2736b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x2736b4) {
            ctx->pc = 0x2736B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2736B4u;
            // 0x2736b8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2736D8u;
            goto label_2736d8;
        }
    }
    ctx->pc = 0x2736BCu;
    // 0x2736bc: 0xc4800490  lwc1        $f0, 0x490($a0)
    ctx->pc = 0x2736bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2736c0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2736c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2736c4: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x2736c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2736c8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2736c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2736cc: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2736ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2736d0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2736d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2736d4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2736d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2736d8:
    // 0x2736d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2736d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2736dc: 0xe48c0104  swc1        $f12, 0x104($a0)
    ctx->pc = 0x2736dcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 260), bits); }
    // 0x2736e0: 0xa0821650  sb          $v0, 0x1650($a0)
    ctx->pc = 0x2736e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5712), (uint8_t)GPR_U32(ctx, 2));
    // 0x2736e4: 0xa08302f5  sb          $v1, 0x2F5($a0)
    ctx->pc = 0x2736e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x2736e8: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x2736e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2736ec: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x2736ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x2736f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2736F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2736F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2736F0u;
        // 0x2736f4: 0xa08002f6  sb          $zero, 0x2F6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2736F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2736F8u;
}
