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

// Function: func_00278110
// Address: 0x278110 - 0x278368
void func_00278110_0x278110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00278110_0x278110");
#endif

    switch (ctx->pc) {
        case 0x278140u: goto label_278140;
        case 0x278160u: goto label_278160;
        case 0x278188u: goto label_278188;
        case 0x2781bcu: goto label_2781bc;
        case 0x2781c4u: goto label_2781c4;
        case 0x2781ccu: goto label_2781cc;
        case 0x2781d8u: goto label_2781d8;
        case 0x2781e0u: goto label_2781e0;
        case 0x278200u: goto label_278200;
        case 0x27820cu: goto label_27820c;
        case 0x278238u: goto label_278238;
        case 0x278294u: goto label_278294;
        case 0x2782b8u: goto label_2782b8;
        case 0x2782f0u: goto label_2782f0;
        case 0x278300u: goto label_278300;
        case 0x278314u: goto label_278314;
        default: break;
    }

    ctx->pc = 0x278110u;

    // 0x278110: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x278110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x278114: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x278114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x278118: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x278118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x27811c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x27811cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278120: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x278120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x278124: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x278124u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278128: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x278128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x27812c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x27812cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278130: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x278130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x278134: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x278134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x278138: 0xc09e64e  jal         func_279938
    ctx->pc = 0x278138u;
    SET_GPR_U32(ctx, 31, 0x278140u);
    ctx->pc = 0x27813Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278138u;
    // 0x27813c: 0xae220564  sw          $v0, 0x564($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279938u, 0x278138u, 0x278140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278140u;
label_278140:
    // 0x278140: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x278140u;
    {
        const bool branch_taken_0x278140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x278144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278140u;
        // 0x278144: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278140) {
            ctx->pc = 0x278150u;
            goto label_278150;
        }
    }
    ctx->pc = 0x278148u;
    // 0x278148: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x278148u;
    {
        const bool branch_taken_0x278148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27814Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278148u;
        // 0x27814c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278148) {
            ctx->pc = 0x27834Cu;
            goto label_27834c;
        }
    }
    ctx->pc = 0x278150u;
label_278150:
    // 0x278150: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x278150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278154: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x278154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278158: 0xc0a3afc  jal         func_28EBF0
    ctx->pc = 0x278158u;
    SET_GPR_U32(ctx, 31, 0x278160u);
    ctx->pc = 0x27815Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278158u;
    // 0x27815c: 0x24120232  addiu       $s2, $zero, 0x232 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 562));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EBF0u, 0x278158u, 0x278160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278160u;
label_278160:
    // 0x278160: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x278160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x278164: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x278164u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x278168: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x278168u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x27816c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x27816cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x278170: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x278170u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x278174: 0xae201580  sw          $zero, 0x1580($s1)
    ctx->pc = 0x278174u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5504), GPR_U32(ctx, 0));
    // 0x278178: 0x14720003  bne         $v1, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x278178u;
    {
        const bool branch_taken_0x278178 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x27817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278178u;
        // 0x27817c: 0xae201584  sw          $zero, 0x1584($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5508), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278178) {
            ctx->pc = 0x278188u;
            goto label_278188;
        }
    }
    ctx->pc = 0x278180u;
    // 0x278180: 0xc09e66e  jal         func_2799B8
    ctx->pc = 0x278180u;
    SET_GPR_U32(ctx, 31, 0x278188u);
    ctx->pc = 0x278184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278180u;
    // 0x278184: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2799B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2799B8u, 0x278180u, 0x278188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278188u;
label_278188:
    // 0x278188: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x278188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x27818c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27818cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278190: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x278190u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x278194: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x278194u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278198: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x278198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x27819c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27819cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2781a0: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x2781a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2781a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2781a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2781a8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2781a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2781ac: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x2781acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x2781b0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2781b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2781b4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2781B4u;
    SET_GPR_U32(ctx, 31, 0x2781BCu);
    ctx->pc = 0x2781B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2781B4u;
    // 0x2781b8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2781B4u, 0x2781BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2781BCu;
label_2781bc:
    // 0x2781bc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2781BCu;
    SET_GPR_U32(ctx, 31, 0x2781C4u);
    ctx->pc = 0x2781C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2781BCu;
    // 0x2781c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2781BCu, 0x2781C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2781C4u;
