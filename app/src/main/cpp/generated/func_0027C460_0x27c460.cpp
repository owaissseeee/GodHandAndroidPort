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

// Function: func_0027C460
// Address: 0x27c460 - 0x27c620
void func_0027C460_0x27c460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027C460_0x27c460");
#endif

    switch (ctx->pc) {
        case 0x27c4c4u: goto label_27c4c4;
        case 0x27c4e4u: goto label_27c4e4;
        case 0x27c538u: goto label_27c538;
        case 0x27c5e0u: goto label_27c5e0;
        case 0x27c610u: goto label_27c610;
        default: break;
    }

    ctx->pc = 0x27c460u;

    // 0x27c460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27c460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27c464: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27c464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27c468: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27c468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27c46c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27c46cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c470: 0x8e021560  lw          $v0, 0x1560($s0)
    ctx->pc = 0x27c470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5472)));
    // 0x27c474: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x27c474u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x27c478: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x27c478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x27c47c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x27C47Cu;
    {
        const bool branch_taken_0x27c47c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C47Cu;
        // 0x27c480: 0xae021560  sw          $v0, 0x1560($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5472), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c47c) {
            ctx->pc = 0x27C498u;
            goto label_27c498;
        }
    }
    ctx->pc = 0x27C484u;
    // 0x27c484: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27c484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c488: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x27C488u;
    {
        const bool branch_taken_0x27c488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27c488) {
            ctx->pc = 0x27C4DCu;
            goto label_27c4dc;
        }
    }
    ctx->pc = 0x27C490u;
    // 0x27c490: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x27C490u;
    {
        const bool branch_taken_0x27c490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C490u;
        // 0x27c494: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c490) {
            ctx->pc = 0x27C614u;
            goto label_27c614;
        }
    }
    ctx->pc = 0x27C498u;
label_27c498:
    // 0x27c498: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x27c498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x27c49c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27c49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c4a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27c4a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27c4a4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x27c4a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27c4a8: 0x8c4500c0  lw          $a1, 0xC0($v0)
    ctx->pc = 0x27c4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x27c4ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27c4acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c4b0: 0x8c4600c4  lw          $a2, 0xC4($v0)
    ctx->pc = 0x27c4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x27c4b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27c4b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c4b8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27c4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27c4bc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x27C4BCu;
    SET_GPR_U32(ctx, 31, 0x27C4C4u);
    ctx->pc = 0x27C4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C4BCu;
    // 0x27c4c0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x27C4BCu, 0x27C4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C4C4u;
label_27c4c4:
    // 0x27c4c4: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x27c4c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x27c4c8: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x27c4c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x27c4cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27c4ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c4d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27c4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27c4d4: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x27c4d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    // 0x27c4d8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x27c4d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_27c4dc:
    // 0x27c4dc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x27C4DCu;
    SET_GPR_U32(ctx, 31, 0x27C4E4u);
    ctx->pc = 0x27C4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C4DCu;
    // 0x27c4e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x27C4DCu, 0x27C4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C4E4u;
label_27c4e4:
    // 0x27c4e4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x27C4E4u;
    {
        const bool branch_taken_0x27c4e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c4e4) {
            ctx->pc = 0x27C4E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C4E4u;
            // 0x27c4e8: 0xc6010600  lwc1        $f1, 0x600($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C500u;
            goto label_27c500;
        }
    }
    ctx->pc = 0x27C4ECu;
    // 0x27c4ec: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x27c4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c4f0: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x27c4f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c4f4: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x27c4f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c4f8: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x27c4f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c4fc: 0xc6010600  lwc1        $f1, 0x600($s0)
    ctx->pc = 0x27c4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c500:
    // 0x27c500: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x27c500u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27c504: 0x0  nop
    ctx->pc = 0x27c504u;
    // NOP
    // 0x27c508: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x27c508u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c50c: 0x0  nop
    ctx->pc = 0x27c50cu;
    // NOP
    // 0x27c510: 0x45020040  bc1fl       . + 4 + (0x40 << 2)
    ctx->pc = 0x27C510u;
    {
        const bool branch_taken_0x27c510 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c510) {
            ctx->pc = 0x27C514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C510u;
            // 0x27c514: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C614u;
            goto label_27c614;
        }
    }
    ctx->pc = 0x27C518u;
    // 0x27c518: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x27c518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c51c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27c51cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27c520: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x27c520u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c524: 0x0  nop
    ctx->pc = 0x27c524u;
    // NOP
    // 0x27c528: 0x45000039  bc1f        . + 4 + (0x39 << 2)
    ctx->pc = 0x27C528u;
    {
        const bool branch_taken_0x27c528 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27C52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C528u;
        // 0x27c52c: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c528) {
            ctx->pc = 0x27C610u;
            goto label_27c610;
        }
    }
    ctx->pc = 0x27C530u;
    // 0x27c530: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x27C530u;
    SET_GPR_U32(ctx, 31, 0x27C538u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x27C530u, 0x27C538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C538u;
label_27c538:
    // 0x27c538: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x27c538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27c53c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x27c53cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x27c540: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x27C540u;
    {
        const bool branch_taken_0x27c540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c540) {
            ctx->pc = 0x27C544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C540u;
            // 0x27c544: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C548u;
            goto label_27c548;
        }
    }
    ctx->pc = 0x27C548u;
