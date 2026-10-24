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

// Function: func_002457D0
// Address: 0x2457d0 - 0x245a18
void func_002457D0_0x2457d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002457D0_0x2457d0");
#endif

    switch (ctx->pc) {
        case 0x245848u: goto label_245848;
        case 0x245890u: goto label_245890;
        case 0x245958u: goto label_245958;
        case 0x245980u: goto label_245980;
        case 0x24598cu: goto label_24598c;
        case 0x2459c0u: goto label_2459c0;
        case 0x2459d4u: goto label_2459d4;
        case 0x2459e4u: goto label_2459e4;
        case 0x2459f8u: goto label_2459f8;
        case 0x245a04u: goto label_245a04;
        default: break;
    }

    ctx->pc = 0x2457d0u;

    // 0x2457d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2457d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2457d4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2457d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2457d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2457d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2457dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2457dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2457e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2457e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2457e4: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2457e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2457e8: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x2457e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x2457ec: 0x920502f6  lbu         $a1, 0x2F6($s0)
    ctx->pc = 0x2457ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2457f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2457f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2457f4: 0x2ca40006  sltiu       $a0, $a1, 0x6
    ctx->pc = 0x2457f4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2457f8: 0x10800082  beqz        $a0, . + 4 + (0x82 << 2)
    ctx->pc = 0x2457F8u;
    {
        const bool branch_taken_0x2457f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2457FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2457F8u;
        // 0x2457fc: 0xae030250  sw          $v1, 0x250($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2457f8) {
            ctx->pc = 0x245A04u;
            goto label_245a04;
        }
    }
    ctx->pc = 0x245800u;
    // 0x245800: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x245800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x245804: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x245804u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x245808: 0x2442d470  addiu       $v0, $v0, -0x2B90
    ctx->pc = 0x245808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956144));
    // 0x24580c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24580cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x245810: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x245810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x245814: 0x800008  jr          $a0
    ctx->pc = 0x245814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24581Cu: goto label_24581c;
            case 0x245854u: goto label_245854;
            case 0x245864u: goto label_245864;
            case 0x245944u: goto label_245944;
            case 0x245994u: goto label_245994;
            case 0x2459CCu: goto label_2459cc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245814u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24581Cu;
label_24581c:
    // 0x24581c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x24581cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x245820: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x245820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245824: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x245824u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x245828: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x245828u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24582c: 0x8c4523d8  lw          $a1, 0x23D8($v0)
    ctx->pc = 0x24582cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9176)));
    // 0x245830: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x245830u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245834: 0x8c4623dc  lw          $a2, 0x23DC($v0)
    ctx->pc = 0x245834u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9180)));
    // 0x245838: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x245838u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24583c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x24583cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x245840: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x245840u;
    SET_GPR_U32(ctx, 31, 0x245848u);
    ctx->pc = 0x245844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245840u;
    // 0x245844: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x245840u, 0x245848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245848u;
label_245848:
    // 0x245848: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x245848u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x24584c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24584cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x245850: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x245850u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_245854:
    // 0x245854: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x245854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x245858: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x245858u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24585c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x24585Cu;
    {
        const bool branch_taken_0x24585c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24585Cu;
        // 0x245860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24585c) {
            ctx->pc = 0x245950u;
            goto label_245950;
        }
    }
    ctx->pc = 0x245864u;
label_245864:
    // 0x245864: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x245864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x245868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x245868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24586c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24586cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x245870: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x245870u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245874: 0x8c4523e0  lw          $a1, 0x23E0($v0)
    ctx->pc = 0x245874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9184)));
    // 0x245878: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x245878u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24587c: 0x8c4623e4  lw          $a2, 0x23E4($v0)
    ctx->pc = 0x24587cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9188)));
    // 0x245880: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x245880u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245884: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x245884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x245888: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x245888u;
    SET_GPR_U32(ctx, 31, 0x245890u);
    ctx->pc = 0x24588Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245888u;
    // 0x24588c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x245888u, 0x245890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245890u;
