#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r200_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r200
{
// Function: func_0079A6B0
// Address: 0x79a6b0 - 0x79a7b0
void func_0079A6B0_0x79a6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A6B0_0x79a6b0");
#endif

    switch (ctx->pc) {
        case 0x79a6f4u: goto label_79a6f4;
        case 0x79a754u: goto label_79a754;
        default: break;
    }

    ctx->pc = 0x79a6b0u;

    // 0x79a6b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x79a6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79a6b4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x79a6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x79a6b8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x79a6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x79a6bc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x79a6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x79a6c0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x79a6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x79a6c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a6c8: 0x14a20032  bne         $a1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x79A6C8u;
    {
        const bool branch_taken_0x79a6c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x79A6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6C8u;
        // 0x79a6cc: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a6c8) {
            ctx->pc = 0x79A794u;
            goto label_79a794;
        }
    }
    ctx->pc = 0x79A6D0u;
    // 0x79a6d0: 0x10800030  beqz        $a0, . + 4 + (0x30 << 2)
    ctx->pc = 0x79A6D0u;
    {
        const bool branch_taken_0x79a6d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6D0u;
        // 0x79a6d4: 0x3c11007a  lui         $s1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a6d0) {
            ctx->pc = 0x79A794u;
            goto label_79a794;
        }
    }
    ctx->pc = 0x79A6D8u;
    // 0x79a6d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a6d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a6dc: 0x2630aa80  addiu       $s0, $s1, -0x5580
    ctx->pc = 0x79a6dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294945408));
    // 0x79a6e0: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x79a6e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x79a6e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79a6e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79a6e8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79a6e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79a6ec: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x79A6ECu;
    SET_GPR_U32(ctx, 31, 0x79A6F4u);
    ctx->pc = 0x79A6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6ECu;
    // 0x79a6f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x79A6ECu, 0x79A6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6F4u;
label_79a6f4:
    // 0x79a6f4: 0x2412000a  addiu       $s2, $zero, 0xA
    ctx->pc = 0x79a6f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x79a6f8: 0x3c014096  lui         $at, 0x4096
    ctx->pc = 0x79a6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16534 << 16));
    // 0x79a6fc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x79a6fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x79a700: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79a700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79a704: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79a704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a708: 0x3c01c174  lui         $at, 0xC174
    ctx->pc = 0x79a708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49524 << 16));
    // 0x79a70c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x79a70cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x79a710: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79a710u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79a714: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x79a714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79a718: 0x3c0142da  lui         $at, 0x42DA
    ctx->pc = 0x79a718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17114 << 16));
    // 0x79a71c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x79a71cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x79a720: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a720u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a724: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a728: 0xe621aa80  swc1        $f1, -0x5580($s1)
    ctx->pc = 0x79a728u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294945408), bits); }
    // 0x79a72c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x79a72cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x79a730: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x79a730u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x79a734: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x79a734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x79a738: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x79a738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x79a73c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x79a73cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x79a740: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x79a740u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x79a744: 0xae120018  sw          $s2, 0x18($s0)
    ctx->pc = 0x79a744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 18));
    // 0x79a748: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x79a748u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x79a74c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x79A74Cu;
    SET_GPR_U32(ctx, 31, 0x79A754u);
    ctx->pc = 0x79A750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A74Cu;
    // 0x79a750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x79A74Cu, 0x79A754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A754u;
label_79a754:
    // 0x79a754: 0x3c01c158  lui         $at, 0xC158
    ctx->pc = 0x79a754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49496 << 16));
    // 0x79a758: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79a758u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79a75c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x79a75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a760: 0x3c01c080  lui         $at, 0xC080
    ctx->pc = 0x79a760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49280 << 16));
    // 0x79a764: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79a764u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79a768: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x79a768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79a76c: 0x3c0141b6  lui         $at, 0x41B6
    ctx->pc = 0x79a76cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16822 << 16));
    // 0x79a770: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x79a770u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x79a774: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a778: 0xae120018  sw          $s2, 0x18($s0)
    ctx->pc = 0x79a778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 18));
    // 0x79a77c: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x79a77cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x79a780: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x79a780u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x79a784: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x79a784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x79a788: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x79a788u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x79a78c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x79a78cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x79a790: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x79a790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_79a794:
    // 0x79a794: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x79a794u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a798: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x79a798u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a79c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x79a79cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a7a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a7a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a7a4: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x79a7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79a7a8: 0x3e00008  jr          $ra
    ctx->pc = 0x79A7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7A8u;
        // 0x79a7ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A7A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A7B0u;
}
} // namespace gh_r200
