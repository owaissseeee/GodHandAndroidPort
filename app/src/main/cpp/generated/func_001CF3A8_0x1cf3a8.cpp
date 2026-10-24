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

// Function: func_001CF3A8
// Address: 0x1cf3a8 - 0x1cf4a8
void func_001CF3A8_0x1cf3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001CF3A8_0x1cf3a8");
#endif

    switch (ctx->pc) {
        case 0x1cf430u: goto label_1cf430;
        default: break;
    }

    ctx->pc = 0x1cf3a8u;

    // 0x1cf3a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cf3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cf3ac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1cf3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1cf3b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cf3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cf3b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cf3b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf3b8: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x1cf3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1cf3bc: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x1CF3BCu;
    {
        const bool branch_taken_0x1cf3bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF3BCu;
        // 0x1cf3c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf3bc) {
            ctx->pc = 0x1CF498u;
            goto label_1cf498;
        }
    }
    ctx->pc = 0x1CF3C4u;
    // 0x1cf3c4: 0x906502b4  lbu         $a1, 0x2B4($v1)
    ctx->pc = 0x1cf3c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 692)));
    // 0x1cf3c8: 0x8e040604  lw          $a0, 0x604($s0)
    ctx->pc = 0x1cf3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x1cf3cc: 0x4800002  bltz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF3CCu;
    {
        const bool branch_taken_0x1cf3cc = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1CF3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF3CCu;
        // 0x1cf3d0: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf3cc) {
            ctx->pc = 0x1CF3D8u;
            goto label_1cf3d8;
        }
    }
    ctx->pc = 0x1CF3D4u;
    // 0x1cf3d4: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x1cf3d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1cf3d8:
    // 0x1cf3d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1cf3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1cf3dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CF3DCu;
    {
        const bool branch_taken_0x1cf3dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF3DCu;
        // 0x1cf3e0: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf3dc) {
            ctx->pc = 0x1CF3F4u;
            goto label_1cf3f4;
        }
    }
    ctx->pc = 0x1CF3E4u;
    // 0x1cf3e4: 0x8c630278  lw          $v1, 0x278($v1)
    ctx->pc = 0x1cf3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 632)));
    // 0x1cf3e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cf3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cf3ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF3ECu;
    {
        const bool branch_taken_0x1cf3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF3ECu;
        // 0x1cf3f0: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf3ec) {
            ctx->pc = 0x1CF3F8u;
            goto label_1cf3f8;
        }
    }
    ctx->pc = 0x1CF3F4u;
label_1cf3f4:
    // 0x1cf3f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cf3f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf3f8:
    // 0x1cf3f8: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1CF3F8u;
    {
        const bool branch_taken_0x1cf3f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF3F8u;
        // 0x1cf3fc: 0x26030610  addiu       $v1, $s0, 0x610 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf3f8) {
            ctx->pc = 0x1CF498u;
            goto label_1cf498;
        }
    }
    ctx->pc = 0x1CF400u;
    // 0x1cf400: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x1cf400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1cf404: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CF404u;
    {
        const bool branch_taken_0x1cf404 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1CF408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF404u;
        // 0x1cf408: 0x24450080  addiu       $a1, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf404) {
            ctx->pc = 0x1CF428u;
            goto label_1cf428;
        }
    }
    ctx->pc = 0x1CF40Cu;
    // 0x1cf40c: 0xc6000610  lwc1        $f0, 0x610($s0)
    ctx->pc = 0x1cf40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf410: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1cf410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1cf414: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1cf414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf418: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x1cf418u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1cf41c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1cf41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf420: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1cf420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1cf424: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x1cf424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_1cf428:
    // 0x1cf428: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x1CF428u;
    SET_GPR_U32(ctx, 31, 0x1CF430u);
    ctx->pc = 0x1CF42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF428u;
    // 0x1cf42c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x1CF428u, 0x1CF430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF430u;
label_1cf430:
    // 0x1cf430: 0x8e040600  lw          $a0, 0x600($s0)
    ctx->pc = 0x1cf430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1cf434: 0x26030100  addiu       $v1, $s0, 0x100
    ctx->pc = 0x1cf434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x1cf438: 0x24820100  addiu       $v0, $a0, 0x100
    ctx->pc = 0x1cf438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x1cf43c: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CF43Cu;
    {
        const bool branch_taken_0x1cf43c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cf43c) {
            ctx->pc = 0x1CF440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF43Cu;
            // 0x1cf440: 0x8e030600  lw          $v1, 0x600($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF460u;
            goto label_1cf460;
        }
    }
    ctx->pc = 0x1CF444u;
    // 0x1cf444: 0xc4800100  lwc1        $f0, 0x100($a0)
    ctx->pc = 0x1cf444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf448: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x1cf448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    // 0x1cf44c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1cf44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf450: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1cf450u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1cf454: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1cf454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf458: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1cf458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1cf45c: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x1cf45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
label_1cf460:
    // 0x1cf460: 0xc460024c  lwc1        $f0, 0x24C($v1)
    ctx->pc = 0x1cf460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf464: 0xe600024c  swc1        $f0, 0x24C($s0)
    ctx->pc = 0x1cf464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
    // 0x1cf468: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x1cf468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x1cf46c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1cf46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1cf470: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CF470u;
    {
        const bool branch_taken_0x1cf470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf470) {
            ctx->pc = 0x1CF474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF470u;
            // 0x1cf474: 0x8e030250  lw          $v1, 0x250($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF488u;
            goto label_1cf488;
        }
    }
    ctx->pc = 0x1CF478u;
    // 0x1cf478: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x1cf478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x1cf47c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1cf47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1cf480: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1CF480u;
    {
        const bool branch_taken_0x1cf480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF480u;
        // 0x1cf484: 0xae020250  sw          $v0, 0x250($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf480) {
            ctx->pc = 0x1CF498u;
            goto label_1cf498;
        }
    }
    ctx->pc = 0x1CF488u;
label_1cf488:
    // 0x1cf488: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1cf488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1cf48c: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x1cf48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x1cf490: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1cf490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1cf494: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x1cf494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
label_1cf498:
    // 0x1cf498: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1cf498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cf49c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cf49cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf4a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF4A0u;
        // 0x1cf4a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF4A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF4A8u;
}
