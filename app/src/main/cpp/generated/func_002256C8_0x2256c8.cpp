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

// Function: func_002256C8
// Address: 0x2256c8 - 0x2258c0
void func_002256C8_0x2256c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002256C8_0x2256c8");
#endif

    switch (ctx->pc) {
        case 0x2256f8u: goto label_2256f8;
        case 0x225720u: goto label_225720;
        case 0x225740u: goto label_225740;
        case 0x225798u: goto label_225798;
        case 0x2257c8u: goto label_2257c8;
        case 0x2257ecu: goto label_2257ec;
        case 0x225804u: goto label_225804;
        case 0x22581cu: goto label_22581c;
        case 0x225828u: goto label_225828;
        case 0x225838u: goto label_225838;
        case 0x22584cu: goto label_22584c;
        case 0x225858u: goto label_225858;
        case 0x225860u: goto label_225860;
        case 0x225878u: goto label_225878;
        default: break;
    }

    ctx->pc = 0x2256c8u;

    // 0x2256c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2256c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2256cc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2256ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2256d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2256d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2256d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2256d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2256d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2256d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2256dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2256dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2256e0: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2256e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2256e4: 0xa223186a  sb          $v1, 0x186A($s1)
    ctx->pc = 0x2256e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6250), (uint8_t)GPR_U32(ctx, 3));
    // 0x2256e8: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x2256e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x2256ec: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x2256ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x2256f0: 0xc098a84  jal         func_262A10
    ctx->pc = 0x2256F0u;
    SET_GPR_U32(ctx, 31, 0x2256F8u);
    ctx->pc = 0x2256F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2256F0u;
    // 0x2256f4: 0xae2216d4  sw          $v0, 0x16D4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A10u, 0x2256F0u, 0x2256F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2256F8u;
label_2256f8:
    // 0x2256f8: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x2256f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x2256fc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2256FCu;
    {
        const bool branch_taken_0x2256fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x225700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2256FCu;
        // 0x225700: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2256fc) {
            ctx->pc = 0x225714u;
            goto label_225714;
        }
    }
    ctx->pc = 0x225704u;
    // 0x225704: 0x5062002b  beql        $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x225704u;
    {
        const bool branch_taken_0x225704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x225704) {
            ctx->pc = 0x225708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225704u;
            // 0x225708: 0x8e2205f0  lw          $v0, 0x5F0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2257B4u;
            goto label_2257b4;
        }
    }
    ctx->pc = 0x22570Cu;
    // 0x22570c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x22570Cu;
    {
        const bool branch_taken_0x22570c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22570c) {
            ctx->pc = 0x225858u;
            goto label_225858;
        }
    }
    ctx->pc = 0x225714u;
label_225714:
    // 0x225714: 0xa2201864  sb          $zero, 0x1864($s1)
    ctx->pc = 0x225714u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x225718: 0xc09d91a  jal         func_276468
    ctx->pc = 0x225718u;
    SET_GPR_U32(ctx, 31, 0x225720u);
    ctx->pc = 0x22571Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225718u;
    // 0x22571c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x225718u, 0x225720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225720u;
label_225720:
    // 0x225720: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x225720u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x225724: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x225724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225728: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x225728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x22572c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x22572cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x225730: 0x24070042  addiu       $a3, $zero, 0x42
    ctx->pc = 0x225730u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x225734: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x225734u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225738: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x225738u;
    SET_GPR_U32(ctx, 31, 0x225740u);
    ctx->pc = 0x22573Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225738u;
    // 0x22573c: 0x240900f5  addiu       $t1, $zero, 0xF5 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x225738u, 0x225740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225740u;
