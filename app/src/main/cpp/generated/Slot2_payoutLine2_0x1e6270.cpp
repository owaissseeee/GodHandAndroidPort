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

// Function: Slot2_payoutLine2
// Address: 0x1e6270 - 0x1e6498
void Slot2_payoutLine2_0x1e6270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slot2_payoutLine2_0x1e6270");
#endif

    switch (ctx->pc) {
        case 0x1e62e8u: goto label_1e62e8;
        case 0x1e62f8u: goto label_1e62f8;
        case 0x1e6308u: goto label_1e6308;
        case 0x1e6358u: goto label_1e6358;
        case 0x1e638cu: goto label_1e638c;
        case 0x1e63a8u: goto label_1e63a8;
        case 0x1e63d4u: goto label_1e63d4;
        case 0x1e6408u: goto label_1e6408;
        case 0x1e6424u: goto label_1e6424;
        case 0x1e6434u: goto label_1e6434;
        case 0x1e6444u: goto label_1e6444;
        case 0x1e6460u: goto label_1e6460;
        default: break;
    }

    ctx->pc = 0x1e6270u;

    // 0x1e6270: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e6270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e6274: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e6278: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e6278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1e627c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1e627cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1e6280: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e6280u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6284: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e6284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e6288: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e6288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e628c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1e628cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e6290: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1E6290u;
    {
        const bool branch_taken_0x1e6290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E6294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6290u;
        // 0x1e6294: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6290) {
            ctx->pc = 0x1E6318u;
            goto label_1e6318;
        }
    }
    ctx->pc = 0x1E6298u;
    // 0x1e6298: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E6298u;
    {
        const bool branch_taken_0x1e6298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6298) {
            ctx->pc = 0x1E629Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E6298u;
            // 0x1e629c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E62B0u;
            goto label_1e62b0;
        }
    }
    ctx->pc = 0x1E62A0u;
    // 0x1e62a0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E62A0u;
    {
        const bool branch_taken_0x1e62a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E62A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E62A0u;
        // 0x1e62a4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e62a0) {
            ctx->pc = 0x1E62C8u;
            goto label_1e62c8;
        }
    }
    ctx->pc = 0x1E62A8u;
    // 0x1e62a8: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x1E62A8u;
    {
        const bool branch_taken_0x1e62a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E62ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E62A8u;
        // 0x1e62ac: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e62a8) {
            ctx->pc = 0x1E6484u;
            goto label_1e6484;
        }
    }
    ctx->pc = 0x1E62B0u;
label_1e62b0:
    // 0x1e62b0: 0x10620042  beq         $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1E62B0u;
    {
        const bool branch_taken_0x1e62b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E62B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E62B0u;
        // 0x1e62b4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e62b0) {
            ctx->pc = 0x1E63BCu;
            goto label_1e63bc;
        }
    }
    ctx->pc = 0x1E62B8u;
    // 0x1e62b8: 0x1062006d  beq         $v1, $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x1E62B8u;
    {
        const bool branch_taken_0x1e62b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E62BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E62B8u;
        // 0x1e62bc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e62b8) {
            ctx->pc = 0x1E6470u;
            goto label_1e6470;
        }
    }
    ctx->pc = 0x1E62C0u;
    // 0x1e62c0: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x1E62C0u;
    {
        const bool branch_taken_0x1e62c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E62C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E62C0u;
        // 0x1e62c4: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e62c0) {
            ctx->pc = 0x1E6484u;
            goto label_1e6484;
        }
    }
    ctx->pc = 0x1E62C8u;
label_1e62c8:
    // 0x1e62c8: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1e62c8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1e62cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e62ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e62d0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1e62d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e62d4: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x1e62d4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x1e62d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e62d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e62dc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e62dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e62e0: 0xc0c194a  jal         func_306528
    ctx->pc = 0x1E62E0u;
    SET_GPR_U32(ctx, 31, 0x1E62E8u);
    ctx->pc = 0x1E62E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E62E0u;
    // 0x1e62e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1E62E0u, 0x1E62E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E62E8u;
label_1e62e8:
    // 0x1e62e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e62e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e62ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e62ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e62f0: 0xc079bb6  jal         func_1E6ED8
    ctx->pc = 0x1E62F0u;
    SET_GPR_U32(ctx, 31, 0x1E62F8u);
    ctx->pc = 0x1E62F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E62F0u;
    // 0x1e62f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6ED8u, 0x1E62F0u, 0x1E62F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E62F8u;
label_1e62f8:
    // 0x1e62f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e62f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e62fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e62fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e6300: 0xc079b20  jal         func_1E6C80
    ctx->pc = 0x1E6300u;
    SET_GPR_U32(ctx, 31, 0x1E6308u);
    ctx->pc = 0x1E6304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6300u;
    // 0x1e6304: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6C80u, 0x1E6300u, 0x1E6308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6308u;
