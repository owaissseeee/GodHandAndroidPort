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

// Function: func_003431D8
// Address: 0x3431d8 - 0x343340
void func_003431D8_0x3431d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003431D8_0x3431d8");
#endif

    switch (ctx->pc) {
        case 0x34321cu: goto label_34321c;
        case 0x3432a0u: goto label_3432a0;
        case 0x3432f0u: goto label_3432f0;
        case 0x3432fcu: goto label_3432fc;
        default: break;
    }

    ctx->pc = 0x3431d8u;

    // 0x3431d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3431d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3431dc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3431dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3431e0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3431e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3431e4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3431e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3431e8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x3431e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3431ec: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3431ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3431f0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3431f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3431f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3431f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3431f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3431f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3431fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3431fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x343200: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x343200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x343204: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x343204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x343208: 0x8cb10008  lw          $s1, 0x8($a1)
    ctx->pc = 0x343208u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x34320c: 0x8cb0000c  lw          $s0, 0xC($a1)
    ctx->pc = 0x34320cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x343210: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x343210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x343214: 0xc0d0b80  jal         func_342E00
    ctx->pc = 0x343214u;
    SET_GPR_U32(ctx, 31, 0x34321Cu);
    ctx->pc = 0x343218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343214u;
    // 0x343218: 0x8cb30010  lw          $s3, 0x10($a1) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342E00u, 0x343214u, 0x34321Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34321Cu;
label_34321c:
    // 0x34321c: 0x2626000f  addiu       $a2, $s1, 0xF
    ctx->pc = 0x34321cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 15));
    // 0x343220: 0x2a240000  slti        $a0, $s1, 0x0
    ctx->pc = 0x343220u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x343224: 0x2a030000  slti        $v1, $s0, 0x0
    ctx->pc = 0x343224u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x343228: 0x2605000f  addiu       $a1, $s0, 0xF
    ctx->pc = 0x343228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x34322c: 0xc4880b  movn        $s1, $a2, $a0
    ctx->pc = 0x34322cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 6));
    // 0x343230: 0xa3800b  movn        $s0, $a1, $v1
    ctx->pc = 0x343230u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
    // 0x343234: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x343234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x343238: 0x118903  sra         $s1, $s1, 4
    ctx->pc = 0x343238u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 4));
    // 0x34323c: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34323Cu;
    {
        const bool branch_taken_0x34323c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x343240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34323Cu;
        // 0x343240: 0x101903  sra         $v1, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34323c) {
            ctx->pc = 0x343250u;
            goto label_343250;
        }
    }
    ctx->pc = 0x343244u;
    // 0x343244: 0x2231018  mult        $v0, $s1, $v1
    ctx->pc = 0x343244u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x343248: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x343248u;
    {
        const bool branch_taken_0x343248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343248u;
        // 0x34324c: 0x21280  sll         $v0, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343248) {
            ctx->pc = 0x343260u;
            goto label_343260;
        }
    }
    ctx->pc = 0x343250u;
label_343250:
    // 0x343250: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x343250u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x343254: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x343254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x343258: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x343258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34325c: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x34325cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_343260:
    // 0x343260: 0x24520040  addiu       $s2, $v0, 0x40
    ctx->pc = 0x343260u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x343264: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x343264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x343268: 0x8c43c7d0  lw          $v1, -0x3830($v0)
    ctx->pc = 0x343268u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EC7D0u));
    // 0x34326c: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x34326Cu;
    {
        const bool branch_taken_0x34326c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x343270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34326Cu;
        // 0x343270: 0x26620002  addiu       $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34326c) {
            ctx->pc = 0x3432D8u;
            goto label_3432d8;
        }
    }
    ctx->pc = 0x343274u;
    // 0x343274: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x343274u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x343278: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x343278u;
    {
        const bool branch_taken_0x343278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x343278) {
            ctx->pc = 0x34327Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x343278u;
            // 0x34327c: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x343310u;
            goto label_343310;
        }
    }
    ctx->pc = 0x343280u;
    // 0x343280: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x343280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x343284: 0x8c62c7d4  lw          $v0, -0x382C($v1)
    ctx->pc = 0x343284u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EC7D4u));
    // 0x343288: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x343288u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x34328c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x34328Cu;
    {
        const bool branch_taken_0x34328c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x343290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34328Cu;
        // 0x343290: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34328c) {
            ctx->pc = 0x3432C0u;
            goto label_3432c0;
        }
    }
    ctx->pc = 0x343294u;
    // 0x343294: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x343294u;
    {
        const bool branch_taken_0x343294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343294u;
        // 0x343298: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343294) {
            ctx->pc = 0x343310u;
            goto label_343310;
        }
    }
    ctx->pc = 0x34329Cu;
    // 0x34329c: 0x0  nop
    ctx->pc = 0x34329cu;
    // NOP
