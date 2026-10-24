#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r020_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r020
{
// Function: __do_global_ctors
// Address: 0x79c970 - 0x79ca20
void ps2___do_global_ctors_0x79c970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x79c970");
#endif

    switch (ctx->pc) {
        case 0x79c970u: goto label_79c970;
        case 0x79c974u: goto label_79c974;
        case 0x79c978u: goto label_79c978;
        case 0x79c97cu: goto label_79c97c;
        case 0x79c980u: goto label_79c980;
        case 0x79c984u: goto label_79c984;
        case 0x79c988u: goto label_79c988;
        case 0x79c98cu: goto label_79c98c;
        case 0x79c990u: goto label_79c990;
        case 0x79c994u: goto label_79c994;
        case 0x79c998u: goto label_79c998;
        case 0x79c99cu: goto label_79c99c;
        case 0x79c9a0u: goto label_79c9a0;
        case 0x79c9a4u: goto label_79c9a4;
        case 0x79c9a8u: goto label_79c9a8;
        case 0x79c9acu: goto label_79c9ac;
        case 0x79c9b0u: goto label_79c9b0;
        case 0x79c9b4u: goto label_79c9b4;
        case 0x79c9b8u: goto label_79c9b8;
        case 0x79c9bcu: goto label_79c9bc;
        case 0x79c9c0u: goto label_79c9c0;
        case 0x79c9c4u: goto label_79c9c4;
        case 0x79c9c8u: goto label_79c9c8;
        case 0x79c9ccu: goto label_79c9cc;
        case 0x79c9d0u: goto label_79c9d0;
        case 0x79c9d4u: goto label_79c9d4;
        case 0x79c9d8u: goto label_79c9d8;
        case 0x79c9dcu: goto label_79c9dc;
        case 0x79c9e0u: goto label_79c9e0;
        case 0x79c9e4u: goto label_79c9e4;
        case 0x79c9e8u: goto label_79c9e8;
        case 0x79c9ecu: goto label_79c9ec;
        case 0x79c9f0u: goto label_79c9f0;
        case 0x79c9f4u: goto label_79c9f4;
        case 0x79c9f8u: goto label_79c9f8;
        case 0x79c9fcu: goto label_79c9fc;
        case 0x79ca00u: goto label_79ca00;
        case 0x79ca04u: goto label_79ca04;
        case 0x79ca08u: goto label_79ca08;
        case 0x79ca0cu: goto label_79ca0c;
        case 0x79ca10u: goto label_79ca10;
        case 0x79ca14u: goto label_79ca14;
        case 0x79ca18u: goto label_79ca18;
        case 0x79ca1cu: goto label_79ca1c;
        default: break;
    }

    ctx->pc = 0x79c970u;

label_79c970:
    // 0x79c970: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79c970u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_79c974:
    // 0x79c974: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79c974u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_79c978:
    // 0x79c978: 0x8ce5ce00  lw          $a1, -0x3200($a3)
    ctx->pc = 0x79c978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294954496)));
label_79c97c:
    // 0x79c97c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79c97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79c980:
    // 0x79c980: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79c980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_79c984:
    // 0x79c984: 0x24e3ce00  addiu       $v1, $a3, -0x3200
    ctx->pc = 0x79c984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954496));
label_79c988:
    // 0x79c988: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x79c988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_79c98c:
    // 0x79c98c: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_79c990:
    if (ctx->pc == 0x79C990u) {
        ctx->pc = 0x79C990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C98Cu;
        // 0x79c990: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C994u;
        goto label_79c994;
    }
    ctx->pc = 0x79C98Cu;
    {
        const bool branch_taken_0x79c98c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x79C990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C98Cu;
        // 0x79c990: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c98c) {
            ctx->pc = 0x79C9D4u;
            goto label_79c9d4;
        }
    }
    ctx->pc = 0x79C994u;
label_79c994:
    // 0x79c994: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79c994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_79c998:
    // 0x79c998: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_79c99c:
    if (ctx->pc == 0x79C99Cu) {
        ctx->pc = 0x79C99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C998u;
        // 0x79c99c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C9A0u;
        goto label_79c9a0;
    }
    ctx->pc = 0x79C998u;
    {
        const bool branch_taken_0x79c998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C998u;
        // 0x79c99c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c998) {
            ctx->pc = 0x79C9D4u;
            goto label_79c9d4;
        }
    }
    ctx->pc = 0x79C9A0u;
