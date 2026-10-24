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
// Function: func_007CC8C0
// Address: 0x7cc8c0 - 0x7cc9a8
void func_007CC8C0_0x7cc8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007CC8C0_0x7cc8c0");
#endif

    switch (ctx->pc) {
        case 0x7cc8e0u: goto label_7cc8e0;
        case 0x7cc8fcu: goto label_7cc8fc;
        case 0x7cc92cu: goto label_7cc92c;
        case 0x7cc948u: goto label_7cc948;
        default: break;
    }

    ctx->pc = 0x7cc8c0u;

    // 0x7cc8c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7cc8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7cc8c4: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7cc8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7cc8c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x7cc8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x7cc8cc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x7cc8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x7cc8d0: 0x8c501958  lw          $s0, 0x1958($v0)
    ctx->pc = 0x7cc8d0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x7D1958u));
    // 0x7cc8d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7cc8d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cc8d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x7cc8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x7cc8dc: 0x0  nop
    ctx->pc = 0x7cc8dcu;
    // NOP
label_7cc8e0:
    // 0x7cc8e0: 0x1200002b  beqz        $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x7CC8E0u;
    {
        const bool branch_taken_0x7cc8e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CC8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC8E0u;
        // 0x7cc8e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc8e0) {
            ctx->pc = 0x7CC990u;
            goto label_7cc990;
        }
    }
    ctx->pc = 0x7CC8E8u;
    // 0x7cc8e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x7cc8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7cc8ec: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7CC8ECu;
    {
        const bool branch_taken_0x7cc8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CC8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC8ECu;
        // 0x7cc8f0: 0x222102b  sltu        $v0, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc8ec) {
            ctx->pc = 0x7CC904u;
            goto label_7cc904;
        }
    }
    ctx->pc = 0x7CC8F4u;
    // 0x7cc8f4: 0xc1f31e0  jal         func_7CC780
    ctx->pc = 0x7CC8F4u;
    SET_GPR_U32(ctx, 31, 0x7CC8FCu);
    ctx->pc = 0x7CC8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CC8F4u;
    // 0x7cc8f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CC780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CC780u, 0x7CC8F4u, 0x7CC8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CC8FCu;
label_7cc8fc:
    // 0x7cc8fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x7cc8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7cc900: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x7cc900u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_7cc904:
    // 0x7cc904: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x7CC904u;
    {
        const bool branch_taken_0x7cc904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7cc904) {
            ctx->pc = 0x7CC908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7CC904u;
            // 0x7cc908: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7CC8E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7cc8e0;
        }
    }
    ctx->pc = 0x7CC90Cu;
    // 0x7cc90c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x7cc90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x7cc910: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x7cc910u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x7cc914: 0x5040fff2  beql        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x7CC914u;
    {
        const bool branch_taken_0x7cc914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7cc914) {
            ctx->pc = 0x7CC918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7CC914u;
            // 0x7cc918: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7CC8E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7cc8e0;
        }
    }
    ctx->pc = 0x7CC91Cu;
    // 0x7cc91c: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7CC91Cu;
    {
        const bool branch_taken_0x7cc91c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x7cc91c) {
            ctx->pc = 0x7CC920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7CC91Cu;
            // 0x7cc920: 0x8e070010  lw          $a3, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7CC934u;
            goto label_7cc934;
        }
    }
    ctx->pc = 0x7CC924u;
    // 0x7cc924: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x7CC924u;
    {
        const bool branch_taken_0x7cc924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CC928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC924u;
        // 0x7cc928: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc924) {
            ctx->pc = 0x7CC990u;
            goto label_7cc990;
        }
    }
    ctx->pc = 0x7CC92Cu;
label_7cc92c:
    // 0x7cc92c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x7CC92Cu;
    {
        const bool branch_taken_0x7cc92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CC930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC92Cu;
        // 0x7cc930: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc92c) {
            ctx->pc = 0x7CC990u;
            goto label_7cc990;
        }
    }
    ctx->pc = 0x7CC934u;
label_7cc934:
    // 0x7cc934: 0x10e00015  beqz        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x7CC934u;
    {
        const bool branch_taken_0x7cc934 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CC938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC934u;
        // 0x7cc938: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc934) {
            ctx->pc = 0x7CC98Cu;
            goto label_7cc98c;
        }
    }
    ctx->pc = 0x7CC93Cu;
    // 0x7cc93c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x7cc93cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x7cc940: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x7cc940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x7cc944: 0x0  nop
    ctx->pc = 0x7cc944u;
    // NOP
label_7cc948:
    // 0x7cc948: 0x23042  srl         $a2, $v0, 1
    ctx->pc = 0x7cc948u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x7cc94c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x7cc94cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x7cc950: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x7cc950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x7cc954: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x7cc954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7cc958: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x7cc958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x7cc95c: 0x225102b  sltu        $v0, $s1, $a1
    ctx->pc = 0x7cc95cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x7cc960: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CC960u;
    {
        const bool branch_taken_0x7cc960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7cc960) {
            ctx->pc = 0x7CC964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7CC960u;
            // 0x7cc964: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7CC970u;
            goto label_7cc970;
        }
    }
    ctx->pc = 0x7CC968u;
    // 0x7cc968: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x7CC968u;
    {
        const bool branch_taken_0x7cc968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CC96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC968u;
        // 0x7cc96c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc968) {
            ctx->pc = 0x7CC980u;
            goto label_7cc980;
        }
    }
    ctx->pc = 0x7CC970u;
label_7cc970:
    // 0x7cc970: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x7cc970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x7cc974: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x7cc974u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x7cc978: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x7CC978u;
    {
        const bool branch_taken_0x7cc978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CC97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC978u;
        // 0x7cc97c: 0x24c80001  addiu       $t0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc978) {
            ctx->pc = 0x7CC92Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7cc92c;
        }
    }
    ctx->pc = 0x7CC980u;
label_7cc980:
    // 0x7cc980: 0x107102b  sltu        $v0, $t0, $a3
    ctx->pc = 0x7cc980u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x7cc984: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x7CC984u;
    {
        const bool branch_taken_0x7cc984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CC988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC984u;
        // 0x7cc988: 0x1071021  addu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cc984) {
            ctx->pc = 0x7CC948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7cc948;
        }
    }
    ctx->pc = 0x7CC98Cu;
label_7cc98c:
    // 0x7cc98c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x7cc98cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7cc990:
    // 0x7cc990: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x7cc990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7cc994: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x7cc994u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7cc998: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7cc998u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7cc99c: 0x3e00008  jr          $ra
    ctx->pc = 0x7CC99Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CC9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CC99Cu;
        // 0x7cc9a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CC99Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CC9A4u;
    // 0x7cc9a4: 0x0  nop
    ctx->pc = 0x7cc9a4u;
    // NOP
    ctx->pc = 0x7cc9a8u;
}
} // namespace gh_mcport
