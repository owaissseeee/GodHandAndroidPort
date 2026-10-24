#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: writeCheck__7cMcSave
// Address: 0x7c6088 - 0x7c6290
void writeCheck__7cMcSave_0x7c6088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("writeCheck__7cMcSave_0x7c6088");
#endif

    switch (ctx->pc) {
        case 0x7c60f0u: goto label_7c60f0;
        case 0x7c6100u: goto label_7c6100;
        case 0x7c6124u: goto label_7c6124;
        case 0x7c6140u: goto label_7c6140;
        case 0x7c6168u: goto label_7c6168;
        case 0x7c6178u: goto label_7c6178;
        case 0x7c61a4u: goto label_7c61a4;
        case 0x7c61b8u: goto label_7c61b8;
        case 0x7c61d0u: goto label_7c61d0;
        case 0x7c61e0u: goto label_7c61e0;
        case 0x7c6204u: goto label_7c6204;
        case 0x7c621cu: goto label_7c621c;
        case 0x7c6238u: goto label_7c6238;
        case 0x7c6278u: goto label_7c6278;
        default: break;
    }

    ctx->pc = 0x7c6088u;

    // 0x7c6088: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x7c6088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x7c608c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x7c608cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x7c6090: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x7c6090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x7c6094: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7c6094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c6098: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x7c6098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x7c609c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x7c609cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c60a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7c60a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7c60a4: 0x8e0300f4  lw          $v1, 0xF4($s0)
    ctx->pc = 0x7c60a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x7c60a8: 0x10720019  beq         $v1, $s2, . + 4 + (0x19 << 2)
    ctx->pc = 0x7C60A8u;
    {
        const bool branch_taken_0x7c60a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x7C60ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C60A8u;
        // 0x7c60ac: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c60a8) {
            ctx->pc = 0x7C6110u;
            goto label_7c6110;
        }
    }
    ctx->pc = 0x7C60B0u;
    // 0x7c60b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C60B0u;
    {
        const bool branch_taken_0x7c60b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C60B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C60B0u;
        // 0x7c60b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c60b0) {
            ctx->pc = 0x7C60C8u;
            goto label_7c60c8;
        }
    }
    ctx->pc = 0x7C60B8u;
    // 0x7c60b8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x7C60B8u;
    {
        const bool branch_taken_0x7c60b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C60BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C60B8u;
        // 0x7c60bc: 0x3c04007d  lui         $a0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c60b8) {
            ctx->pc = 0x7C60E0u;
            goto label_7c60e0;
        }
    }
    ctx->pc = 0x7C60C0u;
    // 0x7c60c0: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x7C60C0u;
    {
        const bool branch_taken_0x7c60c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C60C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C60C0u;
        // 0x7c60c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c60c0) {
            ctx->pc = 0x7C6270u;
            goto label_7c6270;
        }
    }
    ctx->pc = 0x7C60C8u;
label_7c60c8:
    // 0x7c60c8: 0x10620031  beq         $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x7C60C8u;
    {
        const bool branch_taken_0x7c60c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C60CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C60C8u;
        // 0x7c60cc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c60c8) {
            ctx->pc = 0x7C6190u;
            goto label_7c6190;
        }
    }
    ctx->pc = 0x7C60D0u;
    // 0x7c60d0: 0x10620049  beq         $v1, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x7C60D0u;
    {
        const bool branch_taken_0x7c60d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C60D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C60D0u;
        // 0x7c60d4: 0x3c04007d  lui         $a0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c60d0) {
            ctx->pc = 0x7C61F8u;
            goto label_7c61f8;
        }
    }
    ctx->pc = 0x7C60D8u;
    // 0x7c60d8: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x7C60D8u;
    {
        const bool branch_taken_0x7c60d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C60DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C60D8u;
        // 0x7c60dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c60d8) {
            ctx->pc = 0x7C6270u;
            goto label_7c6270;
        }
    }
    ctx->pc = 0x7C60E0u;
label_7c60e0:
    // 0x7c60e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7c60e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c60e4: 0x24841740  addiu       $a0, $a0, 0x1740
    ctx->pc = 0x7c60e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
    // 0x7c60e8: 0xc1f0cf4  jal         func_7C33D0
    ctx->pc = 0x7C60E8u;
    SET_GPR_U32(ctx, 31, 0x7C60F0u);
    ctx->pc = 0x7C60ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C60E8u;
    // 0x7c60ec: 0x24850014  addiu       $a1, $a0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C33D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C33D0u, 0x7C60E8u, 0x7C60F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C60F0u;