label_3432a0:
    // 0x3432a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3432a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3432a4: 0x3c040076  lui         $a0, 0x76
    ctx->pc = 0x3432a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)118 << 16));
    // 0x3432a8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3432a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3432ac: 0x8c848a38  lw          $a0, -0x75C8($a0)
    ctx->pc = 0x3432acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294937144)));
    // 0x3432b0: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x3432b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x3432b4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3432b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3432b8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3432b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x3432bc: 0x64a00a  movz        $s4, $v1, $a0
    ctx->pc = 0x3432bcu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
label_3432c0:
    // 0x3432c0: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x3432c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x3432c4: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x3432C4u;
    {
        const bool branch_taken_0x3432c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3432c4) {
            ctx->pc = 0x3432C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3432C4u;
            // 0x3432c8: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3432A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3432a0;
        }
    }
    ctx->pc = 0x3432CCu;
    // 0x3432cc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3432CCu;
    {
        const bool branch_taken_0x3432cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3432D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3432CCu;
        // 0x3432d0: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3432cc) {
            ctx->pc = 0x343314u;
            goto label_343314;
        }
    }
    ctx->pc = 0x3432D4u;
    // 0x3432d4: 0x0  nop
    ctx->pc = 0x3432d4u;
    // NOP
label_3432d8:
    // 0x3432d8: 0x1a60000e  blez        $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x3432D8u;
    {
        const bool branch_taken_0x3432d8 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x3432DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3432D8u;
        // 0x3432dc: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3432d8) {
            ctx->pc = 0x343314u;
            goto label_343314;
        }
    }
    ctx->pc = 0x3432E0u;
    // 0x3432e0: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x3432e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3432e4: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x3432e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3432e8: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x3432e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3432ec: 0x0  nop
    ctx->pc = 0x3432ecu;
    // NOP
label_3432f0:
    // 0x3432f0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3432f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3432f4: 0xc0d115a  jal         func_344568
    ctx->pc = 0x3432F4u;
    SET_GPR_U32(ctx, 31, 0x3432FCu);
    ctx->pc = 0x3432F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3432F4u;
    // 0x3432f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344568u, 0x3432F4u, 0x3432FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3432FCu;
label_3432fc:
    // 0x3432fc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3432fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x343300: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x343300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x343304: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x343304u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x343308: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x343308u;
    {
        const bool branch_taken_0x343308 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x34330Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343308u;
        // 0x34330c: 0x262a00a  movz        $s4, $s3, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343308) {
            ctx->pc = 0x3432F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3432f0;
        }
    }
    ctx->pc = 0x343310u;
label_343310:
    // 0x343310: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x343310u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_343314:
    // 0x343314: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x343314u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343318: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x343318u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34331c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34331cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x343320: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x343320u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x343324: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x343324u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x343328: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x343328u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34332c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x34332cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x343330: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x343330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x343334: 0x3e00008  jr          $ra
    ctx->pc = 0x343334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343334u;
        // 0x343338: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34333Cu;
    // 0x34333c: 0x0  nop
    ctx->pc = 0x34333cu;
    // NOP
    ctx->pc = 0x343340u;
}