label_245890:
    // 0x245890: 0x920317be  lbu         $v1, 0x17BE($s0)
    ctx->pc = 0x245890u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6078)));
    // 0x245894: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x245894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x245898: 0x8e0516d4  lw          $a1, 0x16D4($s0)
    ctx->pc = 0x245898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x24589c: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x24589cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x2458a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2458a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2458a4: 0x3442fc7f  ori         $v0, $v0, 0xFC7F
    ctx->pc = 0x2458a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64639);
    // 0x2458a8: 0xa20317be  sb          $v1, 0x17BE($s0)
    ctx->pc = 0x2458a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6078), (uint8_t)GPR_U32(ctx, 3));
    // 0x2458ac: 0xa23024  and         $a2, $a1, $v0
    ctx->pc = 0x2458acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2458b0: 0xae0616d4  sw          $a2, 0x16D4($s0)
    ctx->pc = 0x2458b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 6));
    // 0x2458b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2458b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2458b8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2458b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2458bc: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2458BCu;
    {
        const bool branch_taken_0x2458bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2458bc) {
            ctx->pc = 0x2458C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2458BCu;
            // 0x2458c0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2458C4u;
            goto label_2458c4;
        }
    }
    ctx->pc = 0x2458C4u;
label_2458c4:
    // 0x2458c4: 0x64001b  divu        $zero, $v1, $a0
    ctx->pc = 0x2458c4u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2458c8: 0x1010  mfhi        $v0
    ctx->pc = 0x2458c8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2458cc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2458ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2458d0: 0x10650009  beq         $v1, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2458D0u;
    {
        const bool branch_taken_0x2458d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2458D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2458D0u;
        // 0x2458d4: 0xa20217be  sb          $v0, 0x17BE($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 6078), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2458d0) {
            ctx->pc = 0x2458F8u;
            goto label_2458f8;
        }
    }
    ctx->pc = 0x2458D8u;
    // 0x2458d8: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2458d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2458dc: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2458DCu;
    {
        const bool branch_taken_0x2458dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2458dc) {
            ctx->pc = 0x2458E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2458DCu;
            // 0x2458e0: 0x920302f6  lbu         $v1, 0x2F6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245930u;
            goto label_245930;
        }
    }
    ctx->pc = 0x2458E4u;
    // 0x2458e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2458e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2458e8: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2458E8u;
    {
        const bool branch_taken_0x2458e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2458ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2458E8u;
        // 0x2458ec: 0x34c20100  ori         $v0, $a2, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2458e8) {
            ctx->pc = 0x245914u;
            goto label_245914;
        }
    }
    ctx->pc = 0x2458F0u;
    // 0x2458f0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2458F0u;
    {
        const bool branch_taken_0x2458f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2458F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2458F0u;
        // 0x2458f4: 0x920302f6  lbu         $v1, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2458f0) {
            ctx->pc = 0x245930u;
            goto label_245930;
        }
    }
    ctx->pc = 0x2458F8u;
label_2458f8:
    // 0x2458f8: 0x34c20080  ori         $v0, $a2, 0x80
    ctx->pc = 0x2458f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x2458fc: 0x8e040564  lw          $a0, 0x564($s0)
    ctx->pc = 0x2458fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x245900: 0x24030276  addiu       $v1, $zero, 0x276
    ctx->pc = 0x245900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 630));
    // 0x245904: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x245904u;
    {
        const bool branch_taken_0x245904 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x245908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245904u;
        // 0x245908: 0xae0216d4  sw          $v0, 0x16D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245904) {
            ctx->pc = 0x24592Cu;
            goto label_24592c;
        }
    }
    ctx->pc = 0x24590Cu;
    // 0x24590c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24590Cu;
    {
        const bool branch_taken_0x24590c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24590Cu;
        // 0x245910: 0x34c20280  ori         $v0, $a2, 0x280 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)640);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24590c) {
            ctx->pc = 0x245928u;
            goto label_245928;
        }
    }
    ctx->pc = 0x245914u;
label_245914:
    // 0x245914: 0x8e040564  lw          $a0, 0x564($s0)
    ctx->pc = 0x245914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x245918: 0x24030276  addiu       $v1, $zero, 0x276
    ctx->pc = 0x245918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 630));
    // 0x24591c: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24591Cu;
    {
        const bool branch_taken_0x24591c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x245920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24591Cu;
        // 0x245920: 0xae0216d4  sw          $v0, 0x16D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24591c) {
            ctx->pc = 0x24592Cu;
            goto label_24592c;
        }
    }
    ctx->pc = 0x245924u;
    // 0x245924: 0x34c20300  ori         $v0, $a2, 0x300
    ctx->pc = 0x245924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)768);
label_245928:
    // 0x245928: 0xae0216d4  sw          $v0, 0x16D4($s0)
    ctx->pc = 0x245928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 2));