label_79c9a0:
    // 0x79c9a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79c9a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79c9a4:
    // 0x79c9a4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x79c9a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_79c9a8:
    // 0x79c9a8: 0x24e4ce00  addiu       $a0, $a3, -0x3200
    ctx->pc = 0x79c9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954496));
label_79c9ac:
    // 0x79c9ac: 0x0  nop
    ctx->pc = 0x79c9acu;
    // NOP
label_79c9b0:
    // 0x79c9b0: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x79c9b0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_79c9b4:
    // 0x79c9b4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79c9b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_79c9b8:
    // 0x79c9b8: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x79c9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_79c9bc:
    // 0x79c9bc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x79c9bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_79c9c0:
    // 0x79c9c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x79c9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_79c9c4:
    // 0x79c9c4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x79c9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_79c9c8:
    // 0x79c9c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79c9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79c9cc:
    // 0x79c9cc: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_79c9d0:
    if (ctx->pc == 0x79C9D0u) {
        ctx->pc = 0x79C9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C9CCu;
        // 0x79c9d0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C9D4u;
        goto label_79c9d4;
    }
    ctx->pc = 0x79C9CCu;
    {
        const bool branch_taken_0x79c9cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79c9cc) {
            ctx->pc = 0x79C9D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C9CCu;
            // 0x79c9d0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C9B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c9b0;
        }
    }
    ctx->pc = 0x79C9D4u;
label_79c9d4:
    // 0x79c9d4: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x79c9d4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_79c9d8:
    // 0x79c9d8: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x79c9d8u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_79c9dc:
    // 0x79c9dc: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_79c9e0:
    if (ctx->pc == 0x79C9E0u) {
        ctx->pc = 0x79C9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C9DCu;
        // 0x79c9e0: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79C9E4u;
        goto label_79c9e4;
    }
    ctx->pc = 0x79C9DCu;
    {
        const bool branch_taken_0x79c9dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C9DCu;
        // 0x79c9e0: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c9dc) {
            ctx->pc = 0x79CA0Cu;
            goto label_79ca0c;
        }
    }
    ctx->pc = 0x79C9E4u;
label_79c9e4:
    // 0x79c9e4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x79c9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_79c9e8:
    // 0x79c9e8: 0x2442ce00  addiu       $v0, $v0, -0x3200
    ctx->pc = 0x79c9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954496));
label_79c9ec:
    // 0x79c9ec: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x79c9ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79c9f0:
    // 0x79c9f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79c9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79c9f4:
    // 0x79c9f4: 0x0  nop
    ctx->pc = 0x79c9f4u;
    // NOP
label_79c9f8:
    // 0x79c9f8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x79c9f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_79c9fc:
    // 0x79c9fc: 0x40f809  jalr        $v0
label_79ca00:
    if (ctx->pc == 0x79CA00u) {
        ctx->pc = 0x79CA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C9FCu;
        // 0x79ca00: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79CA04u;
        goto label_79ca04;
    }
    ctx->pc = 0x79C9FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79CA04u);
        ctx->pc = 0x79CA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C9FCu;
        // 0x79ca00: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C9FCu, 0x79CA04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79CA04u;
label_79ca04:
    // 0x79ca04: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_79ca08:
    if (ctx->pc == 0x79CA08u) {
        ctx->pc = 0x79CA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CA04u;
        // 0x79ca08: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79CA0Cu;
        goto label_79ca0c;
    }
    ctx->pc = 0x79CA04u;
    {
        const bool branch_taken_0x79ca04 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x79ca04) {
            ctx->pc = 0x79CA08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79CA04u;
            // 0x79ca08: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C9F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c9f8;
        }
    }
    ctx->pc = 0x79CA0Cu;
label_79ca0c:
    // 0x79ca0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79ca0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_79ca10:
    // 0x79ca10: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x79ca10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79ca14:
    // 0x79ca14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79ca14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79ca18:
    // 0x79ca18: 0x3e00008  jr          $ra
label_79ca1c:
    if (ctx->pc == 0x79CA1Cu) {
        ctx->pc = 0x79CA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CA18u;
        // 0x79ca1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79CA20u;
        goto label_fallthrough_0x79ca18;
    }
    ctx->pc = 0x79CA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79CA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CA18u;
        // 0x79ca1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79CA18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x79ca18:
    ctx->pc = 0x79CA20u;
}
} // namespace gh_r020