label_2781c4:
    // 0x2781c4: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x2781C4u;
    SET_GPR_U32(ctx, 31, 0x2781CCu);
    ctx->pc = 0x2781C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2781C4u;
    // 0x2781c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x2781C4u, 0x2781CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2781CCu;
label_2781cc:
    // 0x2781cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2781ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2781d0: 0xc054a88  jal         func_152A20
    ctx->pc = 0x2781D0u;
    SET_GPR_U32(ctx, 31, 0x2781D8u);
    ctx->pc = 0x2781D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2781D0u;
    // 0x2781d4: 0x26240448  addiu       $a0, $s1, 0x448 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152A20u, 0x2781D0u, 0x2781D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2781D8u;
label_2781d8:
    // 0x2781d8: 0xc05280e  jal         func_14A038
    ctx->pc = 0x2781D8u;
    SET_GPR_U32(ctx, 31, 0x2781E0u);
    ctx->pc = 0x2781DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2781D8u;
    // 0x2781dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A038u, 0x2781D8u, 0x2781E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2781E0u;
label_2781e0:
    // 0x2781e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2781e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2781e4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2781e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2781e8: 0xa2220616  sb          $v0, 0x616($s1)
    ctx->pc = 0x2781e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1558), (uint8_t)GPR_U32(ctx, 2));
    // 0x2781ec: 0x26042fc0  addiu       $a0, $s0, 0x2FC0
    ctx->pc = 0x2781ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12224));
    // 0x2781f0: 0xa2230531  sb          $v1, 0x531($s1)
    ctx->pc = 0x2781f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1329), (uint8_t)GPR_U32(ctx, 3));
    // 0x2781f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2781f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2781f8: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x2781F8u;
    SET_GPR_U32(ctx, 31, 0x278200u);
    ctx->pc = 0x2781FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2781F8u;
    // 0x2781fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x2781F8u, 0x278200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278200u;
label_278200:
    // 0x278200: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x278200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278204: 0xc05404a  jal         func_150128
    ctx->pc = 0x278204u;
    SET_GPR_U32(ctx, 31, 0x27820Cu);
    ctx->pc = 0x278208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278204u;
    // 0x278208: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150128u, 0x278204u, 0x27820Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27820Cu;
label_27820c:
    // 0x27820c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27820cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278210: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x278210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x278214: 0xa622054a  sh          $v0, 0x54A($s1)
    ctx->pc = 0x278214u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x278218: 0xa6220548  sh          $v0, 0x548($s1)
    ctx->pc = 0x278218u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1352), (uint16_t)GPR_U32(ctx, 2));
    // 0x27821c: 0x1072001e  beq         $v1, $s2, . + 4 + (0x1E << 2)
    ctx->pc = 0x27821Cu;
    {
        const bool branch_taken_0x27821c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x278220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27821Cu;
        // 0x278220: 0xae200670  sw          $zero, 0x670($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27821c) {
            ctx->pc = 0x278298u;
            goto label_278298;
        }
    }
    ctx->pc = 0x278224u;
    // 0x278224: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x278224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x278228: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x278228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27822c: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x27822cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x278230: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x278230u;
    SET_GPR_U32(ctx, 31, 0x278238u);
    ctx->pc = 0x278234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278230u;
    // 0x278234: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x278230u, 0x278238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278238u;
label_278238:
    // 0x278238: 0x922402b4  lbu         $a0, 0x2B4($s1)
    ctx->pc = 0x278238u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x27823c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27823cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278240: 0xae220670  sw          $v0, 0x670($s1)
    ctx->pc = 0x278240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 2));
    // 0x278244: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x278244u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x278248: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x278248u;
    {
        const bool branch_taken_0x278248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278248u;
        // 0x27824c: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278248) {
            ctx->pc = 0x27825Cu;
            goto label_27825c;
        }
    }
    ctx->pc = 0x278250u;
    // 0x278250: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x278250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x278254: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x278254u;
    {
        const bool branch_taken_0x278254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278254u;
        // 0x278258: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278254) {
            ctx->pc = 0x278260u;
            goto label_278260;
        }
    }
    ctx->pc = 0x27825Cu;