label_225740:
    // 0x225740: 0x8e270304  lw          $a3, 0x304($s1)
    ctx->pc = 0x225740u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x225744: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x225744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x225748: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x225748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x22574c: 0x8ce30ce4  lw          $v1, 0xCE4($a3)
    ctx->pc = 0x22574cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3300)));
    // 0x225750: 0x8ce40ce8  lw          $a0, 0xCE8($a3)
    ctx->pc = 0x225750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3304)));
    // 0x225754: 0x2442fdb0  addiu       $v0, $v0, -0x250
    ctx->pc = 0x225754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966704));
    // 0x225758: 0x674021  addu        $t0, $v1, $a3
    ctx->pc = 0x225758u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x22575c: 0xae2505f0  sw          $a1, 0x5F0($s1)
    ctx->pc = 0x22575cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 5));
    // 0x225760: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x225760u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x225764: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x225764u;
    {
        const bool branch_taken_0x225764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225764u;
        // 0x225768: 0x873021  addu        $a2, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225764) {
            ctx->pc = 0x22577Cu;
            goto label_22577c;
        }
    }
    ctx->pc = 0x22576Cu;
    // 0x22576c: 0x8ce30cec  lw          $v1, 0xCEC($a3)
    ctx->pc = 0x22576cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3308)));
    // 0x225770: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x225770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x225774: 0xae2205f0  sw          $v0, 0x5F0($s1)
    ctx->pc = 0x225774u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    // 0x225778: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x225778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_22577c:
    // 0x22577c: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x22577cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225780: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x225780u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x225784: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x225784u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225788: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x225788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22578c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x22578cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x225790: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x225790u;
    SET_GPR_U32(ctx, 31, 0x225798u);
    ctx->pc = 0x225794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225790u;
    // 0x225794: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x225790u, 0x225798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225798u;
label_225798:
    // 0x225798: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x225798u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x22579c: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x22579cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2257a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2257a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2257a4: 0xae2005fc  sw          $zero, 0x5FC($s1)
    ctx->pc = 0x2257a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 0));
    // 0x2257a8: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x2257a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x2257ac: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x2257acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x2257b0: 0x8e2205f0  lw          $v0, 0x5F0($s1)
    ctx->pc = 0x2257b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
label_2257b4:
    // 0x2257b4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2257B4u;
    {
        const bool branch_taken_0x2257b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2257B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2257B4u;
        // 0x2257b8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2257b4) {
            ctx->pc = 0x225820u;
            goto label_225820;
        }
    }
    ctx->pc = 0x2257BCu;
    // 0x2257bc: 0x8e3000f0  lw          $s0, 0xF0($s1)
    ctx->pc = 0x2257bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x2257c0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2257C0u;
    SET_GPR_U32(ctx, 31, 0x2257C8u);
    ctx->pc = 0x2257C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2257C0u;
    // 0x2257c4: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2257C0u, 0x2257C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2257C8u;
label_2257c8:
    // 0x2257c8: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x2257c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2257cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2257ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2257d0: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x2257d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x2257d4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2257d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2257d8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2257d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2257dc: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x2257dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2257e0: 0x460d0342  mul.s       $f13, $f0, $f13
    ctx->pc = 0x2257e0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x2257e4: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x2257E4u;
    SET_GPR_U32(ctx, 31, 0x2257ECu);
    ctx->pc = 0x2257E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2257E4u;
    // 0x2257e8: 0xc62c0600  lwc1        $f12, 0x600($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x2257E4u, 0x2257ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2257ECu;
label_2257ec:
    // 0x2257ec: 0xc6210600  lwc1        $f1, 0x600($s1)
    ctx->pc = 0x2257ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2257f0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2257f0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2257f4: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x2257f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x2257f8: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x2257f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x2257fc: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2257FCu;
    SET_GPR_U32(ctx, 31, 0x225804u);
    ctx->pc = 0x225800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2257FCu;
    // 0x225800: 0xe6210600  swc1        $f1, 0x600($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2257FCu, 0x225804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225804u;
