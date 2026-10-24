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

// Function: func_002804F8
// Address: 0x2804f8 - 0x280688
void func_002804F8_0x2804f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002804F8_0x2804f8");
#endif

    switch (ctx->pc) {
        case 0x2805f0u: goto label_2805f0;
        case 0x280624u: goto label_280624;
        case 0x280634u: goto label_280634;
        case 0x28065cu: goto label_28065c;
        case 0x280670u: goto label_280670;
        default: break;
    }

    ctx->pc = 0x2804f8u;

    // 0x2804f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2804f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2804fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2804fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x280500: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x280500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x280504: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x280504u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280508: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x280508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28050c: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x28050cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x280510: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x280510u;
    {
        const bool branch_taken_0x280510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x280514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280510u;
        // 0x280514: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280510) {
            ctx->pc = 0x28052Cu;
            goto label_28052c;
        }
    }
    ctx->pc = 0x280518u;
    // 0x280518: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x280518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28051c: 0x10620052  beq         $v1, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x28051Cu;
    {
        const bool branch_taken_0x28051c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x280520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28051Cu;
        // 0x280520: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28051c) {
            ctx->pc = 0x280668u;
            goto label_280668;
        }
    }
    ctx->pc = 0x280524u;
    // 0x280524: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x280524u;
    {
        const bool branch_taken_0x280524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280524u;
        // 0x280528: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280524) {
            ctx->pc = 0x280678u;
            goto label_280678;
        }
    }
    ctx->pc = 0x28052Cu;
label_28052c:
    // 0x28052c: 0x922302f7  lbu         $v1, 0x2F7($s1)
    ctx->pc = 0x28052cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x280530: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x280530u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x280534: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x280534u;
    {
        const bool branch_taken_0x280534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280534u;
        // 0x280538: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280534) {
            ctx->pc = 0x280554u;
            goto label_280554;
        }
    }
    ctx->pc = 0x28053Cu;
    // 0x28053c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28053cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x280540: 0x24428520  addiu       $v0, $v0, -0x7AE0
    ctx->pc = 0x280540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935840));
    // 0x280544: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x280544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x280548: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x280548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28054c: 0x800008  jr          $a0
    ctx->pc = 0x28054Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x280554u: goto label_280554;
            case 0x280570u: goto label_280570;
            case 0x28058Cu: goto label_28058c;
            case 0x2805A8u: goto label_2805a8;
            case 0x2805C4u: goto label_2805c4;
            case 0x2805F8u: goto label_2805f8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28054Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x280554u;
label_280554:
    // 0x280554: 0x8e260304  lw          $a2, 0x304($s1)
    ctx->pc = 0x280554u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x280558: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x280558u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28055c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28055cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280560: 0x8cc500a8  lw          $a1, 0xA8($a2)
    ctx->pc = 0x280560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x280564: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x280564u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x280568: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x280568u;
    {
        const bool branch_taken_0x280568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28056Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280568u;
        // 0x28056c: 0x8cc200ac  lw          $v0, 0xAC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280568) {
            ctx->pc = 0x2805DCu;
            goto label_2805dc;
        }
    }
    ctx->pc = 0x280570u;
label_280570:
    // 0x280570: 0x8e260304  lw          $a2, 0x304($s1)
    ctx->pc = 0x280570u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x280574: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x280574u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x280578: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x280578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28057c: 0x8cc500a0  lw          $a1, 0xA0($a2)
    ctx->pc = 0x28057cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 160)));
    // 0x280580: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x280580u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x280584: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x280584u;
    {
        const bool branch_taken_0x280584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280584u;
        // 0x280588: 0x8cc200a4  lw          $v0, 0xA4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280584) {
            ctx->pc = 0x2805DCu;
            goto label_2805dc;
        }
    }
    ctx->pc = 0x28058Cu;
label_28058c:
    // 0x28058c: 0x8e260304  lw          $a2, 0x304($s1)
    ctx->pc = 0x28058cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x280590: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x280590u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x280594: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x280594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280598: 0x8cc500b0  lw          $a1, 0xB0($a2)
    ctx->pc = 0x280598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 176)));
    // 0x28059c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x28059cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2805a0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2805A0u;
    {
        const bool branch_taken_0x2805a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2805A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2805A0u;
        // 0x2805a4: 0x8cc200b4  lw          $v0, 0xB4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2805a0) {
            ctx->pc = 0x2805DCu;
            goto label_2805dc;
        }
    }
    ctx->pc = 0x2805A8u;
