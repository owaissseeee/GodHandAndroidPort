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

// Function: func_002827C8
// Address: 0x2827c8 - 0x282928
void func_002827C8_0x2827c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002827C8_0x2827c8");
#endif

    switch (ctx->pc) {
        case 0x2828d4u: goto label_2828d4;
        case 0x282904u: goto label_282904;
        case 0x282918u: goto label_282918;
        default: break;
    }

    ctx->pc = 0x2827c8u;

    // 0x2827c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2827c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2827cc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2827ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2827d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2827d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2827d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2827d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2827d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2827d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2827dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2827dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2827e0: 0x920215b0  lbu         $v0, 0x15B0($s0)
    ctx->pc = 0x2827e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x2827e4: 0x920402f6  lbu         $a0, 0x2F6($s0)
    ctx->pc = 0x2827e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2827e8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2827E8u;
    {
        const bool branch_taken_0x2827e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2827ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2827E8u;
        // 0x2827ec: 0x62400b  movn        $t0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2827e8) {
            ctx->pc = 0x282804u;
            goto label_282804;
        }
    }
    ctx->pc = 0x2827F0u;
    // 0x2827f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2827f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2827f4: 0x10820046  beq         $a0, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x2827F4u;
    {
        const bool branch_taken_0x2827f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2827f4) {
            ctx->pc = 0x282910u;
            goto label_282910;
        }
    }
    ctx->pc = 0x2827FCu;
    // 0x2827fc: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x2827FCu;
    {
        const bool branch_taken_0x2827fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2827FCu;
        // 0x282800: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2827fc) {
            ctx->pc = 0x28291Cu;
            goto label_28291c;
        }
    }
    ctx->pc = 0x282804u;
label_282804:
    // 0x282804: 0x920302f7  lbu         $v1, 0x2F7($s0)
    ctx->pc = 0x282804u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x282808: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x282808u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x28280c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28280Cu;
    {
        const bool branch_taken_0x28280c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28280Cu;
        // 0x282810: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28280c) {
            ctx->pc = 0x28282Cu;
            goto label_28282c;
        }
    }
    ctx->pc = 0x282814u;
    // 0x282814: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x282814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x282818: 0x24428710  addiu       $v0, $v0, -0x78F0
    ctx->pc = 0x282818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936336));
    // 0x28281c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28281cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x282820: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x282820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x282824: 0x800008  jr          $a0
    ctx->pc = 0x282824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28282Cu: goto label_28282c;
            case 0x28284Cu: goto label_28284c;
            case 0x28286Cu: goto label_28286c;
            case 0x28288Cu: goto label_28288c;
            case 0x2828ACu: goto label_2828ac;
            case 0x2828DCu: goto label_2828dc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282824u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28282Cu;
label_28282c:
    // 0x28282c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28282cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x282830: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282834: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x282834u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x282838: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x282838u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28283c: 0x8c4500c0  lw          $a1, 0xC0($v0)
    ctx->pc = 0x28283cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x282840: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x282840u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282844: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x282844u;
    {
        const bool branch_taken_0x282844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282844u;
        // 0x282848: 0x8c4600c4  lw          $a2, 0xC4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282844) {
            ctx->pc = 0x2828C8u;
            goto label_2828c8;
        }
    }
    ctx->pc = 0x28284Cu;
label_28284c:
    // 0x28284c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28284cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x282850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282854: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x282854u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x282858: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x282858u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28285c: 0x8c4500b8  lw          $a1, 0xB8($v0)
    ctx->pc = 0x28285cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x282860: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x282860u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282864: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x282864u;
    {
        const bool branch_taken_0x282864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282864u;
        // 0x282868: 0x8c4600bc  lw          $a2, 0xBC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282864) {
            ctx->pc = 0x2828C8u;
            goto label_2828c8;
        }
    }
    ctx->pc = 0x28286Cu;
label_28286c:
    // 0x28286c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28286cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x282870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282874: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x282874u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x282878: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x282878u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28287c: 0x8c4500c8  lw          $a1, 0xC8($v0)
    ctx->pc = 0x28287cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x282880: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x282880u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282884: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x282884u;
    {
        const bool branch_taken_0x282884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282884u;
        // 0x282888: 0x8c4600cc  lw          $a2, 0xCC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282884) {
            ctx->pc = 0x2828C8u;
            goto label_2828c8;
        }
    }
    ctx->pc = 0x28288Cu;
label_28288c:
    // 0x28288c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28288cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x282890: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282894: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x282894u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x282898: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x282898u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28289c: 0x8c4500d0  lw          $a1, 0xD0($v0)
    ctx->pc = 0x28289cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x2828a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2828a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2828a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2828A4u;
    {
        const bool branch_taken_0x2828a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2828A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2828A4u;
        // 0x2828a8: 0x8c4600d4  lw          $a2, 0xD4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2828a4) {
            ctx->pc = 0x2828C8u;
            goto label_2828c8;
        }
    }
    ctx->pc = 0x2828ACu;
label_2828ac:
    // 0x2828ac: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2828acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2828b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2828b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2828b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2828b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2828b8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2828b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2828bc: 0x8c4500d8  lw          $a1, 0xD8($v0)
    ctx->pc = 0x2828bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
    // 0x2828c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2828c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2828c4: 0x8c4600dc  lw          $a2, 0xDC($v0)
    ctx->pc = 0x2828c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
label_2828c8:
    // 0x2828c8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2828c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2828cc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2828CCu;
    SET_GPR_U32(ctx, 31, 0x2828D4u);
    ctx->pc = 0x2828D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2828CCu;
    // 0x2828d0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2828CCu, 0x2828D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2828D4u;
label_2828d4:
    // 0x2828d4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2828D4u;
    {
        const bool branch_taken_0x2828d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2828D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2828D4u;
        // 0x2828d8: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2828d4) {
            ctx->pc = 0x282908u;
            goto label_282908;
        }
    }
    ctx->pc = 0x2828DCu;
label_2828dc:
    // 0x2828dc: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2828dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2828e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2828e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2828e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2828e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2828e8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2828e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2828ec: 0x8c4500d0  lw          $a1, 0xD0($v0)
    ctx->pc = 0x2828ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x2828f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2828f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2828f4: 0x8c4600d4  lw          $a2, 0xD4($v0)
    ctx->pc = 0x2828f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x2828f8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2828f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2828fc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2828FCu;
    SET_GPR_U32(ctx, 31, 0x282904u);
    ctx->pc = 0x282900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2828FCu;
    // 0x282900: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2828FCu, 0x282904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282904u;
label_282904:
    // 0x282904: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x282904u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_282908:
    // 0x282908: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x282908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28290c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x28290cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_282910:
    // 0x282910: 0xc055f06  jal         func_157C18
    ctx->pc = 0x282910u;
    SET_GPR_U32(ctx, 31, 0x282918u);
    ctx->pc = 0x282914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282910u;
    // 0x282914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x282910u, 0x282918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282918u;
label_282918:
    // 0x282918: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x282918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28291c:
    // 0x28291c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28291cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282920: 0x3e00008  jr          $ra
    ctx->pc = 0x282920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282920u;
        // 0x282924: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282928u;
}
