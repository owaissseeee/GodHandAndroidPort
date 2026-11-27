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

// Function: func_0023D410
// Address: 0x23d410 - 0x23d568
void func_0023D410_0x23d410(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0023D410_0x23d410");
#endif

    if (__builtin_expect(ctx->pc != 0x23d410u, 0)) {
        switch (ctx->pc) {
            case 0x23d4c0u: goto label_23d4c0;
            case 0x23d4e0u: goto label_23d4e0;
            case 0x23d4f4u: goto label_23d4f4;
            case 0x23d520u: goto label_23d520;
            case 0x23d52cu: goto label_23d52c;
            default: break;
        }
    }


    // 0x23d410: 0x27bdffb0  addiu       $sp, $sp, -0x50
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23d414: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x23d414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x23d418: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x23d418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x23d41c: 0x80802d  daddu       $s0, $a0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d420: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x23d420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x23d424: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23d424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23d428: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x23d428u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x23d42c: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x23d42cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x23d430: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23D430u;
    {
        const bool branch_taken_0x23d430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D430u;
        // 0x23d434: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d430) {
            ctx->pc = 0x23D448u;
            goto label_23d448;
        }
    }
    // 0x23d438: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x23D438u;
    {
        const bool branch_taken_0x23d438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23d438) {
            ctx->pc = 0x23D4ECu;
            goto label_23d4ec;
        }
    }
    // 0x23d440: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x23D440u;
    {
        const bool branch_taken_0x23d440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D440u;
        // 0x23d444: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d440) {
            ctx->pc = 0x23D530u;
            goto label_23d530;
        }
    }
label_23d448:
    // 0x23d448: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x23d448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x23d44c: 0x28620248  slti        $v0, $v1, 0x248
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)584) ? 1 : 0);
    // 0x23d450: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23D450u;
    {
        const bool branch_taken_0x23d450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D450u;
        // 0x23d454: 0xa2001864  sb          $zero, 0x1864($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d450) {
            ctx->pc = 0x23D480u;
            goto label_23d480;
        }
    }
    // 0x23d458: 0x28620245  slti        $v0, $v1, 0x245
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)581) ? 1 : 0);
    // 0x23d45c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x23D45Cu;
    {
        const bool branch_taken_0x23d45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D45Cu;
        // 0x23d460: 0x2862020a  slti        $v0, $v1, 0x20A (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)522) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d45c) {
            ctx->pc = 0x23D4A4u;
            goto label_23d4a4;
        }
    }
    // 0x23d464: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x23D464u;
    {
        const bool branch_taken_0x23d464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d464) {
            ctx->pc = 0x23D468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D464u;
            // 0x23d468: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D4A8u;
            goto label_23d4a8;
        }
    }
    // 0x23d46c: 0x2862020f  slti        $v0, $v1, 0x20F
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)527) ? 1 : 0);
    // 0x23d470: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x23D470u;
    {
        const bool branch_taken_0x23d470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d470) {
            ctx->pc = 0x23D474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D470u;
            // 0x23d474: 0x24020218  addiu       $v0, $zero, 0x218 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 536));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D4A4u;
            goto label_23d4a4;
        }
    }
    // 0x23d478: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x23D478u;
    {
        const bool branch_taken_0x23d478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D478u;
        // 0x23d47c: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d478) {
            ctx->pc = 0x23D4A8u;
            goto label_23d4a8;
        }
    }
label_23d480:
    // 0x23d480: 0x2862024f  slti        $v0, $v1, 0x24F
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)591) ? 1 : 0);
    // 0x23d484: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x23D484u;
    {
        const bool branch_taken_0x23d484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d484) {
            ctx->pc = 0x23D488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D484u;
            // 0x23d488: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D4A8u;
            goto label_23d4a8;
        }
    }
    // 0x23d48c: 0x28620252  slti        $v0, $v1, 0x252
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)594) ? 1 : 0);
    // 0x23d490: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x23D490u;
    {
        const bool branch_taken_0x23d490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d490) {
            ctx->pc = 0x23D494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D490u;
            // 0x23d494: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D4A8u;
            goto label_23d4a8;
        }
    }
    // 0x23d498: 0x2862027a  slti        $v0, $v1, 0x27A
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)634) ? 1 : 0);
    // 0x23d49c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23D49Cu;
    {
        const bool branch_taken_0x23d49c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d49c) {
            ctx->pc = 0x23D4A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D49Cu;
            // 0x23d4a0: 0x28620278  slti        $v0, $v1, 0x278 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)632) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D4A4u;
            goto label_23d4a4;
        }
    }
