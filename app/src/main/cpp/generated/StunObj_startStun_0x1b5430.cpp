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

// Function: StunObj_startStun
// Address: 0x1b5430 - 0x1b54e8
void StunObj_startStun_0x1b5430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StunObj_startStun_0x1b5430");
#endif

    switch (ctx->pc) {
        case 0x1b5468u: goto label_1b5468;
        case 0x1b5484u: goto label_1b5484;
        default: break;
    }

    ctx->pc = 0x1b5430u;

    // 0x1b5430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b5430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b5434: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b5434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5438: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b5438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b543c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1b543cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b5440: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b5440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5444: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b5444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b5448: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1b5448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1b544c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b544cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5450: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1b5450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1b5454: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b5454u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5458: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b5458u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b545c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b545cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5460: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1B5460u;
    SET_GPR_U32(ctx, 31, 0x1B5468u);
    ctx->pc = 0x1B5464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5460u;
    // 0x1b5464: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1B5460u, 0x1B5468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5468u;
label_1b5468:
    // 0x1b5468: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1b5468u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1b546c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b546cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5470: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b5470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b5474: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b5474u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b5478: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b5478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b547c: 0xc06dc68  jal         func_1B71A0
    ctx->pc = 0x1B547Cu;
    SET_GPR_U32(ctx, 31, 0x1B5484u);
    ctx->pc = 0x1B5480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B547Cu;
    // 0x1b5480: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B71A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71A0u, 0x1B547Cu, 0x1B5484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5484u;
label_1b5484:
    // 0x1b5484: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b5484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b5488: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x1b5488u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
    // 0x1b548c: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1B548Cu;
    {
        const bool branch_taken_0x1b548c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B548Cu;
        // 0x1b5490: 0xa6020644  sh          $v0, 0x644($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1604), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b548c) {
            ctx->pc = 0x1B54C8u;
            goto label_1b54c8;
        }
    }
    ctx->pc = 0x1B5494u;
    // 0x1b5494: 0xc6000964  lwc1        $f0, 0x964($s0)
    ctx->pc = 0x1b5494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5498: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x1b5498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
    // 0x1b549c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1b549cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1b54a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b54a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b54a4: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1b54a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1b54a8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1b54a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1b54ac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b54acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b54b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b54b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b54b4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1b54b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b54b8: 0x0  nop
    ctx->pc = 0x1b54b8u;
    // NOP
    // 0x1b54bc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B54BCu;
    {
        const bool branch_taken_0x1b54bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B54C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B54BCu;
        // 0x1b54c0: 0xe6000964  swc1        $f0, 0x964($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2404), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b54bc) {
            ctx->pc = 0x1B54C8u;
            goto label_1b54c8;
        }
    }
    ctx->pc = 0x1B54C4u;
    // 0x1b54c4: 0xe6020964  swc1        $f2, 0x964($s0)
    ctx->pc = 0x1b54c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2404), bits); }
label_1b54c8:
    // 0x1b54c8: 0x8e020600  lw          $v0, 0x600($s0)
    ctx->pc = 0x1b54c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1b54cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b54ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b54d0: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1b54d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1b54d4: 0xae020600  sw          $v0, 0x600($s0)
    ctx->pc = 0x1b54d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
    // 0x1b54d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b54d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b54dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B54DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B54E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B54DCu;
        // 0x1b54e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B54DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B54E4u;
    // 0x1b54e4: 0x0  nop
    ctx->pc = 0x1b54e4u;
    // NOP
    ctx->pc = 0x1b54e8u;
}
