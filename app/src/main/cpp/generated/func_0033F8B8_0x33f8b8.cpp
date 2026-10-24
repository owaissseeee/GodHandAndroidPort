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

// Function: func_0033F8B8
// Address: 0x33f8b8 - 0x33f988
void func_0033F8B8_0x33f8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033F8B8_0x33f8b8");
#endif

    switch (ctx->pc) {
        case 0x33f8e0u: goto label_33f8e0;
        case 0x33f934u: goto label_33f934;
        case 0x33f95cu: goto label_33f95c;
        case 0x33f96cu: goto label_33f96c;
        default: break;
    }

    ctx->pc = 0x33f8b8u;

    // 0x33f8b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33f8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33f8bc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x33f8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x33f8c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33f8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33f8c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33f8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33f8c8: 0x2483b858  addiu       $v1, $a0, -0x47A8
    ctx->pc = 0x33f8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948952));
    // 0x33f8cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33f8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33f8d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33f8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EB858u));
    // 0x33f8d4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x33F8D4u;
    {
        const bool branch_taken_0x33f8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F8D4u;
        // 0x33f8d8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f8d4) {
            ctx->pc = 0x33F904u;
            goto label_33f904;
        }
    }
    ctx->pc = 0x33F8DCu;
    // 0x33f8dc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x33f8dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_33f8e0:
    // 0x33f8e0: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x33f8e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x33f8e4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x33F8E4u;
    {
        const bool branch_taken_0x33f8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F8E4u;
        // 0x33f8e8: 0x2463003c  addiu       $v1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f8e4) {
            ctx->pc = 0x33F904u;
            goto label_33f904;
        }
    }
    ctx->pc = 0x33F8ECu;
    // 0x33f8ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33f8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33f8f0: 0x0  nop
    ctx->pc = 0x33f8f0u;
    // NOP
    // 0x33f8f4: 0x0  nop
    ctx->pc = 0x33f8f4u;
    // NOP
    // 0x33f8f8: 0x0  nop
    ctx->pc = 0x33f8f8u;
    // NOP
    // 0x33f8fc: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x33F8FCu;
    {
        const bool branch_taken_0x33f8fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33f8fc) {
            ctx->pc = 0x33F900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33F8FCu;
            // 0x33f900: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33F8E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33f8e0;
        }
    }
    ctx->pc = 0x33F904u;
label_33f904:
    // 0x33f904: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x33f904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33f908: 0x12230019  beq         $s1, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x33F908u;
    {
        const bool branch_taken_0x33f908 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x33F90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F908u;
        // 0x33f90c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f908) {
            ctx->pc = 0x33F970u;
            goto label_33f970;
        }
    }
    ctx->pc = 0x33F910u;
    // 0x33f910: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x33f910u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x33f914: 0x2482b858  addiu       $v0, $a0, -0x47A8
    ctx->pc = 0x33f914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948952));
    // 0x33f918: 0x2118023  subu        $s0, $s0, $s1
    ctx->pc = 0x33f918u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x33f91c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33f91cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f920: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x33f920u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x33f924: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x33f924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x33f928: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x33f928u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x33f92c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x33F92Cu;
    SET_GPR_U32(ctx, 31, 0x33F934u);
    ctx->pc = 0x33F930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F92Cu;
    // 0x33f930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x33F92Cu, 0x33F934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F934u;
label_33f934:
    // 0x33f934: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33f934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33f938: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x33f938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x33f93c: 0x240401f4  addiu       $a0, $zero, 0x1F4
    ctx->pc = 0x33f93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x33f940: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x33f940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x33f944: 0x3405ac44  ori         $a1, $zero, 0xAC44
    ctx->pc = 0x33f944u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44100);
    // 0x33f948: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x33f948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x33f94c: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x33f94cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x33f950: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x33f950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x33f954: 0xc0cf9ae  jal         func_33E6B8
    ctx->pc = 0x33F954u;
    SET_GPR_U32(ctx, 31, 0x33F95Cu);
    ctx->pc = 0x33F958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F954u;
    // 0x33f958: 0x26070032  addiu       $a3, $s0, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6B8u, 0x33F954u, 0x33F95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F95Cu;
label_33f95c:
    // 0x33f95c: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x33f95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x33f960: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33f960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f964: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x33F964u;
    SET_GPR_U32(ctx, 31, 0x33F96Cu);
    ctx->pc = 0x33F968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F964u;
    // 0x33f968: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x33F964u, 0x33F96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F96Cu;
label_33f96c:
    // 0x33f96c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x33f96cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33f970:
    // 0x33f970: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33f970u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33f974: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33f974u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33f978: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33f978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33f97c: 0x3e00008  jr          $ra
    ctx->pc = 0x33F97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F97Cu;
        // 0x33f980: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F97Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F984u;
    // 0x33f984: 0x0  nop
    ctx->pc = 0x33f984u;
    // NOP
    ctx->pc = 0x33f988u;
}