label_1e6308:
    // 0x1e6308: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1e6308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e630c: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1e630cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1e6310: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x1E6310u;
    {
        const bool branch_taken_0x1e6310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6310u;
        // 0x1e6314: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6310) {
            ctx->pc = 0x1E6448u;
            goto label_1e6448;
        }
    }
    ctx->pc = 0x1E6318u;
label_1e6318:
    // 0x1e6318: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1e6318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1e631c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E631Cu;
    {
        const bool branch_taken_0x1e631c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E631Cu;
        // 0x1e6320: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e631c) {
            ctx->pc = 0x1E6330u;
            goto label_1e6330;
        }
    }
    ctx->pc = 0x1E6324u;
    // 0x1e6324: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e6324u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6328: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E6328u;
    {
        const bool branch_taken_0x1e6328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6328u;
        // 0x1e632c: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6328) {
            ctx->pc = 0x1E6334u;
            goto label_1e6334;
        }
    }
    ctx->pc = 0x1E6330u;
label_1e6330:
    // 0x1e6330: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e6330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e6334:
    // 0x1e6334: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e6334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e6338: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x1E6338u;
    {
        const bool branch_taken_0x1e6338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6338u;
        // 0x1e633c: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6338) {
            ctx->pc = 0x1E647Cu;
            goto label_1e647c;
        }
    }
    ctx->pc = 0x1E6340u;
    // 0x1e6340: 0x24050033  addiu       $a1, $zero, 0x33
    ctx->pc = 0x1e6340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x1e6344: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x1e6344u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x1e6348: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e6348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e634c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e634cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6350: 0xc0b4584  jal         func_2D1610
    ctx->pc = 0x1E6350u;
    SET_GPR_U32(ctx, 31, 0x1E6358u);
    ctx->pc = 0x1E6354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6350u;
    // 0x1e6354: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1610u, 0x1E6350u, 0x1E6358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6358u;
label_1e6358:
    // 0x1e6358: 0x8e230370  lw          $v1, 0x370($s1)
    ctx->pc = 0x1e6358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 880)));
    // 0x1e635c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1e635cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1e6360: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x1e6360u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x1e6364: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x1e6364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1e6368: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1e6368u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1e636c: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E636Cu;
    {
        const bool branch_taken_0x1e636c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e636c) {
            ctx->pc = 0x1E6370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E636Cu;
            // 0x1e6370: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E6374u;
            goto label_1e6374;
        }
    }
    ctx->pc = 0x1E6374u;
label_1e6374:
    // 0x1e6374: 0x1812  mflo        $v1
    ctx->pc = 0x1e6374u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1e6378: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x1e6378u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x1e637c: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1e637cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1e6380: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e6380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6384: 0xc07a392  jal         func_1E8E48
    ctx->pc = 0x1E6384u;
    SET_GPR_U32(ctx, 31, 0x1E638Cu);
    ctx->pc = 0x1E6388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6384u;
    // 0x1e6388: 0x26240058  addiu       $a0, $s1, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8E48u, 0x1E6384u, 0x1E638Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E638Cu;
label_1e638c:
    // 0x1e638c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e638cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6390: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e6390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e6394: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1e6394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e6398: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1e6398u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e639c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e639cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e63a0: 0xc0b2e5a  jal         func_2CB968
    ctx->pc = 0x1E63A0u;
    SET_GPR_U32(ctx, 31, 0x1E63A8u);
    ctx->pc = 0x1E63A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E63A0u;
    // 0x1e63a4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x1E63A0u, 0x1E63A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E63A8u;
label_1e63a8:
    // 0x1e63a8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1e63a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e63ac: 0xae2203f0  sw          $v0, 0x3F0($s1)
    ctx->pc = 0x1e63acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1008), GPR_U32(ctx, 2));
    // 0x1e63b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e63b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e63b4: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1E63B4u;
    {
        const bool branch_taken_0x1e63b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E63B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E63B4u;
        // 0x1e63b8: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e63b4) {
            ctx->pc = 0x1E647Cu;
            goto label_1e647c;
        }
    }
    ctx->pc = 0x1E63BCu;
label_1e63bc:
    // 0x1e63bc: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1e63bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1e63c0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E63C0u;
    {
        const bool branch_taken_0x1e63c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E63C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E63C0u;
        // 0x1e63c4: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e63c0) {
            ctx->pc = 0x1E63F8u;
            goto label_1e63f8;
        }
    }
    ctx->pc = 0x1E63C8u;
    // 0x1e63c8: 0x26129b70  addiu       $s2, $s0, -0x6490
    ctx->pc = 0x1e63c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x1e63cc: 0xc07ea38  jal         func_1FA8E0
    ctx->pc = 0x1E63CCu;
    SET_GPR_U32(ctx, 31, 0x1E63D4u);
    ctx->pc = 0x1E63D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E63CCu;
    // 0x1e63d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA8E0u, 0x1E63CCu, 0x1E63D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E63D4u;