label_7c60f0:
    // 0x7c60f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7c60f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c60f4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x7c60f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x7c60f8: 0xc1f1b78  jal         func_7C6DE0
    ctx->pc = 0x7C60F8u;
    SET_GPR_U32(ctx, 31, 0x7C6100u);
    ctx->pc = 0x7C60FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C60F8u;
    // 0x7c60fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6DE0u, 0x7C60F8u, 0x7C6100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C6100u;
label_7c6100:
    // 0x7c6100: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C6100u;
    {
        const bool branch_taken_0x7c6100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7c6100) {
            ctx->pc = 0x7C6104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C6100u;
            // 0x7c6104: 0xae1200f4  sw          $s2, 0xF4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C6110u;
            goto label_7c6110;
        }
    }
    ctx->pc = 0x7C6108u;
    // 0x7c6108: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x7C6108u;
    {
        const bool branch_taken_0x7c6108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6108u;
        // 0x7c610c: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6108) {
            ctx->pc = 0x7C6240u;
            goto label_7c6240;
        }
    }
    ctx->pc = 0x7C6110u;
label_7c6110:
    // 0x7c6110: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7c6110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7c6114: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c6114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c6118: 0x24521740  addiu       $s2, $v0, 0x1740
    ctx->pc = 0x7c6118u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
    // 0x7c611c: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C611Cu;
    SET_GPR_U32(ctx, 31, 0x7C6124u);
    ctx->pc = 0x7C6120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C611Cu;
    // 0x7c6120: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C611Cu, 0x7C6124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C6124u;
label_7c6124:
    // 0x7c6124: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x7c6124u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c6128: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7c6128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c612c: 0x16220050  bne         $s1, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x7C612Cu;
    {
        const bool branch_taken_0x7c612c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x7C6130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C612Cu;
        // 0x7c6130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c612c) {
            ctx->pc = 0x7C6270u;
            goto label_7c6270;
        }
    }
    ctx->pc = 0x7C6134u;
    // 0x7c6134: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x7c6134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c6138: 0xc1f1bbe  jal         func_7C6EF8
    ctx->pc = 0x7C6138u;
    SET_GPR_U32(ctx, 31, 0x7C6140u);
    ctx->pc = 0x7C613Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C6138u;
    // 0x7c613c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6EF8u, 0x7C6138u, 0x7C6140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C6140u;
label_7c6140:
    // 0x7c6140: 0x14510044  bne         $v0, $s1, . + 4 + (0x44 << 2)
    ctx->pc = 0x7C6140u;
    {
        const bool branch_taken_0x7c6140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x7C6144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6140u;
        // 0x7c6144: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6140) {
            ctx->pc = 0x7C6254u;
            goto label_7c6254;
        }
    }
    ctx->pc = 0x7C6148u;
    // 0x7c6148: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x7c6148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c614c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7c614cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c6150: 0x8e0600fc  lw          $a2, 0xFC($s0)
    ctx->pc = 0x7c6150u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x7c6154: 0x3407b400  ori         $a3, $zero, 0xB400
    ctx->pc = 0x7c6154u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)46080);
    // 0x7c6158: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7c6158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c615c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x7c615cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x7c6160: 0xc1f0d98  jal         func_7C3660
    ctx->pc = 0x7C6160u;
    SET_GPR_U32(ctx, 31, 0x7C6168u);
    ctx->pc = 0x7C6164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C6160u;
    // 0x7c6164: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3660u, 0x7C6160u, 0x7C6168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C6168u;
label_7c6168:
    // 0x7c6168: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c6168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c616c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7c616cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c6170: 0xc1f1b78  jal         func_7C6DE0
    ctx->pc = 0x7C6170u;
    SET_GPR_U32(ctx, 31, 0x7C6178u);
    ctx->pc = 0x7C6174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C6170u;
    // 0x7c6174: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6DE0u, 0x7C6170u, 0x7C6178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C6178u;