label_23d4a4:
    // 0x23d4a4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23d4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_23d4a8:
    // 0x23d4a8: 0x8c430c4c  lw          $v1, 0xC4C($v0)
    ctx->pc = 0x23d4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3148)));
    // 0x23d4ac: 0x8c440c50  lw          $a0, 0xC50($v0)
    ctx->pc = 0x23d4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3152)));
    // 0x23d4b0: 0x629021  addu        $s2, $v1, $v0
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d4b4: 0x828821  addu        $s1, $a0, $v0
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23d4b8: 0xc09d91a  jal         func_276468
    SET_GPR_U32(ctx, 31, 0x23D4C0u);
    ctx->pc = 0x23D4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D4B8u;
    // 0x23d4bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &Obj0000_Get_Byte_17C3_NZ_2_276468_0x276468, 0x276468u, 0x23d4c0u)) {
        return;
    }
label_23d4c0:
    // 0x23d4c0: 0x44806000  mtc1        $zero, $f12
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23d4c4: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x23d4c8: 0x240282d  daddu       $a1, $s2, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d4cc: 0x220302d  daddu       $a2, $s1, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d4d0: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d4d4: 0x2407000a  addiu       $a3, $zero, 0xA
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23d4d8: 0xc0aa15e  jal         func_2A8578
    SET_GPR_U32(ctx, 31, 0x23D4E0u);
    ctx->pc = 0x23D4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D4D8u;
    // 0x23d4dc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_002A8578_0x2a8578, 0x2a8578u, 0x23d4e0u)) {
        return;
    }
label_23d4e0:
    // 0x23d4e0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x23d4e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x23d4e4: 0x24420001  addiu       $v0, $v0, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23d4e8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x23d4e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_23d4ec:
    // 0x23d4ec: 0xc055f06  jal         func_157C18
    SET_GPR_U32(ctx, 31, 0x23D4F4u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D4ECu;
    // 0x23d4f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x23D4ECu, 0x23D4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_23d4f4:
    // 0x23d4f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23D4F4u;
    {
        const bool branch_taken_0x23d4f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D4F4u;
        // 0x23d4f8: 0x2402006e  addiu       $v0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d4f4) {
            ctx->pc = 0x23D50Cu;
            goto label_23d50c;
        }
    }
    // 0x23d4fc: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x23d4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x23d500: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x23d500u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x23d504: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x23d504u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x23d508: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x23d508u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_23d50c:
    // 0x23d50c: 0x3c013f80  lui         $at, 0x3F80
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23d510: 0x4481a000  mtc1        $at, $f20
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23d514: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d518: 0xc053e7c  jal         func_14F9F0
    SET_GPR_U32(ctx, 31, 0x23D520u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D518u;
    // 0x23d51c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x23D518u, 0x23D520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_23d520:
    // 0x23d520: 0x4600a306  mov.s       $f12, $f20
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x23d524: 0xc053e4a  jal         func_14F928
    SET_GPR_U32(ctx, 31, 0x23D52Cu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D524u;
    // 0x23d528: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x23D524u, 0x23D52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_23d52c:
    // 0x23d52c: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x23d52cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_23d530:
    // 0x23d530: 0x30420008  andi        $v0, $v0, 0x8
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x23d534: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x23D534u;
    {
        const bool branch_taken_0x23d534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d534) {
            ctx->pc = 0x23D538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D534u;
            // 0x23d538: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D54Cu;
            goto label_23d54c;
        }
    }
    // 0x23d53c: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x23d53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x23d540: 0x34424000  ori         $v0, $v0, 0x4000
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x23d544: 0xae0216d0  sw          $v0, 0x16D0($s0)
    ctx->pc = 0x23d544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    // 0x23d548: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x23d548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23d54c:
    // 0x23d54c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x23d54cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23d550: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x23d550u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d554: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23d554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d558: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x23d558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23d55c: 0x3e00008  jr          $ra
    ctx->pc = 0x23D55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D55Cu;
        // 0x23d560: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D55Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x23d564: 0x0  nop
    // NOP
    ctx->pc = 0x23d568u;
}