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

// Function: func_002801F8
// Address: 0x2801f8 - 0x2803f0
void func_002801F8_0x2801f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002801F8_0x2801f8");
#endif

    switch (ctx->pc) {
        case 0x280238u: goto label_280238;
        case 0x280248u: goto label_280248;
        case 0x2802a0u: goto label_2802a0;
        case 0x280318u: goto label_280318;
        case 0x280348u: goto label_280348;
        case 0x280358u: goto label_280358;
        case 0x280380u: goto label_280380;
        case 0x280394u: goto label_280394;
        case 0x2803a4u: goto label_2803a4;
        default: break;
    }

    ctx->pc = 0x2801f8u;

    // 0x2801f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2801f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2801fc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2801fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x280200: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x280200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x280204: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x280204u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280208: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x280208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x28020c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28020cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x280210: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x280210u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x280214: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x280214u;
    {
        const bool branch_taken_0x280214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x280218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280214u;
        // 0x280218: 0x8e321580  lw          $s2, 0x1580($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280214) {
            ctx->pc = 0x280230u;
            goto label_280230;
        }
    }
    ctx->pc = 0x28021Cu;
    // 0x28021c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28021cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280220: 0x1062005a  beq         $v1, $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x280220u;
    {
        const bool branch_taken_0x280220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x280224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280220u;
        // 0x280224: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280220) {
            ctx->pc = 0x28038Cu;
            goto label_28038c;
        }
    }
    ctx->pc = 0x280228u;
    // 0x280228: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x280228u;
    {
        const bool branch_taken_0x280228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280228u;
        // 0x28022c: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280228) {
            ctx->pc = 0x2803DCu;
            goto label_2803dc;
        }
    }
    ctx->pc = 0x280230u;
label_280230:
    // 0x280230: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x280230u;
    SET_GPR_U32(ctx, 31, 0x280238u);
    ctx->pc = 0x280234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280230u;
    // 0x280234: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x280230u, 0x280238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280238u;
label_280238:
    // 0x280238: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x280238u;
    {
        const bool branch_taken_0x280238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x280238) {
            ctx->pc = 0x280298u;
            goto label_280298;
        }
    }
    ctx->pc = 0x280240u;
    // 0x280240: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x280240u;
    SET_GPR_U32(ctx, 31, 0x280248u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x280240u, 0x280248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280248u;
label_280248:
    // 0x280248: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x280248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28024c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28024Cu;
    {
        const bool branch_taken_0x28024c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x280250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28024Cu;
        // 0x280250: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28024c) {
            ctx->pc = 0x28025Cu;
            goto label_28025c;
        }
    }
    ctx->pc = 0x280254u;
    // 0x280254: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x280254u;
    {
        const bool branch_taken_0x280254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x280254) {
            ctx->pc = 0x280258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280254u;
            // 0x280258: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28027Cu;
            goto label_28027c;
        }
    }
    ctx->pc = 0x28025Cu;
label_28025c:
    // 0x28025c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x28025cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x280260: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x280260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280264: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x280264u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x280268: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x280268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28026c: 0x8c450118  lw          $a1, 0x118($v0)
    ctx->pc = 0x28026cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x280270: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x280270u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280274: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x280274u;
    {
        const bool branch_taken_0x280274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280274u;
        // 0x280278: 0x8c46011c  lw          $a2, 0x11C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280274) {
            ctx->pc = 0x280308u;
            goto label_280308;
        }
    }
    ctx->pc = 0x28027Cu;
label_28027c:
    // 0x28027c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28027cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280280: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x280280u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x280284: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x280284u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x280288: 0x8c450118  lw          $a1, 0x118($v0)
    ctx->pc = 0x280288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x28028c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28028cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280290: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x280290u;
    {
        const bool branch_taken_0x280290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280290u;
        // 0x280294: 0x8c46011c  lw          $a2, 0x11C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280290) {
            ctx->pc = 0x280308u;
            goto label_280308;
        }
    }
    ctx->pc = 0x280298u;
label_280298:
    // 0x280298: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x280298u;
    SET_GPR_U32(ctx, 31, 0x2802A0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x280298u, 0x2802A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2802A0u;
label_2802a0:
    // 0x2802a0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2802a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2802a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2802a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2802a8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2802a8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2802ac: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2802ACu;
    {
        const bool branch_taken_0x2802ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2802ac) {
            ctx->pc = 0x2802B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2802ACu;
            // 0x2802b0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2802B4u;
            goto label_2802b4;
        }
    }
    ctx->pc = 0x2802B4u;
label_2802b4:
    // 0x2802b4: 0x2810  mfhi        $a1
    ctx->pc = 0x2802b4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2802b8: 0x50a4000d  beql        $a1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2802B8u;
    {
        const bool branch_taken_0x2802b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2802b8) {
            ctx->pc = 0x2802BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2802B8u;
            // 0x2802bc: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2802F0u;
            goto label_2802f0;
        }
    }
    ctx->pc = 0x2802C0u;
    // 0x2802c0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2802C0u;
    {
        const bool branch_taken_0x2802c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2802C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2802C0u;
        // 0x2802c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2802c0) {
            ctx->pc = 0x2802D0u;
            goto label_2802d0;
        }
    }
    ctx->pc = 0x2802C8u;
    // 0x2802c8: 0x50a20015  beql        $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2802C8u;
    {
        const bool branch_taken_0x2802c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2802c8) {
            ctx->pc = 0x2802CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2802C8u;
            // 0x2802cc: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280320u;
            goto label_280320;
        }
    }
    ctx->pc = 0x2802D0u;