label_1e63d4:
    // 0x1e63d4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E63D4u;
    {
        const bool branch_taken_0x1e63d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e63d4) {
            ctx->pc = 0x1E63D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E63D4u;
            // 0x1e63d8: 0x8e2503f0  lw          $a1, 0x3F0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1008)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E63FCu;
            goto label_1e63fc;
        }
    }
    ctx->pc = 0x1E63DCu;
    // 0x1e63dc: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1e63dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1e63e0: 0x3404f000  ori         $a0, $zero, 0xF000
    ctx->pc = 0x1e63e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x1e63e4: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x1e63e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
    // 0x1e63e8: 0xdc437650  ld          $v1, 0x7650($v0)
    ctx->pc = 0x1e63e8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 30288)));
    // 0x1e63ec: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1e63ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1e63f0: 0x50600018  beql        $v1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1E63F0u;
    {
        const bool branch_taken_0x1e63f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e63f0) {
            ctx->pc = 0x1E63F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E63F0u;
            // 0x1e63f4: 0x8e250028  lw          $a1, 0x28($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E6454u;
            goto label_1e6454;
        }
    }
    ctx->pc = 0x1E63F8u;
label_1e63f8:
    // 0x1e63f8: 0x8e2503f0  lw          $a1, 0x3F0($s1)
    ctx->pc = 0x1e63f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1008)));
label_1e63fc:
    // 0x1e63fc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1e63fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1e6400: 0xc0b2ee8  jal         func_2CBBA0
    ctx->pc = 0x1E6400u;
    SET_GPR_U32(ctx, 31, 0x1E6408u);
    ctx->pc = 0x1E6404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6400u;
    // 0x1e6404: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x1E6400u, 0x1E6408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6408u;
label_1e6408:
    // 0x1e6408: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x1e6408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1e640c: 0x26049b70  addiu       $a0, $s0, -0x6490
    ctx->pc = 0x1e640cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x1e6410: 0x8e25002c  lw          $a1, 0x2C($s1)
    ctx->pc = 0x1e6410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1e6414: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x1e6414u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1e6418: 0x2812  mflo        $a1
    ctx->pc = 0x1e6418u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1e641c: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1E641Cu;
    SET_GPR_U32(ctx, 31, 0x1E6424u);
    ctx->pc = 0x1E6420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E641Cu;
    // 0x1e6420: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1E641Cu, 0x1E6424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6424u;
label_1e6424:
    // 0x1e6424: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e6424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6428: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e6428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e642c: 0xc079bb6  jal         func_1E6ED8
    ctx->pc = 0x1E642Cu;
    SET_GPR_U32(ctx, 31, 0x1E6434u);
    ctx->pc = 0x1E6430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E642Cu;
    // 0x1e6430: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6ED8u, 0x1E642Cu, 0x1E6434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6434u;
label_1e6434:
    // 0x1e6434: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e6434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6438: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e6438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e643c: 0xc079b20  jal         func_1E6C80
    ctx->pc = 0x1E643Cu;
    SET_GPR_U32(ctx, 31, 0x1E6444u);
    ctx->pc = 0x1E6440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E643Cu;
    // 0x1e6440: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6C80u, 0x1E643Cu, 0x1E6444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6444u;
label_1e6444:
    // 0x1e6444: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1e6444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1e6448:
    // 0x1e6448: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e6448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e644c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1E644Cu;
    {
        const bool branch_taken_0x1e644c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E644Cu;
        // 0x1e6450: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e644c) {
            ctx->pc = 0x1E647Cu;
            goto label_1e647c;
        }
    }
    ctx->pc = 0x1E6454u;
label_1e6454:
    // 0x1e6454: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e6454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6458: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1E6458u;
    SET_GPR_U32(ctx, 31, 0x1E6460u);
    ctx->pc = 0x1E645Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6458u;
    // 0x1e645c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1E6458u, 0x1E6460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6460u;
label_1e6460:
    // 0x1e6460: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1e6460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1e6464: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e6464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e6468: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E6468u;
    {
        const bool branch_taken_0x1e6468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E646Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6468u;
        // 0x1e646c: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6468) {
            ctx->pc = 0x1E647Cu;
            goto label_1e647c;
        }
    }
    ctx->pc = 0x1E6470u;
label_1e6470:
    // 0x1e6470: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1e6470u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1e6474: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1e6474u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1e6478: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1e6478u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_1e647c:
    // 0x1e647c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1e647cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e6480: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1e6480u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e6484:
    // 0x1e6484: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e6484u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e6488: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e6488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e648c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E648Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E648Cu;
        // 0x1e6490: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E648Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6494u;
    // 0x1e6494: 0x0  nop
    ctx->pc = 0x1e6494u;
    // NOP
    ctx->pc = 0x1e6498u;
}
