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

// Function: func_003350F0
// Address: 0x3350f0 - 0x3351c0
void func_003350F0_0x3350f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003350F0_0x3350f0");
#endif

    switch (ctx->pc) {
        case 0x335138u: goto label_335138;
        case 0x335160u: goto label_335160;
        default: break;
    }

    ctx->pc = 0x3350f0u;

    // 0x3350f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3350f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3350f4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3350f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3350f8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x3350f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3350fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3350fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x335100: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x335100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335104: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x335104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x335108: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x335108u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33510c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x33510cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x335110: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x335110u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335114: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x335114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x335118: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x335118u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33511c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33511cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x335120: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x335120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x335124: 0x1a800018  blez        $s4, . + 4 + (0x18 << 2)
    ctx->pc = 0x335124u;
    {
        const bool branch_taken_0x335124 = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x335128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335124u;
        // 0x335128: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335124) {
            ctx->pc = 0x335188u;
            goto label_335188;
        }
    }
    ctx->pc = 0x33512Cu;
    // 0x33512c: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x33512cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x335130: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x335130u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335134: 0x2455a380  addiu       $s5, $v0, -0x5C80
    ctx->pc = 0x335134u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943616));
label_335138:
    // 0x335138: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x335138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x33513c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x33513cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335140: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x335140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x335144: 0x501818  mult        $v1, $v0, $s0
    ctx->pc = 0x335144u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x335148: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x335148u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x33514c: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x33514cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x335150: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x335150u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x335154: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x335154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x335158: 0xc0cd3bc  jal         func_334EF0
    ctx->pc = 0x335158u;
    SET_GPR_U32(ctx, 31, 0x335160u);
    ctx->pc = 0x33515Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335158u;
    // 0x33515c: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334EF0u, 0x335158u, 0x335160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335160u;
label_335160:
    // 0x335160: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x335160u;
    {
        const bool branch_taken_0x335160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x335164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335160u;
        // 0x335164: 0x214182a  slt         $v1, $s0, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x335160) {
            ctx->pc = 0x335180u;
            goto label_335180;
        }
    }
    ctx->pc = 0x335168u;
    // 0x335168: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x335168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x33516c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x33516cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x335170: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x335170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x335174: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x335174u;
    {
        const bool branch_taken_0x335174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335174u;
        // 0x335178: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335174) {
            ctx->pc = 0x335190u;
            goto label_335190;
        }
    }
    ctx->pc = 0x33517Cu;
    // 0x33517c: 0x0  nop
    ctx->pc = 0x33517cu;
    // NOP
label_335180:
    // 0x335180: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x335180u;
    {
        const bool branch_taken_0x335180 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x335184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335180u;
        // 0x335184: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335180) {
            ctx->pc = 0x335138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_335138;
        }
    }
    ctx->pc = 0x335188u;
label_335188:
    // 0x335188: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x335188u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x33518c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x33518cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_335190:
    // 0x335190: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x335190u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335194: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x335194u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x335198: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x335198u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33519c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x33519cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3351a0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3351a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3351a4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3351a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3351a8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3351a8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3351ac: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3351acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3351b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3351B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3351B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3351B0u;
        // 0x3351b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3351B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3351B8u;
    // 0x3351b8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3351b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3351bc: 0x0  nop
    ctx->pc = 0x3351bcu;
    // NOP
    ctx->pc = 0x3351c0u;
}