label_2805a8:
    // 0x2805a8: 0x8e260304  lw          $a2, 0x304($s1)
    ctx->pc = 0x2805a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2805ac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2805acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2805b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2805b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2805b4: 0x8cc500b8  lw          $a1, 0xB8($a2)
    ctx->pc = 0x2805b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 184)));
    // 0x2805b8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2805b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2805bc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2805BCu;
    {
        const bool branch_taken_0x2805bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2805C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2805BCu;
        // 0x2805c0: 0x8cc200bc  lw          $v0, 0xBC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2805bc) {
            ctx->pc = 0x2805DCu;
            goto label_2805dc;
        }
    }
    ctx->pc = 0x2805C4u;
label_2805c4:
    // 0x2805c4: 0x8e260304  lw          $a2, 0x304($s1)
    ctx->pc = 0x2805c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2805c8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2805c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2805cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2805ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2805d0: 0x8cc500c0  lw          $a1, 0xC0($a2)
    ctx->pc = 0x2805d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 192)));
    // 0x2805d4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2805d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2805d8: 0x8cc200c4  lw          $v0, 0xC4($a2)
    ctx->pc = 0x2805d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 196)));
label_2805dc:
    // 0x2805dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2805dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2805e0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2805e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2805e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2805e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2805e8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2805E8u;
    SET_GPR_U32(ctx, 31, 0x2805F0u);
    ctx->pc = 0x2805ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2805E8u;
    // 0x2805ec: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2805E8u, 0x2805F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2805F0u;
label_2805f0:
    // 0x2805f0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2805F0u;
    {
        const bool branch_taken_0x2805f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2805F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2805F0u;
        // 0x2805f4: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2805f0) {
            ctx->pc = 0x280628u;
            goto label_280628;
        }
    }
    ctx->pc = 0x2805F8u;
label_2805f8:
    // 0x2805f8: 0x8e260304  lw          $a2, 0x304($s1)
    ctx->pc = 0x2805f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2805fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2805fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x280600: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x280600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280604: 0x8cc500c8  lw          $a1, 0xC8($a2)
    ctx->pc = 0x280604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 200)));
    // 0x280608: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x280608u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28060c: 0x8cc200cc  lw          $v0, 0xCC($a2)
    ctx->pc = 0x28060cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 204)));
    // 0x280610: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x280610u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280614: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x280614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x280618: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x280618u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28061c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x28061Cu;
    SET_GPR_U32(ctx, 31, 0x280624u);
    ctx->pc = 0x280620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28061Cu;
    // 0x280620: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x28061Cu, 0x280624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280624u;
label_280624:
    // 0x280624: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x280624u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_280628:
    // 0x280628: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x280628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28062c: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x28062Cu;
    SET_GPR_U32(ctx, 31, 0x280634u);
    ctx->pc = 0x280630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28062Cu;
    // 0x280630: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x28062Cu, 0x280634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280634u;
label_280634:
    // 0x280634: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x280634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x280638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x280638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28063c: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x28063cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x280640: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x280640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280644: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x280644u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280648: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x280648u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28064c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28064cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280650: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x280650u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280654: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x280654u;
    SET_GPR_U32(ctx, 31, 0x28065Cu);
    ctx->pc = 0x280658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280654u;
    // 0x280658: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x280654u, 0x28065Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28065Cu;
label_28065c:
    // 0x28065c: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x28065cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x280660: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x280660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x280664: 0xa22302f6  sb          $v1, 0x2F6($s1)
    ctx->pc = 0x280664u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
label_280668:
    // 0x280668: 0xc055f06  jal         func_157C18
    ctx->pc = 0x280668u;
    SET_GPR_U32(ctx, 31, 0x280670u);
    ctx->pc = 0x28066Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280668u;
    // 0x28066c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x280668u, 0x280670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280670u;
label_280670:
    // 0x280670: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x280670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280674: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x280674u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_280678:
    // 0x280678: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x280678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28067c: 0x3e00008  jr          $ra
    ctx->pc = 0x28067Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28067Cu;
        // 0x280680: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28067Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280684u;
    // 0x280684: 0x0  nop
    ctx->pc = 0x280684u;
    // NOP
    ctx->pc = 0x280688u;
}
