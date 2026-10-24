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

// Function: UpdatePhaseThenCalcPartsB
// Address: 0x1788a0 - 0x178978
void UpdatePhaseThenCalcPartsB_0x1788a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdatePhaseThenCalcPartsB_0x1788a0");
#endif

    switch (ctx->pc) {
        case 0x1788a0u: goto label_1788a0;
        case 0x1788a4u: goto label_1788a4;
        case 0x1788a8u: goto label_1788a8;
        case 0x1788acu: goto label_1788ac;
        case 0x1788b0u: goto label_1788b0;
        case 0x1788b4u: goto label_1788b4;
        case 0x1788b8u: goto label_1788b8;
        case 0x1788bcu: goto label_1788bc;
        case 0x1788c0u: goto label_1788c0;
        case 0x1788c4u: goto label_1788c4;
        case 0x1788c8u: goto label_1788c8;
        case 0x1788ccu: goto label_1788cc;
        case 0x1788d0u: goto label_1788d0;
        case 0x1788d4u: goto label_1788d4;
        case 0x1788d8u: goto label_1788d8;
        case 0x1788dcu: goto label_1788dc;
        case 0x1788e0u: goto label_1788e0;
        case 0x1788e4u: goto label_1788e4;
        case 0x1788e8u: goto label_1788e8;
        case 0x1788ecu: goto label_1788ec;
        case 0x1788f0u: goto label_1788f0;
        case 0x1788f4u: goto label_1788f4;
        case 0x1788f8u: goto label_1788f8;
        case 0x1788fcu: goto label_1788fc;
        case 0x178900u: goto label_178900;
        case 0x178904u: goto label_178904;
        case 0x178908u: goto label_178908;
        case 0x17890cu: goto label_17890c;
        case 0x178910u: goto label_178910;
        case 0x178914u: goto label_178914;
        case 0x178918u: goto label_178918;
        case 0x17891cu: goto label_17891c;
        case 0x178920u: goto label_178920;
        case 0x178924u: goto label_178924;
        case 0x178928u: goto label_178928;
        case 0x17892cu: goto label_17892c;
        case 0x178930u: goto label_178930;
        case 0x178934u: goto label_178934;
        case 0x178938u: goto label_178938;
        case 0x17893cu: goto label_17893c;
        case 0x178940u: goto label_178940;
        case 0x178944u: goto label_178944;
        case 0x178948u: goto label_178948;
        case 0x17894cu: goto label_17894c;
        case 0x178950u: goto label_178950;
        case 0x178954u: goto label_178954;
        case 0x178958u: goto label_178958;
        case 0x17895cu: goto label_17895c;
        case 0x178960u: goto label_178960;
        case 0x178964u: goto label_178964;
        case 0x178968u: goto label_178968;
        case 0x17896cu: goto label_17896c;
        case 0x178970u: goto label_178970;
        case 0x178974u: goto label_178974;
        default: break;
    }

    ctx->pc = 0x1788a0u;

label_1788a0:
    // 0x1788a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1788a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1788a4:
    // 0x1788a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1788a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1788a8:
    // 0x1788a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1788a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1788ac:
    // 0x1788ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1788acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1788b0:
    // 0x1788b0: 0xc06ddac  jal         func_1B76B0
label_1788b4:
    if (ctx->pc == 0x1788B4u) {
        ctx->pc = 0x1788B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1788B0u;
        // 0x1788b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1788B8u;
        goto label_1788b8;
    }
    ctx->pc = 0x1788B0u;
    SET_GPR_U32(ctx, 31, 0x1788B8u);
    ctx->pc = 0x1788B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1788B0u;
    // 0x1788b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x1788B0u, 0x1788B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1788B8u;
label_1788b8:
    // 0x1788b8: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_1788bc:
    if (ctx->pc == 0x1788BCu) {
        ctx->pc = 0x1788BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1788B8u;
        // 0x1788bc: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1788C0u;
        goto label_1788c0;
    }
    ctx->pc = 0x1788B8u;
    {
        const bool branch_taken_0x1788b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1788BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1788B8u;
        // 0x1788bc: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1788b8) {
            ctx->pc = 0x178964u;
            goto label_178964;
        }
    }
    ctx->pc = 0x1788C0u;
label_1788c0:
    // 0x1788c0: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x1788c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1788c4:
    // 0x1788c4: 0x2446da08  addiu       $a2, $v0, -0x25F8
    ctx->pc = 0x1788c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957576));
label_1788c8:
    // 0x1788c8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1788c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1788cc:
    // 0x1788cc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1788ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1788d0:
    // 0x1788d0: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x1788d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1788d4:
    // 0x1788d4: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x1788d4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1788d8:
    // 0x1788d8: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_1788dc:
    if (ctx->pc == 0x1788DCu) {
        ctx->pc = 0x1788DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1788D8u;
        // 0x1788dc: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1788E0u;
        goto label_1788e0;
    }
    ctx->pc = 0x1788D8u;
    {
        const bool branch_taken_0x1788d8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1788DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1788D8u;
        // 0x1788dc: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1788d8) {
            ctx->pc = 0x178904u;
            goto label_178904;
        }
    }
    ctx->pc = 0x1788E0u;