label_7c6178:
    // 0x7c6178: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C6178u;
    {
        const bool branch_taken_0x7c6178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6178u;
        // 0x7c617c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6178) {
            ctx->pc = 0x7C6188u;
            goto label_7c6188;
        }
    }
    ctx->pc = 0x7C6180u;
    // 0x7c6180: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x7C6180u;
    {
        const bool branch_taken_0x7c6180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C6184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6180u;
        // 0x7c6184: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6180) {
            ctx->pc = 0x7C6240u;
            goto label_7c6240;
        }
    }
    ctx->pc = 0x7C6188u;
label_7c6188:
    // 0x7c6188: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x7C6188u;
    {
        const bool branch_taken_0x7c6188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C618Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6188u;
        // 0x7c618c: 0xae0200f4  sw          $v0, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6188) {
            ctx->pc = 0x7C626Cu;
            goto label_7c626c;
        }
    }
    ctx->pc = 0x7C6190u;
label_7c6190:
    // 0x7c6190: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7c6190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7c6194: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c6194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c6198: 0x24511740  addiu       $s1, $v0, 0x1740
    ctx->pc = 0x7c6198u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
    // 0x7c619c: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C619Cu;
    SET_GPR_U32(ctx, 31, 0x7C61A4u);
    ctx->pc = 0x7C61A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C619Cu;
    // 0x7c61a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C619Cu, 0x7C61A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C61A4u;
label_7c61a4:
    // 0x7c61a4: 0x14520032  bne         $v0, $s2, . + 4 + (0x32 << 2)
    ctx->pc = 0x7C61A4u;
    {
        const bool branch_taken_0x7c61a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x7C61A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C61A4u;
        // 0x7c61a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c61a4) {
            ctx->pc = 0x7C6270u;
            goto label_7c6270;
        }
    }
    ctx->pc = 0x7C61ACu;
    // 0x7c61ac: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x7c61acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c61b0: 0xc1f1c12  jal         func_7C7048
    ctx->pc = 0x7C61B0u;
    SET_GPR_U32(ctx, 31, 0x7C61B8u);
    ctx->pc = 0x7C61B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C61B0u;
    // 0x7c61b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7048u, 0x7C61B0u, 0x7C61B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C61B8u;
label_7c61b8:
    // 0x7c61b8: 0x14520026  bne         $v0, $s2, . + 4 + (0x26 << 2)
    ctx->pc = 0x7C61B8u;
    {
        const bool branch_taken_0x7c61b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x7C61BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C61B8u;
        // 0x7c61bc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c61b8) {
            ctx->pc = 0x7C6254u;
            goto label_7c6254;
        }
    }
    ctx->pc = 0x7C61C0u;
    // 0x7c61c0: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x7c61c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x7c61c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c61c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c61c8: 0xc1f0ce0  jal         func_7C3380
    ctx->pc = 0x7C61C8u;
    SET_GPR_U32(ctx, 31, 0x7C61D0u);
    ctx->pc = 0x7C61CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C61C8u;
    // 0x7c61cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3380u, 0x7C61C8u, 0x7C61D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C61D0u;
label_7c61d0:
    // 0x7c61d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c61d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c61d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7c61d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c61d8: 0xc1f1b78  jal         func_7C6DE0
    ctx->pc = 0x7C61D8u;
    SET_GPR_U32(ctx, 31, 0x7C61E0u);
    ctx->pc = 0x7C61DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C61D8u;
    // 0x7c61dc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6DE0u, 0x7C61D8u, 0x7C61E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C61E0u;
label_7c61e0:
    // 0x7c61e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C61E0u;
    {
        const bool branch_taken_0x7c61e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C61E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C61E0u;
        // 0x7c61e4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c61e0) {
            ctx->pc = 0x7C61F0u;
            goto label_7c61f0;
        }
    }
    ctx->pc = 0x7C61E8u;
    // 0x7c61e8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x7C61E8u;
    {
        const bool branch_taken_0x7c61e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C61ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C61E8u;
        // 0x7c61ec: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c61e8) {
            ctx->pc = 0x7C6240u;
            goto label_7c6240;
        }
    }
    ctx->pc = 0x7C61F0u;
label_7c61f0:
    // 0x7c61f0: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x7C61F0u;
    {
        const bool branch_taken_0x7c61f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C61F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C61F0u;
        // 0x7c61f4: 0xae0200f4  sw          $v0, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c61f0) {
            ctx->pc = 0x7C626Cu;
            goto label_7c626c;
        }
    }
    ctx->pc = 0x7C61F8u;
