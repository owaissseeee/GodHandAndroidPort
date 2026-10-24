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

// Function: func_00169258
// Address: 0x169258 - 0x169358
void func_00169258_0x169258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00169258_0x169258");
#endif

    ctx->pc = 0x169258u;

    // 0x169258: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x169258u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16925c: 0x80e3005b  lb          $v1, 0x5B($a3)
    ctx->pc = 0x16925cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 91)));
    // 0x169260: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x169260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169264: 0x10640014  beq         $v1, $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x169264u;
    {
        const bool branch_taken_0x169264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x169268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169264u;
        // 0x169268: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x169264) {
            ctx->pc = 0x1692B8u;
            goto label_1692b8;
        }
    }
    ctx->pc = 0x16926Cu;
    // 0x16926c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x16926Cu;
    {
        const bool branch_taken_0x16926c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16926c) {
            ctx->pc = 0x169270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16926Cu;
            // 0x169270: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169284u;
            goto label_169284;
        }
    }
    ctx->pc = 0x169274u;
    // 0x169274: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x169274u;
    {
        const bool branch_taken_0x169274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x169278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169274u;
        // 0x169278: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169274) {
            ctx->pc = 0x16929Cu;
            goto label_16929c;
        }
    }
    ctx->pc = 0x16927Cu;
    // 0x16927c: 0x3e00008  jr          $ra
    ctx->pc = 0x16927Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16927Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169284u;
label_169284:
    // 0x169284: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x169284u;
    {
        const bool branch_taken_0x169284 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x169288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169284u;
        // 0x169288: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169284) {
            ctx->pc = 0x1692DCu;
            goto label_1692dc;
        }
    }
    ctx->pc = 0x16928Cu;
    // 0x16928c: 0x5062002b  beql        $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x16928Cu;
    {
        const bool branch_taken_0x16928c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16928c) {
            ctx->pc = 0x169290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16928Cu;
            // 0x169290: 0x90e20286  lbu         $v0, 0x286($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 646)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16933Cu;
            goto label_16933c;
        }
    }
    ctx->pc = 0x169294u;
    // 0x169294: 0x3e00008  jr          $ra
    ctx->pc = 0x169294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16929Cu;
label_16929c:
    // 0x16929c: 0x8ce30124  lw          $v1, 0x124($a3)
    ctx->pc = 0x16929cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 292)));
    // 0x1692a0: 0xc440fe60  lwc1        $f0, -0x1A0($v0)
    ctx->pc = 0x1692a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1692a4: 0xa4e001d2  sh          $zero, 0x1D2($a3)
    ctx->pc = 0x1692a4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 466), (uint16_t)GPR_U32(ctx, 0));
    // 0x1692a8: 0xa4e001d0  sh          $zero, 0x1D0($a3)
    ctx->pc = 0x1692a8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 464), (uint16_t)GPR_U32(ctx, 0));
    // 0x1692ac: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x1692acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x1692b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1692B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1692B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1692B0u;
        // 0x1692b4: 0xa0e4005b  sb          $a0, 0x5B($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 91), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1692B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1692B8u;
label_1692b8:
    // 0x1692b8: 0x84e201d2  lh          $v0, 0x1D2($a3)
    ctx->pc = 0x1692b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 466)));
    // 0x1692bc: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x1692bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x1692c0: 0x2463fe60  addiu       $v1, $v1, -0x1A0
    ctx->pc = 0x1692c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966880));
    // 0x1692c4: 0x8ce40124  lw          $a0, 0x124($a3)
    ctx->pc = 0x1692c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 292)));
    // 0x1692c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1692c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1692cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1692ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1692d0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1692d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1692d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1692D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1692D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1692D4u;
        // 0x1692d8: 0xe480003c  swc1        $f0, 0x3C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1692D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1692DCu;
label_1692dc:
    // 0x1692dc: 0x8ce2008c  lw          $v0, 0x8C($a3)
    ctx->pc = 0x1692dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 140)));
    // 0x1692e0: 0x24042001  addiu       $a0, $zero, 0x2001
    ctx->pc = 0x1692e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8193));
    // 0x1692e4: 0x3c05f7ff  lui         $a1, 0xF7FF
    ctx->pc = 0x1692e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63487 << 16));
    // 0x1692e8: 0x3c060042  lui         $a2, 0x42
    ctx->pc = 0x1692e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)66 << 16));
    // 0x1692ec: 0xa4440090  sh          $a0, 0x90($v0)
    ctx->pc = 0x1692ecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 4));
    // 0x1692f0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1692f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1692f4: 0x24c6fe78  addiu       $a2, $a2, -0x188
    ctx->pc = 0x1692f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966904));
    // 0x1692f8: 0x8ce20090  lw          $v0, 0x90($a3)
    ctx->pc = 0x1692f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 144)));
    // 0x1692fc: 0xa4440090  sh          $a0, 0x90($v0)
    ctx->pc = 0x1692fcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 4));
    // 0x169300: 0x8ce30094  lw          $v1, 0x94($a3)
    ctx->pc = 0x169300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 148)));
    // 0x169304: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x169304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x169308: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x169308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x16930c: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x16930cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x169310: 0x8ce40098  lw          $a0, 0x98($a3)
    ctx->pc = 0x169310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 152)));
    // 0x169314: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x169314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x169318: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x169318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x16931c: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x16931cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x169320: 0x80e301d4  lb          $v1, 0x1D4($a3)
    ctx->pc = 0x169320u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 468)));
    // 0x169324: 0x8ce20094  lw          $v0, 0x94($a3)
    ctx->pc = 0x169324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 148)));
    // 0x169328: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x169328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16932c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x16932cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x169330: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x169330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169334: 0x3e00008  jr          $ra
    ctx->pc = 0x169334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169334u;
        // 0x169338: 0xe4400038  swc1        $f0, 0x38($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16933Cu;
label_16933c:
    // 0x16933c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16933Cu;
    {
        const bool branch_taken_0x16933c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16933Cu;
        // 0x169340: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16933c) {
            ctx->pc = 0x169350u;
            goto label_169350;
        }
    }
    ctx->pc = 0x169344u;
    // 0x169344: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x169344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x169348: 0x3e00008  jr          $ra
    ctx->pc = 0x169348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169348u;
        // 0x16934c: 0xa0e2005b  sb          $v0, 0x5B($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 91), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169350u;
label_169350:
    // 0x169350: 0x3e00008  jr          $ra
    ctx->pc = 0x169350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169350u;
        // 0x169354: 0xa0e2005a  sb          $v0, 0x5A($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 90), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169358u;
}
