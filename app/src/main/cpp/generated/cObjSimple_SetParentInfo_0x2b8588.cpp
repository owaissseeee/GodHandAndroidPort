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

// Function: cObjSimple_SetParentInfo
// Address: 0x2b8588 - 0x2b8630
void cObjSimple_SetParentInfo_0x2b8588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cObjSimple_SetParentInfo_0x2b8588");
#endif

    ctx->pc = 0x2b8588u;

    // 0x2b8588: 0x10a00027  beqz        $a1, . + 4 + (0x27 << 2)
    ctx->pc = 0x2B8588u;
    {
        const bool branch_taken_0x2b8588 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B858Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8588u;
        // 0x2b858c: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8588) {
            ctx->pc = 0x2B8628u;
            goto label_2b8628;
        }
    }
    ctx->pc = 0x2B8590u;
    // 0x2b8590: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b8590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b8594: 0x10c2000f  beq         $a2, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2B8594u;
    {
        const bool branch_taken_0x2b8594 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B8598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8594u;
        // 0x2b8598: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8594) {
            ctx->pc = 0x2B85D4u;
            goto label_2b85d4;
        }
    }
    ctx->pc = 0x2B859Cu;
    // 0x2b859c: 0x90a302b4  lbu         $v1, 0x2B4($a1)
    ctx->pc = 0x2b859cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 692)));
    // 0x2b85a0: 0x4c00002  bltz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B85A0u;
    {
        const bool branch_taken_0x2b85a0 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x2B85A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B85A0u;
        // 0x2b85a4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b85a0) {
            ctx->pc = 0x2B85ACu;
            goto label_2b85ac;
        }
    }
    ctx->pc = 0x2B85A8u;
    // 0x2b85a8: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x2b85a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2b85ac:
    // 0x2b85ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b85acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b85b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B85B0u;
    {
        const bool branch_taken_0x2b85b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B85B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B85B0u;
        // 0x2b85b4: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b85b0) {
            ctx->pc = 0x2B85C8u;
            goto label_2b85c8;
        }
    }
    ctx->pc = 0x2B85B8u;
    // 0x2b85b8: 0x8ca30278  lw          $v1, 0x278($a1)
    ctx->pc = 0x2b85b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 632)));
    // 0x2b85bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b85bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b85c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B85C0u;
    {
        const bool branch_taken_0x2b85c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B85C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B85C0u;
        // 0x2b85c4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b85c0) {
            ctx->pc = 0x2B85CCu;
            goto label_2b85cc;
        }
    }
    ctx->pc = 0x2B85C8u;
label_2b85c8:
    // 0x2b85c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b85c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b85cc:
    // 0x2b85cc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2B85CCu;
    {
        const bool branch_taken_0x2b85cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b85cc) {
            ctx->pc = 0x2B8628u;
            goto label_2b8628;
        }
    }
    ctx->pc = 0x2B85D4u;
label_2b85d4:
    // 0x2b85d4: 0xac8530b0  sw          $a1, 0x30B0($a0)
    ctx->pc = 0x2b85d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12464), GPR_U32(ctx, 5));
    // 0x2b85d8: 0x248230c0  addiu       $v0, $a0, 0x30C0
    ctx->pc = 0x2b85d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 12480));
    // 0x2b85dc: 0x10470007  beq         $v0, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B85DCu;
    {
        const bool branch_taken_0x2b85dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B85E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B85DCu;
        // 0x2b85e0: 0xac8630b4  sw          $a2, 0x30B4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12468), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b85dc) {
            ctx->pc = 0x2B85FCu;
            goto label_2b85fc;
        }
    }
    ctx->pc = 0x2B85E4u;
    // 0x2b85e4: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x2b85e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b85e8: 0xe48030c0  swc1        $f0, 0x30C0($a0)
    ctx->pc = 0x2b85e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12480), bits); }
    // 0x2b85ec: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x2b85ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b85f0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2b85f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b85f4: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x2b85f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b85f8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2b85f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b85fc:
    // 0x2b85fc: 0x248230d0  addiu       $v0, $a0, 0x30D0
    ctx->pc = 0x2b85fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 12496));
    // 0x2b8600: 0x50480008  beql        $v0, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B8600u;
    {
        const bool branch_taken_0x2b8600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x2b8600) {
            ctx->pc = 0x2B8604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8600u;
            // 0x2b8604: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8624u;
            goto label_2b8624;
        }
    }
    ctx->pc = 0x2B8608u;
    // 0x2b8608: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x2b8608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b860c: 0xe48030d0  swc1        $f0, 0x30D0($a0)
    ctx->pc = 0x2b860cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12496), bits); }
    // 0x2b8610: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x2b8610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8614: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2b8614u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b8618: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x2b8618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b861c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2b861cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2b8620: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b8620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b8624:
    // 0x2b8624: 0xa08204e0  sb          $v0, 0x4E0($a0)
    ctx->pc = 0x2b8624u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1248), (uint8_t)GPR_U32(ctx, 2));
label_2b8628:
    // 0x2b8628: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B862Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8628u;
        // 0x2b862c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8630u;
}