label_27c548:
    // 0x27c548: 0x2010  mfhi        $a0
    ctx->pc = 0x27c548u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x27c54c: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x27c54cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x27c550: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27C550u;
    {
        const bool branch_taken_0x27c550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C550u;
        // 0x27c554: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c550) {
            ctx->pc = 0x27C570u;
            goto label_27c570;
        }
    }
    ctx->pc = 0x27C558u;
    // 0x27c558: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x27c558u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x27c55c: 0x244280f0  addiu       $v0, $v0, -0x7F10
    ctx->pc = 0x27c55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934768));
    // 0x27c560: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27c560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27c564: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x27c564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27c568: 0x800008  jr          $a0
    ctx->pc = 0x27C568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27C570u: goto label_27c570;
            case 0x27C588u: goto label_27c588;
            case 0x27C5A0u: goto label_27c5a0;
            case 0x27C5B8u: goto label_27c5b8;
            case 0x27C5E8u: goto label_27c5e8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C568u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27C570u;
label_27c570:
    // 0x27c570: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x27c570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x27c574: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x27c574u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c578: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x27c578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x27c57c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27c57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c580: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x27C580u;
    {
        const bool branch_taken_0x27c580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C580u;
        // 0x27c584: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c580) {
            ctx->pc = 0x27C5CCu;
            goto label_27c5cc;
        }
    }
    ctx->pc = 0x27C588u;
label_27c588:
    // 0x27c588: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x27c588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x27c58c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x27c58cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c590: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x27c590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x27c594: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27c594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c598: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27C598u;
    {
        const bool branch_taken_0x27c598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C598u;
        // 0x27c59c: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c598) {
            ctx->pc = 0x27C5CCu;
            goto label_27c5cc;
        }
    }
    ctx->pc = 0x27C5A0u;
label_27c5a0:
    // 0x27c5a0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x27c5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x27c5a4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x27c5a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c5a8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x27c5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x27c5ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27c5acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c5b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27C5B0u;
    {
        const bool branch_taken_0x27c5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C5B0u;
        // 0x27c5b4: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c5b0) {
            ctx->pc = 0x27C5CCu;
            goto label_27c5cc;
        }
    }
    ctx->pc = 0x27C5B8u;
label_27c5b8:
    // 0x27c5b8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x27c5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x27c5bc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x27c5bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c5c0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x27c5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x27c5c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27c5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c5c8: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x27c5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_27c5cc:
    // 0x27c5cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27c5ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c5d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27c5d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c5d4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x27c5d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c5d8: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x27C5D8u;
    SET_GPR_U32(ctx, 31, 0x27C5E0u);
    ctx->pc = 0x27C5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C5D8u;
    // 0x27c5dc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x27C5D8u, 0x27C5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C5E0u;
label_27c5e0:
    // 0x27c5e0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27C5E0u;
    {
        const bool branch_taken_0x27c5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C5E0u;
        // 0x27c5e4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c5e0) {
            ctx->pc = 0x27C614u;
            goto label_27c614;
        }
    }
    ctx->pc = 0x27C5E8u;
label_27c5e8:
    // 0x27c5e8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x27c5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x27c5ec: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x27c5ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c5f0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x27c5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x27c5f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27c5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c5f8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x27c5f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x27c5fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27c5fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c600: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27c600u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c604: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x27c604u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c608: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x27C608u;
    SET_GPR_U32(ctx, 31, 0x27C610u);
    ctx->pc = 0x27C60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C608u;
    // 0x27c60c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x27C608u, 0x27C610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C610u;
label_27c610:
    // 0x27c610: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27c610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27c614:
    // 0x27c614: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27c614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27c618: 0x3e00008  jr          $ra
    ctx->pc = 0x27C618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C618u;
        // 0x27c61c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27C620u;
}