label_7c61f8:
    // 0x7c61f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c61f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c61fc: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C61FCu;
    SET_GPR_U32(ctx, 31, 0x7C6204u);
    ctx->pc = 0x7C6200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C61FCu;
    // 0x7c6200: 0x24841740  addiu       $a0, $a0, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C61FCu, 0x7C6204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C6204u;
label_7c6204:
    // 0x7c6204: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x7c6204u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c6208: 0x16320019  bne         $s1, $s2, . + 4 + (0x19 << 2)
    ctx->pc = 0x7C6208u;
    {
        const bool branch_taken_0x7c6208 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x7C620Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6208u;
        // 0x7c620c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6208) {
            ctx->pc = 0x7C6270u;
            goto label_7c6270;
        }
    }
    ctx->pc = 0x7C6210u;
    // 0x7c6210: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x7c6210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c6214: 0xc1f1bee  jal         func_7C6FB8
    ctx->pc = 0x7C6214u;
    SET_GPR_U32(ctx, 31, 0x7C621Cu);
    ctx->pc = 0x7C6218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C6214u;
    // 0x7c6218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6FB8u, 0x7C6214u, 0x7C621Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C621Cu;
label_7c621c:
    // 0x7c621c: 0x1451000d  bne         $v0, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x7C621Cu;
    {
        const bool branch_taken_0x7c621c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x7C6220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C621Cu;
        // 0x7c6220: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c621c) {
            ctx->pc = 0x7C6254u;
            goto label_7c6254;
        }
    }
    ctx->pc = 0x7C6224u;
    // 0x7c6224: 0x8e0500f8  lw          $a1, 0xF8($s0)
    ctx->pc = 0x7c6224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x7c6228: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c6228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c622c: 0x8e0600fc  lw          $a2, 0xFC($s0)
    ctx->pc = 0x7c622cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x7c6230: 0xc1f1b58  jal         func_7C6D60
    ctx->pc = 0x7C6230u;
    SET_GPR_U32(ctx, 31, 0x7C6238u);
    ctx->pc = 0x7C6234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C6230u;
    // 0x7c6234: 0x3407b400  ori         $a3, $zero, 0xB400 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)46080);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6D60u, 0x7C6230u, 0x7C6238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C6238u;
label_7c6238:
    // 0x7c6238: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C6238u;
    {
        const bool branch_taken_0x7c6238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C623Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6238u;
        // 0x7c623c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6238) {
            ctx->pc = 0x7C6250u;
            goto label_7c6250;
        }
    }
    ctx->pc = 0x7C6240u;
label_7c6240:
    // 0x7c6240: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x7c6240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x7c6244: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x7c6244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x7c6248: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x7C6248u;
    {
        const bool branch_taken_0x7c6248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6248u;
        // 0x7c624c: 0xae0000f4  sw          $zero, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6248) {
            ctx->pc = 0x7C6278u;
            goto label_7c6278;
        }
    }
    ctx->pc = 0x7C6250u;
label_7c6250:
    // 0x7c6250: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x7c6250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_7c6254:
    // 0x7c6254: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x7c6254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x7c6258: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x7c6258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x7c625c: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x7c625cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
    // 0x7c6260: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x7c6260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x7c6264: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7C6264u;
    {
        const bool branch_taken_0x7c6264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C6268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6264u;
        // 0x7c6268: 0xae0000f4  sw          $zero, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6264) {
            ctx->pc = 0x7C6278u;
            goto label_7c6278;
        }
    }
    ctx->pc = 0x7C626Cu;
label_7c626c:
    // 0x7c626c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c626cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7c6270:
    // 0x7c6270: 0xc1f1ec8  jal         func_7C7B20
    ctx->pc = 0x7C6270u;
    SET_GPR_U32(ctx, 31, 0x7C6278u);
    ctx->pc = 0x7C6274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C6270u;
    // 0x7c6274: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7B20u, 0x7C6270u, 0x7C6278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C6278u;
label_7c6278:
    // 0x7c6278: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x7c6278u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7c627c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x7c627cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7c6280: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x7c6280u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7c6284: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7c6284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c6288: 0x3e00008  jr          $ra
    ctx->pc = 0x7C6288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6288u;
        // 0x7c628c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C6288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C6290u;
}
} // namespace gh_mcport