label_1788e0:
    // 0x1788e0: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x1788e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1788e4:
    // 0x1788e4: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1788e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1788e8:
    // 0x1788e8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1788e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1788ec:
    // 0x1788ec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1788ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1788f0:
    // 0x1788f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1788f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1788f4:
    // 0x1788f4: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x1788f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_1788f8:
    // 0x1788f8: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x1788f8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_1788fc:
    // 0x1788fc: 0x10000004  b           . + 4 + (0x4 << 2)
label_178900:
    if (ctx->pc == 0x178900u) {
        ctx->pc = 0x178900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1788FCu;
        // 0x178900: 0x2503da08  addiu       $v1, $t0, -0x25F8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178904u;
        goto label_178904;
    }
    ctx->pc = 0x1788FCu;
    {
        const bool branch_taken_0x1788fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1788FCu;
        // 0x178900: 0x2503da08  addiu       $v1, $t0, -0x25F8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1788fc) {
            ctx->pc = 0x178910u;
            goto label_178910;
        }
    }
    ctx->pc = 0x178904u;
label_178904:
    // 0x178904: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x178904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_178908:
    // 0x178908: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x178908u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_17890c:
    // 0x17890c: 0x2503da08  addiu       $v1, $t0, -0x25F8
    ctx->pc = 0x17890cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957576));
label_178910:
    // 0x178910: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x178910u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_178914:
    // 0x178914: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x178914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_178918:
    // 0x178918: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_17891c:
    if (ctx->pc == 0x17891Cu) {
        ctx->pc = 0x17891Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178918u;
        // 0x17891c: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178920u;
        goto label_178920;
    }
    ctx->pc = 0x178918u;
    {
        const bool branch_taken_0x178918 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x17891Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178918u;
        // 0x17891c: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178918) {
            ctx->pc = 0x178934u;
            goto label_178934;
        }
    }
    ctx->pc = 0x178920u;
label_178920:
    // 0x178920: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x178920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_178924:
    // 0x178924: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x178924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_178928:
    // 0x178928: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x178928u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_17892c:
    // 0x17892c: 0x10000002  b           . + 4 + (0x2 << 2)
label_178930:
    if (ctx->pc == 0x178930u) {
        ctx->pc = 0x178930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17892Cu;
        // 0x178930: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178934u;
        goto label_178934;
    }
    ctx->pc = 0x17892Cu;
    {
        const bool branch_taken_0x17892c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17892Cu;
        // 0x178930: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17892c) {
            ctx->pc = 0x178938u;
            goto label_178938;
        }
    }
    ctx->pc = 0x178934u;
label_178934:
    // 0x178934: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x178934u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_178938:
    // 0x178938: 0xc0f809  jalr        $a2
label_17893c:
    if (ctx->pc == 0x17893Cu) {
        ctx->pc = 0x17893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178938u;
        // 0x17893c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178940u;
        goto label_178940;
    }
    ctx->pc = 0x178938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x178940u);
        ctx->pc = 0x17893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178938u;
        // 0x17893c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178938u, 0x178940u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x178940u;
label_178940:
    // 0x178940: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x178940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_178944:
    // 0x178944: 0xc0aa1fa  jal         func_2A87E8
label_178948:
    if (ctx->pc == 0x178948u) {
        ctx->pc = 0x178948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178944u;
        // 0x178948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17894Cu;
        goto label_17894c;
    }
    ctx->pc = 0x178944u;
    SET_GPR_U32(ctx, 31, 0x17894Cu);
    ctx->pc = 0x178948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178944u;
    // 0x178948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x178944u, 0x17894Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17894Cu;
label_17894c:
    // 0x17894c: 0xc06ddb6  jal         func_1B76D8
label_178950:
    if (ctx->pc == 0x178950u) {
        ctx->pc = 0x178950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17894Cu;
        // 0x178950: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178954u;
        goto label_178954;
    }
    ctx->pc = 0x17894Cu;
    SET_GPR_U32(ctx, 31, 0x178954u);
    ctx->pc = 0x178950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17894Cu;
    // 0x178950: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x17894Cu, 0x178954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178954u;
label_178954:
    // 0x178954: 0xc0527ae  jal         func_149EB8
label_178958:
    if (ctx->pc == 0x178958u) {
        ctx->pc = 0x178958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178954u;
        // 0x178958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17895Cu;
        goto label_17895c;
    }
    ctx->pc = 0x178954u;
    SET_GPR_U32(ctx, 31, 0x17895Cu);
    ctx->pc = 0x178958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178954u;
    // 0x178958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x178954u, 0x17895Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17895Cu;
label_17895c:
    // 0x17895c: 0xc05280e  jal         func_14A038
label_178960:
    if (ctx->pc == 0x178960u) {
        ctx->pc = 0x178960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17895Cu;
        // 0x178960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178964u;
        goto label_178964;
    }
    ctx->pc = 0x17895Cu;
    SET_GPR_U32(ctx, 31, 0x178964u);
    ctx->pc = 0x178960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17895Cu;
    // 0x178960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A038u, 0x17895Cu, 0x178964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178964u;
label_178964:
    // 0x178964: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x178964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_178968:
    // 0x178968: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x178968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17896c:
    // 0x17896c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17896cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_178970:
    // 0x178970: 0x3e00008  jr          $ra
label_178974:
    if (ctx->pc == 0x178974u) {
        ctx->pc = 0x178974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178970u;
        // 0x178974: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178978u;
        goto label_fallthrough_0x178970;
    }
    ctx->pc = 0x178970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178970u;
        // 0x178974: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x178970:
    ctx->pc = 0x178978u;
}