label_2802d0:
    // 0x2802d0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2802d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2802d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2802d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2802d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2802d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2802dc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2802dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2802e0: 0x8c4500e8  lw          $a1, 0xE8($v0)
    ctx->pc = 0x2802e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x2802e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2802e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2802e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2802E8u;
    {
        const bool branch_taken_0x2802e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2802ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2802E8u;
        // 0x2802ec: 0x8c4600ec  lw          $a2, 0xEC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2802e8) {
            ctx->pc = 0x280308u;
            goto label_280308;
        }
    }
    ctx->pc = 0x2802F0u;
label_2802f0:
    // 0x2802f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2802f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2802f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2802f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2802f8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2802f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2802fc: 0x8c4500e8  lw          $a1, 0xE8($v0)
    ctx->pc = 0x2802fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x280300: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x280300u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280304: 0x8c4600f4  lw          $a2, 0xF4($v0)
    ctx->pc = 0x280304u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
label_280308:
    // 0x280308: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x280308u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28030c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x28030cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x280310: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x280310u;
    SET_GPR_U32(ctx, 31, 0x280318u);
    ctx->pc = 0x280314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280310u;
    // 0x280314: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x280310u, 0x280318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280318u;
label_280318:
    // 0x280318: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x280318u;
    {
        const bool branch_taken_0x280318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280318u;
        // 0x28031c: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280318) {
            ctx->pc = 0x28034Cu;
            goto label_28034c;
        }
    }
    ctx->pc = 0x280320u;
label_280320:
    // 0x280320: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x280320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280324: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x280324u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x280328: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x280328u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28032c: 0x8c4500e8  lw          $a1, 0xE8($v0)
    ctx->pc = 0x28032cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x280330: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x280330u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280334: 0x8c4600fc  lw          $a2, 0xFC($v0)
    ctx->pc = 0x280334u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x280338: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x280338u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28033c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x28033cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x280340: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x280340u;
    SET_GPR_U32(ctx, 31, 0x280348u);
    ctx->pc = 0x280344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280340u;
    // 0x280344: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x280340u, 0x280348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280348u;
label_280348:
    // 0x280348: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x280348u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_28034c:
    // 0x28034c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28034cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280350: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x280350u;
    SET_GPR_U32(ctx, 31, 0x280358u);
    ctx->pc = 0x280354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280350u;
    // 0x280354: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x280350u, 0x280358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280358u;
label_280358:
    // 0x280358: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x280358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x28035c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28035cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280360: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x280360u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x280364: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x280364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280368: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x280368u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28036c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28036cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280370: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x280370u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280374: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x280374u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280378: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x280378u;
    SET_GPR_U32(ctx, 31, 0x280380u);
    ctx->pc = 0x28037Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280378u;
    // 0x28037c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x280378u, 0x280380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280380u;
label_280380:
    // 0x280380: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x280380u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x280384: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x280384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x280388: 0xa22302f6  sb          $v1, 0x2F6($s1)
    ctx->pc = 0x280388u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
label_28038c:
    // 0x28038c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x28038Cu;
    SET_GPR_U32(ctx, 31, 0x280394u);
    ctx->pc = 0x280390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28038Cu;
    // 0x280390: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x28038Cu, 0x280394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280394u;
label_280394:
    // 0x280394: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x280394u;
    {
        const bool branch_taken_0x280394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280394u;
        // 0x280398: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280394) {
            ctx->pc = 0x2803D8u;
            goto label_2803d8;
        }
    }
    ctx->pc = 0x28039Cu;
    // 0x28039c: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x28039Cu;
    SET_GPR_U32(ctx, 31, 0x2803A4u);
    ctx->pc = 0x2803A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28039Cu;
    // 0x2803a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x28039Cu, 0x2803A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2803A4u;
label_2803a4:
    // 0x2803a4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2803A4u;
    {
        const bool branch_taken_0x2803a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2803A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2803A4u;
        // 0x2803a8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2803a4) {
            ctx->pc = 0x2803C4u;
            goto label_2803c4;
        }
    }
    ctx->pc = 0x2803ACu;
    // 0x2803ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2803acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2803b0: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x2803b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2803b4: 0xa22302f6  sb          $v1, 0x2F6($s1)
    ctx->pc = 0x2803b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x2803b8: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x2803b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2803bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2803BCu;
    {
        const bool branch_taken_0x2803bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2803C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2803BCu;
        // 0x2803c0: 0xa22002f4  sb          $zero, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2803bc) {
            ctx->pc = 0x2803D4u;
            goto label_2803d4;
        }
    }
    ctx->pc = 0x2803C4u;
label_2803c4:
    // 0x2803c4: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x2803c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2803c8: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x2803c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x2803cc: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x2803ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x2803d0: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x2803d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_2803d4:
    // 0x2803d4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2803d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2803d8:
    // 0x2803d8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2803d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2803dc:
    // 0x2803dc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2803dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2803e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2803e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2803e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2803E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2803E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2803E4u;
        // 0x2803e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2803E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2803ECu;
    // 0x2803ec: 0x0  nop
    ctx->pc = 0x2803ecu;
    // NOP
    ctx->pc = 0x2803f0u;
}
