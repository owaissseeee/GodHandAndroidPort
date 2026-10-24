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

// Function: func_002387B8
// Address: 0x2387b8 - 0x238898
void func_002387B8_0x2387b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002387B8_0x2387b8");
#endif

    switch (ctx->pc) {
        case 0x2387e0u: goto label_2387e0;
        case 0x238838u: goto label_238838;
        case 0x23884cu: goto label_23884c;
        case 0x238878u: goto label_238878;
        case 0x238884u: goto label_238884;
        default: break;
    }

    ctx->pc = 0x2387b8u;

    // 0x2387b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2387b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2387bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2387bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2387c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2387c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2387c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2387c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2387c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2387c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2387cc: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x2387ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x2387d0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2387d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2387d4: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x2387d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x2387d8: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x2387D8u;
    SET_GPR_U32(ctx, 31, 0x2387E0u);
    ctx->pc = 0x2387DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2387D8u;
    // 0x2387dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x2387D8u, 0x2387E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2387E0u;
label_2387e0:
    // 0x2387e0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2387e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2387e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2387e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2387e8: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x2387e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2387ec: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2387ECu;
    {
        const bool branch_taken_0x2387ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2387F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2387ECu;
        // 0x2387f0: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2387ec) {
            ctx->pc = 0x238808u;
            goto label_238808;
        }
    }
    ctx->pc = 0x2387F4u;
    // 0x2387f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2387f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2387f8: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2387F8u;
    {
        const bool branch_taken_0x2387f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2387f8) {
            ctx->pc = 0x238844u;
            goto label_238844;
        }
    }
    ctx->pc = 0x238800u;
    // 0x238800: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x238800u;
    {
        const bool branch_taken_0x238800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238800u;
        // 0x238804: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238800) {
            ctx->pc = 0x238888u;
            goto label_238888;
        }
    }
    ctx->pc = 0x238808u;
label_238808:
    // 0x238808: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x238808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23880c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23880cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238810: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x238810u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x238814: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x238814u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238818: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x238818u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23881c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x23881cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238820: 0x8c4536d0  lw          $a1, 0x36D0($v0)
    ctx->pc = 0x238820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14032)));
    // 0x238824: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x238824u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238828: 0x8c4636d4  lw          $a2, 0x36D4($v0)
    ctx->pc = 0x238828u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14036)));
    // 0x23882c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x23882cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x238830: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x238830u;
    SET_GPR_U32(ctx, 31, 0x238838u);
    ctx->pc = 0x238834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238830u;
    // 0x238834: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x238830u, 0x238838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238838u;
label_238838:
    // 0x238838: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x238838u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x23883c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23883cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x238840: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x238840u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_238844:
    // 0x238844: 0xc055f06  jal         func_157C18
    ctx->pc = 0x238844u;
    SET_GPR_U32(ctx, 31, 0x23884Cu);
    ctx->pc = 0x238848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238844u;
    // 0x238848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x238844u, 0x23884Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23884Cu;
label_23884c:
    // 0x23884c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23884Cu;
    {
        const bool branch_taken_0x23884c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23884Cu;
        // 0x238850: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23884c) {
            ctx->pc = 0x238864u;
            goto label_238864;
        }
    }
    ctx->pc = 0x238854u;
    // 0x238854: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x238854u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x238858: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x238858u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x23885c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x23885cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x238860: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x238860u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_238864:
    // 0x238864: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x238864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x238868: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x238868u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23886c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23886cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238870: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x238870u;
    SET_GPR_U32(ctx, 31, 0x238878u);
    ctx->pc = 0x238874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238870u;
    // 0x238874: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x238870u, 0x238878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238878u;
label_238878:
    // 0x238878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23887c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x23887Cu;
    SET_GPR_U32(ctx, 31, 0x238884u);
    ctx->pc = 0x238880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23887Cu;
    // 0x238880: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x23887Cu, 0x238884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238884u;
label_238884:
    // 0x238884: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x238884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_238888:
    // 0x238888: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x238888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23888c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x23888cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x238890: 0x3e00008  jr          $ra
    ctx->pc = 0x238890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238890u;
        // 0x238894: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238898u;
}
