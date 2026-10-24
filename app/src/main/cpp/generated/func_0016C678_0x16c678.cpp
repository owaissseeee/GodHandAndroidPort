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

// Function: func_0016C678
// Address: 0x16c678 - 0x16c730
void func_0016C678_0x16c678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0016C678_0x16c678");
#endif

    switch (ctx->pc) {
        case 0x16c68cu: goto label_16c68c;
        case 0x16c69cu: goto label_16c69c;
        case 0x16c6e0u: goto label_16c6e0;
        case 0x16c6e8u: goto label_16c6e8;
        case 0x16c6f0u: goto label_16c6f0;
        case 0x16c6f8u: goto label_16c6f8;
        case 0x16c714u: goto label_16c714;
        case 0x16c720u: goto label_16c720;
        default: break;
    }

    ctx->pc = 0x16c678u;

    // 0x16c678: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16c678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16c67c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16c67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16c680: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16c680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16c684: 0xc05857c  jal         func_1615F0
    ctx->pc = 0x16C684u;
    SET_GPR_U32(ctx, 31, 0x16C68Cu);
    ctx->pc = 0x16C688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C684u;
    // 0x16c688: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1615F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1615F0u, 0x16C684u, 0x16C68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C68Cu;
label_16c68c:
    // 0x16c68c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x16c68cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x16c690: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16c690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c694: 0xc04e3d0  jal         func_138F40
    ctx->pc = 0x16C694u;
    SET_GPR_U32(ctx, 31, 0x16C69Cu);
    ctx->pc = 0x16C698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C694u;
    // 0x16c698: 0x24843050  addiu       $a0, $a0, 0x3050 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138F40u, 0x16C694u, 0x16C69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C69Cu;
label_16c69c:
    // 0x16c69c: 0x8e040264  lw          $a0, 0x264($s0)
    ctx->pc = 0x16c69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x16c6a0: 0x26030270  addiu       $v1, $s0, 0x270
    ctx->pc = 0x16c6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 624));
    // 0x16c6a4: 0x24820100  addiu       $v0, $a0, 0x100
    ctx->pc = 0x16c6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x16c6a8: 0x50430008  beql        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x16C6A8u;
    {
        const bool branch_taken_0x16c6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16c6a8) {
            ctx->pc = 0x16C6ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C6A8u;
            // 0x16c6ac: 0x8e030264  lw          $v1, 0x264($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C6CCu;
            goto label_16c6cc;
        }
    }
    ctx->pc = 0x16C6B0u;
    // 0x16c6b0: 0xc6000270  lwc1        $f0, 0x270($s0)
    ctx->pc = 0x16c6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c6b4: 0xe4800100  swc1        $f0, 0x100($a0)
    ctx->pc = 0x16c6b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 256), bits); }
    // 0x16c6b8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x16c6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16c6bc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x16c6bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x16c6c0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x16c6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c6c4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x16c6c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x16c6c8: 0x8e030264  lw          $v1, 0x264($s0)
    ctx->pc = 0x16c6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_16c6cc:
    // 0x16c6cc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x16c6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16c6d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16c6d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c6d4: 0xac6202c0  sw          $v0, 0x2C0($v1)
    ctx->pc = 0x16c6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 704), GPR_U32(ctx, 2));
    // 0x16c6d8: 0xc042e22  jal         func_10B888
    ctx->pc = 0x16C6D8u;
    SET_GPR_U32(ctx, 31, 0x16C6E0u);
    ctx->pc = 0x16C6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C6D8u;
    // 0x16c6dc: 0x8e040264  lw          $a0, 0x264($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B888u, 0x16C6D8u, 0x16C6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C6E0u;
label_16c6e0:
    // 0x16c6e0: 0xc0aa81e  jal         func_2AA078
    ctx->pc = 0x16C6E0u;
    SET_GPR_U32(ctx, 31, 0x16C6E8u);
    ctx->pc = 0x16C6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C6E0u;
    // 0x16c6e4: 0x26040290  addiu       $a0, $s0, 0x290 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA078u, 0x16C6E0u, 0x16C6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C6E8u;
label_16c6e8:
    // 0x16c6e8: 0xc0aa81e  jal         func_2AA078
    ctx->pc = 0x16C6E8u;
    SET_GPR_U32(ctx, 31, 0x16C6F0u);
    ctx->pc = 0x16C6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C6E8u;
    // 0x16c6ec: 0x26040170  addiu       $a0, $s0, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA078u, 0x16C6E8u, 0x16C6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C6F0u;
label_16c6f0:
    // 0x16c6f0: 0xc0aa81e  jal         func_2AA078
    ctx->pc = 0x16C6F0u;
    SET_GPR_U32(ctx, 31, 0x16C6F8u);
    ctx->pc = 0x16C6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C6F0u;
    // 0x16c6f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA078u, 0x16C6F0u, 0x16C6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C6F8u;
label_16c6f8:
    // 0x16c6f8: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x16c6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x16c6fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16c6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c700: 0x8ca22384  lw          $v0, 0x2384($a1)
    ctx->pc = 0x16c700u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2384u));
    // 0x16c704: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16c704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16c708: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x16c708u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x16c70c: 0xc058564  jal         func_161590
    ctx->pc = 0x16C70Cu;
    SET_GPR_U32(ctx, 31, 0x16C714u);
    ctx->pc = 0x16C710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C70Cu;
    // 0x16c710: 0xac60002c  sw          $zero, 0x2C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161590u, 0x16C70Cu, 0x16C714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C714u;
label_16c714:
    // 0x16c714: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x16c714u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x16c718: 0xc0b6628  jal         func_2D98A0
    ctx->pc = 0x16C718u;
    SET_GPR_U32(ctx, 31, 0x16C720u);
    ctx->pc = 0x16C71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C718u;
    // 0x16c71c: 0x24844700  addiu       $a0, $a0, 0x4700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D98A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D98A0u, 0x16C718u, 0x16C720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C720u;
label_16c720:
    // 0x16c720: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16c720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c724: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16c724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c728: 0x3e00008  jr          $ra
    ctx->pc = 0x16C728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C728u;
        // 0x16c72c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C730u;
}