label_225804:
    // 0x225804: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x225804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225808: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x225808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x22580c: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x22580cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x225810: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x225810u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x225814: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x225814u;
    SET_GPR_U32(ctx, 31, 0x22581Cu);
    ctx->pc = 0x225818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225814u;
    // 0x225818: 0xe6210104  swc1        $f1, 0x104($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x225814u, 0x22581Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22581Cu;
label_22581c:
    // 0x22581c: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x22581cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
label_225820:
    // 0x225820: 0xc055f06  jal         func_157C18
    ctx->pc = 0x225820u;
    SET_GPR_U32(ctx, 31, 0x225828u);
    ctx->pc = 0x225824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225820u;
    // 0x225824: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x225820u, 0x225828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225828u;
label_225828:
    // 0x225828: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x225828u;
    {
        const bool branch_taken_0x225828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x225828) {
            ctx->pc = 0x225838u;
            goto label_225838;
        }
    }
    ctx->pc = 0x225830u;
    // 0x225830: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x225830u;
    SET_GPR_U32(ctx, 31, 0x225838u);
    ctx->pc = 0x225834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225830u;
    // 0x225834: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x225830u, 0x225838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225838u;
label_225838:
    // 0x225838: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x225838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22583c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22583cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x225840: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x225840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225844: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x225844u;
    SET_GPR_U32(ctx, 31, 0x22584Cu);
    ctx->pc = 0x225848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225844u;
    // 0x225848: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x225844u, 0x22584Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22584Cu;
label_22584c:
    // 0x22584c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22584cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x225850: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x225850u;
    SET_GPR_U32(ctx, 31, 0x225858u);
    ctx->pc = 0x225854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225850u;
    // 0x225854: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x225850u, 0x225858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225858u;
label_225858:
    // 0x225858: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x225858u;
    SET_GPR_U32(ctx, 31, 0x225860u);
    ctx->pc = 0x22585Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225858u;
    // 0x22585c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x225858u, 0x225860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225860u;
label_225860:
    // 0x225860: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x225860u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x225864: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x225864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x225868: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x225868u;
    {
        const bool branch_taken_0x225868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225868u;
        // 0x22586c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225868) {
            ctx->pc = 0x225878u;
            goto label_225878;
        }
    }
    ctx->pc = 0x225870u;
    // 0x225870: 0xc0989d4  jal         func_262750
    ctx->pc = 0x225870u;
    SET_GPR_U32(ctx, 31, 0x225878u);
    ctx->pc = 0x225874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225870u;
    // 0x225874: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262750u, 0x225870u, 0x225878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225878u;
label_225878:
    // 0x225878: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x225878u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x22587c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x22587cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x225880: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x225880u;
    {
        const bool branch_taken_0x225880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225880u;
        // 0x225884: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225880) {
            ctx->pc = 0x22588Cu;
            goto label_22588c;
        }
    }
    ctx->pc = 0x225888u;
    // 0x225888: 0xae2205fc  sw          $v0, 0x5FC($s1)
    ctx->pc = 0x225888u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 2));
label_22588c:
    // 0x22588c: 0x8e2205fc  lw          $v0, 0x5FC($s1)
    ctx->pc = 0x22588cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1532)));
    // 0x225890: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x225890u;
    {
        const bool branch_taken_0x225890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225890u;
        // 0x225894: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225890) {
            ctx->pc = 0x2258ACu;
            goto label_2258ac;
        }
    }
    ctx->pc = 0x225898u;
    // 0x225898: 0x8e2316d4  lw          $v1, 0x16D4($s1)
    ctx->pc = 0x225898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x22589c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x22589cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2258a0: 0x3442fbff  ori         $v0, $v0, 0xFBFF
    ctx->pc = 0x2258a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64511);
    // 0x2258a4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2258a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2258a8: 0xae2316d4  sw          $v1, 0x16D4($s1)
    ctx->pc = 0x2258a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 3));
label_2258ac:
    // 0x2258ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2258acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2258b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2258b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2258b4: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2258b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2258b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2258B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2258BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2258B8u;
        // 0x2258bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2258B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2258C0u;
}