label_27825c:
    // 0x27825c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27825cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_278260:
    // 0x278260: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x278260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x278264: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x278264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x278268: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x278268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x27826c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x27826cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x278270: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x278270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x278274: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x278274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278278: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x278278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27827c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27827cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x278280: 0x8e240670  lw          $a0, 0x670($s1)
    ctx->pc = 0x278280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
    // 0x278284: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x278284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x278288: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x278288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27828c: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x27828Cu;
    SET_GPR_U32(ctx, 31, 0x278294u);
    ctx->pc = 0x278290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27828Cu;
    // 0x278290: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x27828Cu, 0x278294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278294u;
label_278294:
    // 0x278294: 0xae220674  sw          $v0, 0x674($s1)
    ctx->pc = 0x278294u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1652), GPR_U32(ctx, 2));
label_278298:
    // 0x278298: 0x26702fc0  addiu       $s0, $s3, 0x2FC0
    ctx->pc = 0x278298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 12224));
    // 0x27829c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x27829cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x2782a0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2782a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2782a4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2782a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2782a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2782a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2782ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2782acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2782b0: 0xc04d1be  jal         func_1346F8
    ctx->pc = 0x2782B0u;
    SET_GPR_U32(ctx, 31, 0x2782B8u);
    ctx->pc = 0x2782B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2782B0u;
    // 0x2782b4: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1346F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1346F8u, 0x2782B0u, 0x2782B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2782B8u;
label_2782b8:
    // 0x2782b8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2782b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2782bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2782bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2782c0: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x2782c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x2782c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2782c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2782c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2782c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2782cc: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2782ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2782d0: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x2782d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x2782d4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2782d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2782d8: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2782d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2782dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2782dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2782e0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2782e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2782e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2782e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2782e8: 0xc04d220  jal         func_134880
    ctx->pc = 0x2782E8u;
    SET_GPR_U32(ctx, 31, 0x2782F0u);
    ctx->pc = 0x2782ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2782E8u;
    // 0x2782ec: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134880u, 0x2782E8u, 0x2782F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2782F0u;
label_2782f0:
    // 0x2782f0: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x2782f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x2782f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2782f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2782f8: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x2782F8u;
    SET_GPR_U32(ctx, 31, 0x278300u);
    ctx->pc = 0x2782FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2782F8u;
    // 0x2782fc: 0x24a57cb8  addiu       $a1, $a1, 0x7CB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x2782F8u, 0x278300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278300u;
label_278300:
    // 0x278300: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x278300u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x278304: 0xae22156c  sw          $v0, 0x156C($s1)
    ctx->pc = 0x278304u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5484), GPR_U32(ctx, 2));
    // 0x278308: 0x24a57cc0  addiu       $a1, $a1, 0x7CC0
    ctx->pc = 0x278308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31936));
    // 0x27830c: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x27830Cu;
    SET_GPR_U32(ctx, 31, 0x278314u);
    ctx->pc = 0x278310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27830Cu;
    // 0x278310: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x27830Cu, 0x278314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278314u;
label_278314:
    // 0x278314: 0x8e23156c  lw          $v1, 0x156C($s1)
    ctx->pc = 0x278314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5484)));
    // 0x278318: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x278318u;
    {
        const bool branch_taken_0x278318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27831Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278318u;
        // 0x27831c: 0xae221570  sw          $v0, 0x1570($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5488), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278318) {
            ctx->pc = 0x27832Cu;
            goto label_27832c;
        }
    }
    ctx->pc = 0x278320u;
    // 0x278320: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x278320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
    // 0x278324: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x278324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x278328: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x278328u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
label_27832c:
    // 0x27832c: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x27832cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x278330: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x278330u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x278334: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x278334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x278338: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x278338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27833c: 0xa2220617  sb          $v0, 0x617($s1)
    ctx->pc = 0x27833cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1559), (uint8_t)GPR_U32(ctx, 2));
    // 0x278340: 0xe6201564  swc1        $f0, 0x1564($s1)
    ctx->pc = 0x278340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5476), bits); }
    // 0x278344: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x278344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278348: 0xae201568  sw          $zero, 0x1568($s1)
    ctx->pc = 0x278348u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5480), GPR_U32(ctx, 0));
label_27834c:
    // 0x27834c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x27834cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x278350: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x278350u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x278354: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x278354u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x278358: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x278358u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27835c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27835cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x278360: 0x3e00008  jr          $ra
    ctx->pc = 0x278360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278360u;
        // 0x278364: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278368u;
}
