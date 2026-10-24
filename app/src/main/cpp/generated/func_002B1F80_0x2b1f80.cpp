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

// Function: func_002B1F80
// Address: 0x2b1f80 - 0x2b2058
void func_002B1F80_0x2b1f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B1F80_0x2b1f80");
#endif

    switch (ctx->pc) {
        case 0x2b2048u: goto label_2b2048;
        default: break;
    }

    ctx->pc = 0x2b1f80u;

    // 0x2b1f80: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2b1f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b1f84: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2b1f84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2b1f88: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x2b1f88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2b1f8c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2b1f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2b1f90: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b1f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b1f94: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2b1f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2b1f98: 0x656021  addu        $t4, $v1, $a1
    ctx->pc = 0x2b1f98u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2b1f9c: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x2b1f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2b1fa0: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B1FA0u;
    {
        const bool branch_taken_0x2b1fa0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B1FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1FA0u;
        // 0x2b1fa4: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1fa0) {
            ctx->pc = 0x2B1FACu;
            goto label_2b1fac;
        }
    }
    ctx->pc = 0x2B1FA8u;
    // 0x2b1fa8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2b1fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b1fac:
    // 0x2b1fac: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2b1facu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2b1fb0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2b1fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2b1fb4: 0x8c6679f4  lw          $a2, 0x79F4($v1)
    ctx->pc = 0x2b1fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31220)));
    // 0x2b1fb8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b1fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b1fbc: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x2b1fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x2b1fc0: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x2b1fc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x2b1fc4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2b1fc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b1fc8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b1fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b1fcc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2b1fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2b1fd0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b1fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b1fd4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b1fd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b1fd8: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x2b1fd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b1fdc: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x2b1fdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1fe0: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2b1fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2b1fe4: 0x24083b00  addiu       $t0, $zero, 0x3B00
    ctx->pc = 0x2b1fe4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15104));
    // 0x2b1fe8: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x2b1fe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2b1fec: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2b1fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2b1ff0: 0xc5800004  lwc1        $f0, 0x4($t4)
    ctx->pc = 0x2b1ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b1ff4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b1ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b1ff8: 0x24091cf0  addiu       $t1, $zero, 0x1CF0
    ctx->pc = 0x2b1ff8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7408));
    // 0x2b1ffc: 0x27aa0010  addiu       $t2, $sp, 0x10
    ctx->pc = 0x2b1ffcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b2000: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2b2000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2b2004: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x2b2004u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b2008: 0xc5800008  lwc1        $f0, 0x8($t4)
    ctx->pc = 0x2b2008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b200c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2b200cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2b2010: 0xc581000c  lwc1        $f1, 0xC($t4)
    ctx->pc = 0x2b2010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b2014: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x2b2014u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2b2018: 0xc5800010  lwc1        $f0, 0x10($t4)
    ctx->pc = 0x2b2018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b201c: 0xe7ac0060  swc1        $f12, 0x60($sp)
    ctx->pc = 0x2b201cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2b2020: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2b2020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2b2024: 0xe7ad0064  swc1        $f13, 0x64($sp)
    ctx->pc = 0x2b2024u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2b2028: 0xe7ae0070  swc1        $f14, 0x70($sp)
    ctx->pc = 0x2b2028u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2b202c: 0xe7af0074  swc1        $f15, 0x74($sp)
    ctx->pc = 0x2b202cu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2b2030: 0xe7a30078  swc1        $f3, 0x78($sp)
    ctx->pc = 0x2b2030u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2b2034: 0xe7a2007c  swc1        $f2, 0x7C($sp)
    ctx->pc = 0x2b2034u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2b2038: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2b2038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2b203c: 0xe7a30068  swc1        $f3, 0x68($sp)
    ctx->pc = 0x2b203cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2b2040: 0xc05745a  jal         func_15D168
    ctx->pc = 0x2B2040u;
    SET_GPR_U32(ctx, 31, 0x2B2048u);
    ctx->pc = 0x2B2044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2040u;
    // 0x2b2044: 0xe7a2006c  swc1        $f2, 0x6C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D168u, 0x2B2040u, 0x2B2048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2048u;
label_2b2048:
    // 0x2b2048: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2b2048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b204c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B204Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B204Cu;
        // 0x2b2050: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B204Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2054u;
    // 0x2b2054: 0x0  nop
    ctx->pc = 0x2b2054u;
    // NOP
    ctx->pc = 0x2b2058u;
}