label_24592c:
    // 0x24592c: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x24592cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_245930:
    // 0x245930: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x245930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x245934: 0xa2021869  sb          $v0, 0x1869($s0)
    ctx->pc = 0x245934u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6249), (uint8_t)GPR_U32(ctx, 2));
    // 0x245938: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x245938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x24593c: 0xae0017a8  sw          $zero, 0x17A8($s0)
    ctx->pc = 0x24593cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6056), GPR_U32(ctx, 0));
    // 0x245940: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x245940u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
label_245944:
    // 0x245944: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x245944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x245948: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x245948u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24594c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24594cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_245950:
    // 0x245950: 0xc055f06  jal         func_157C18
    ctx->pc = 0x245950u;
    SET_GPR_U32(ctx, 31, 0x245958u);
    ctx->pc = 0x245954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245950u;
    // 0x245954: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x245950u, 0x245958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245958u;
label_245958:
    // 0x245958: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x245958u;
    {
        const bool branch_taken_0x245958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245958) {
            ctx->pc = 0x24596Cu;
            goto label_24596c;
        }
    }
    ctx->pc = 0x245960u;
    // 0x245960: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x245960u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x245964: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x245964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x245968: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x245968u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_24596c:
    // 0x24596c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24596cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x245970: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x245970u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x245974: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x245974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245978: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x245978u;
    SET_GPR_U32(ctx, 31, 0x245980u);
    ctx->pc = 0x24597Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245978u;
    // 0x24597c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x245978u, 0x245980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245980u;
label_245980:
    // 0x245980: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x245980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245984: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x245984u;
    SET_GPR_U32(ctx, 31, 0x24598Cu);
    ctx->pc = 0x245988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245984u;
    // 0x245988: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x245984u, 0x24598Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24598Cu;
label_24598c:
    // 0x24598c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x24598Cu;
    {
        const bool branch_taken_0x24598c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24598Cu;
        // 0x245990: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24598c) {
            ctx->pc = 0x245A08u;
            goto label_245a08;
        }
    }
    ctx->pc = 0x245994u;
label_245994:
    // 0x245994: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x245994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x245998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x245998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24599c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24599cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2459a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2459a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2459a4: 0x8c452388  lw          $a1, 0x2388($v0)
    ctx->pc = 0x2459a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9096)));
    // 0x2459a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2459a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2459ac: 0x8c46238c  lw          $a2, 0x238C($v0)
    ctx->pc = 0x2459acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9100)));
    // 0x2459b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2459b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2459b4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2459b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2459b8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2459B8u;
    SET_GPR_U32(ctx, 31, 0x2459C0u);
    ctx->pc = 0x2459BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2459B8u;
    // 0x2459bc: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2459B8u, 0x2459C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2459C0u;
label_2459c0:
    // 0x2459c0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2459c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2459c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2459c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2459c8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2459c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2459cc:
    // 0x2459cc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2459CCu;
    SET_GPR_U32(ctx, 31, 0x2459D4u);
    ctx->pc = 0x2459D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2459CCu;
    // 0x2459d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2459CCu, 0x2459D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2459D4u;
label_2459d4:
    // 0x2459d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2459D4u;
    {
        const bool branch_taken_0x2459d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2459d4) {
            ctx->pc = 0x2459E4u;
            goto label_2459e4;
        }
    }
    ctx->pc = 0x2459DCu;
    // 0x2459dc: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x2459DCu;
    SET_GPR_U32(ctx, 31, 0x2459E4u);
    ctx->pc = 0x2459E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2459DCu;
    // 0x2459e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x2459DCu, 0x2459E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2459E4u;
label_2459e4:
    // 0x2459e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2459e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2459e8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2459e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2459ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2459ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2459f0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2459F0u;
    SET_GPR_U32(ctx, 31, 0x2459F8u);
    ctx->pc = 0x2459F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2459F0u;
    // 0x2459f4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2459F0u, 0x2459F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2459F8u;
label_2459f8:
    // 0x2459f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2459f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2459fc: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2459FCu;
    SET_GPR_U32(ctx, 31, 0x245A04u);
    ctx->pc = 0x245A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2459FCu;
    // 0x245a00: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2459FCu, 0x245A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245A04u;
label_245a04:
    // 0x245a04: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x245a04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_245a08:
    // 0x245a08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x245a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245a0c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x245a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x245a10: 0x3e00008  jr          $ra
    ctx->pc = 0x245A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245A10u;
        // 0x245a14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245A10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245A18u;
}
