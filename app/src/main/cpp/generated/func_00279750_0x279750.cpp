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

// Function: func_00279750
// Address: 0x279750 - 0x279838
void func_00279750_0x279750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00279750_0x279750");
#endif

    switch (ctx->pc) {
        case 0x279778u: goto label_279778;
        case 0x2797ccu: goto label_2797cc;
        case 0x2797e0u: goto label_2797e0;
        case 0x279814u: goto label_279814;
        case 0x279820u: goto label_279820;
        default: break;
    }

    ctx->pc = 0x279750u;

    // 0x279750: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x279750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x279754: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x279754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279758: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x279758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27975c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27975cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279760: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x279760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x279764: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x279764u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x279768: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x279768u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x27976c: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x27976cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x279770: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x279770u;
    SET_GPR_U32(ctx, 31, 0x279778u);
    ctx->pc = 0x279774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279770u;
    // 0x279774: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x279770u, 0x279778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279778u;
label_279778:
    // 0x279778: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x279778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x27977c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27977cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x279780: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x279780u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x279784: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x279784u;
    {
        const bool branch_taken_0x279784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x279788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279784u;
        // 0x279788: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x279784) {
            ctx->pc = 0x2797A0u;
            goto label_2797a0;
        }
    }
    ctx->pc = 0x27978Cu;
    // 0x27978c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27978cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279790: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x279790u;
    {
        const bool branch_taken_0x279790 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x279790) {
            ctx->pc = 0x2797D8u;
            goto label_2797d8;
        }
    }
    ctx->pc = 0x279798u;
    // 0x279798: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x279798u;
    {
        const bool branch_taken_0x279798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27979Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279798u;
        // 0x27979c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279798) {
            ctx->pc = 0x279824u;
            goto label_279824;
        }
    }
    ctx->pc = 0x2797A0u;
label_2797a0:
    // 0x2797a0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2797a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2797a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2797a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2797a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2797a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2797ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2797acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2797b0: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x2797b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2797b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2797b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2797b8: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x2797b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2797bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2797bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2797c0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2797c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2797c4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2797C4u;
    SET_GPR_U32(ctx, 31, 0x2797CCu);
    ctx->pc = 0x2797C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2797C4u;
    // 0x2797c8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2797C4u, 0x2797CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2797CCu;
label_2797cc:
    // 0x2797cc: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2797ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2797d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2797d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2797d4: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2797d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2797d8:
    // 0x2797d8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2797D8u;
    SET_GPR_U32(ctx, 31, 0x2797E0u);
    ctx->pc = 0x2797DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2797D8u;
    // 0x2797dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2797D8u, 0x2797E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2797E0u;
label_2797e0:
    // 0x2797e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2797E0u;
    {
        const bool branch_taken_0x2797e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2797E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2797E0u;
        // 0x2797e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2797e0) {
            ctx->pc = 0x279800u;
            goto label_279800;
        }
    }
    ctx->pc = 0x2797E8u;
    // 0x2797e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2797e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2797ec: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x2797ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x2797f0: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x2797f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x2797f4: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x2797f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2797f8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2797F8u;
    {
        const bool branch_taken_0x2797f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2797FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2797F8u;
        // 0x2797fc: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2797f8) {
            ctx->pc = 0x279820u;
            goto label_279820;
        }
    }
    ctx->pc = 0x279800u;
label_279800:
    // 0x279800: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x279800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x279804: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x279804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x279808: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27980c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x27980Cu;
    SET_GPR_U32(ctx, 31, 0x279814u);
    ctx->pc = 0x279810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27980Cu;
    // 0x279810: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x27980Cu, 0x279814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279814u;
label_279814:
    // 0x279814: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279818: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x279818u;
    SET_GPR_U32(ctx, 31, 0x279820u);
    ctx->pc = 0x27981Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279818u;
    // 0x27981c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x279818u, 0x279820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279820u;
label_279820:
    // 0x279820: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x279820u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_279824:
    // 0x279824: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x279824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279828: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x279828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27982c: 0x3e00008  jr          $ra
    ctx->pc = 0x27982Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27982Cu;
        // 0x279830: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27982Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279834u;
    // 0x279834: 0x0  nop
    ctx->pc = 0x279834u;
    // NOP
    ctx->pc = 0x279838u;
}
