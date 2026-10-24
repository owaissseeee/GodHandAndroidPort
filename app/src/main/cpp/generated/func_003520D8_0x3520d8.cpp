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

// Function: func_003520D8
// Address: 0x3520d8 - 0x352258
void func_003520D8_0x3520d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003520D8_0x3520d8");
#endif

    switch (ctx->pc) {
        case 0x352148u: goto label_352148;
        case 0x352180u: goto label_352180;
        case 0x352214u: goto label_352214;
        default: break;
    }

    ctx->pc = 0x3520d8u;

    // 0x3520d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3520d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3520dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3520dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3520e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3520e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3520e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3520e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3520e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3520e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3520ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3520ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3520f0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3520f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3520f4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3520f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3520f8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3520f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3520fc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3520fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x352100: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x352100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x352104: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x352104u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352108: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x352108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x35210c: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x35210cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352110: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x352110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x352114: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x352114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x352118: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x352118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x35211c: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x35211cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x352120: 0xde230150  ld          $v1, 0x150($s1)
    ctx->pc = 0x352120u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x352124: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x352124u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x352128: 0x3c160046  lui         $s6, 0x46
    ctx->pc = 0x352128u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)70 << 16));
    // 0x35212c: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x35212cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x352130: 0x8ed69920  lw          $s6, -0x66E0($s6)
    ctx->pc = 0x352130u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294940960)));
    // 0x352134: 0x4610009  bgez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x352134u;
    {
        const bool branch_taken_0x352134 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x352138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352134u;
        // 0x352138: 0x8e750014  lw          $s5, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352134) {
            ctx->pc = 0x35215Cu;
            goto label_35215c;
        }
    }
    ctx->pc = 0x35213Cu;
    // 0x35213c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x35213cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352140: 0xc0d4896  jal         func_352258
    ctx->pc = 0x352140u;
    SET_GPR_U32(ctx, 31, 0x352148u);
    ctx->pc = 0x352144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352140u;
    // 0x352144: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x352258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x352258u, 0x352140u, 0x352148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352148u;
label_352148:
    // 0x352148: 0xde430000  ld          $v1, 0x0($s2)
    ctx->pc = 0x352148u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x35214c: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x35214cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x352150: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x352150u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x352154: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x352154u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x352158: 0xfe230150  sd          $v1, 0x150($s1)
    ctx->pc = 0x352158u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 336), GPR_U64(ctx, 3));
label_35215c:
    // 0x35215c: 0xde420000  ld          $v0, 0x0($s2)
    ctx->pc = 0x35215cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x352160: 0x26140010  addiu       $s4, $s0, 0x10
    ctx->pc = 0x352160u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x352164: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x352164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352168: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x352168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35216c: 0x43882f  dsubu       $s1, $v0, $v1
    ctx->pc = 0x35216cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x352170: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x352170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x352174: 0x2a220000  slti        $v0, $s1, 0x0
    ctx->pc = 0x352174u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x352178: 0xc0e942d  jal         func_3A50B4
    ctx->pc = 0x352178u;
    SET_GPR_U32(ctx, 31, 0x352180u);
    ctx->pc = 0x35217Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352178u;
    // 0x35217c: 0x2880b  movn        $s1, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A50B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A50B4u, 0x352178u, 0x352180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352180u;
label_352180:
    // 0x352180: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x352180u;
    {
        const bool branch_taken_0x352180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x352184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352180u;
        // 0x352184: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352180) {
            ctx->pc = 0x3521C8u;
            goto label_3521c8;
        }
    }
    ctx->pc = 0x352188u;
    // 0x352188: 0xde430000  ld          $v1, 0x0($s2)
    ctx->pc = 0x352188u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x35218c: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x35218cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x352190: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x352190u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
    // 0x352194: 0xde420008  ld          $v0, 0x8($s2)
    ctx->pc = 0x352194u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x352198: 0xae150000  sw          $s5, 0x0($s0)
    ctx->pc = 0x352198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 21));
    // 0x35219c: 0xfe020018  sd          $v0, 0x18($s0)
    ctx->pc = 0x35219cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
    // 0x3521a0: 0x14850005  bne         $a0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3521A0u;
    {
        const bool branch_taken_0x3521a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x3521A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3521A0u;
        // 0x3521a4: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3521a0) {
            ctx->pc = 0x3521B8u;
            goto label_3521b8;
        }
    }
    ctx->pc = 0x3521A8u;
    // 0x3521a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3521a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3521ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3521ACu;
    {
        const bool branch_taken_0x3521ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3521B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3521ACu;
        // 0x3521b0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3521ac) {
            ctx->pc = 0x3521BCu;
            goto label_3521bc;
        }
    }
    ctx->pc = 0x3521B4u;
    // 0x3521b4: 0x0  nop
    ctx->pc = 0x3521b4u;
    // NOP
label_3521b8:
    // 0x3521b8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3521b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_3521bc:
    // 0x3521bc: 0xde420000  ld          $v0, 0x0($s2)
    ctx->pc = 0x3521bcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3521c0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3521C0u;
    {
        const bool branch_taken_0x3521c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3521C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3521C0u;
        // 0x3521c4: 0xffc20000  sd          $v0, 0x0($fp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3521c0) {
            ctx->pc = 0x352220u;
            goto label_352220;
        }
    }
    ctx->pc = 0x3521C8u;
label_3521c8:
    // 0x3521c8: 0x52e00009  beql        $s7, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3521C8u;
    {
        const bool branch_taken_0x3521c8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x3521c8) {
            ctx->pc = 0x3521CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3521C8u;
            // 0x3521cc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3521F0u;
            goto label_3521f0;
        }
    }
    ctx->pc = 0x3521D0u;
    // 0x3521d0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3521d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3521d4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3521d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3521d8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3521d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x3521dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3521dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3521e0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3521e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x3521e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3521e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3521e8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3521e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3521ec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3521ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3521f0:
    // 0x3521f0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3521f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3521f4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3521f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3521f8: 0x2a42023  subu        $a0, $s5, $a0
    ctx->pc = 0x3521f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x3521fc: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x3521fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x352200: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x352200u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x352204: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x352204u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x352208: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x352208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x35220c: 0xc0d4896  jal         func_352258
    ctx->pc = 0x35220Cu;
    SET_GPR_U32(ctx, 31, 0x352214u);
    ctx->pc = 0x352210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35220Cu;
    // 0x352210: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x352258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x352258u, 0x35220Cu, 0x352214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352214u;
label_352214:
    // 0x352214: 0x222882d  daddu       $s1, $s1, $v0
    ctx->pc = 0x352214u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
    // 0x352218: 0x2a220000  slti        $v0, $s1, 0x0
    ctx->pc = 0x352218u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x35221c: 0x2880b  movn        $s1, $zero, $v0
    ctx->pc = 0x35221cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_352220:
    // 0x352220: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x352220u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352224: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x352224u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x352228: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x352228u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35222c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35222cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x352230: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x352230u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x352234: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x352234u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x352238: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x352238u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35223c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x35223cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x352240: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x352240u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x352244: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x352244u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x352248: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x352248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35224c: 0x3e00008  jr          $ra
    ctx->pc = 0x35224Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x352250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35224Cu;
        // 0x352250: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35224Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x352254u;
    // 0x352254: 0x0  nop
    ctx->pc = 0x352254u;
    // NOP
    ctx->pc = 0x352258u;
}
