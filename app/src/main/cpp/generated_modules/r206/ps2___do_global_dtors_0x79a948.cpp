#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r206_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r206
{
// Function: __do_global_dtors
// Address: 0x79a948 - 0x79a9a0
void ps2___do_global_dtors_0x79a948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x79a948");
#endif

    switch (ctx->pc) {
        case 0x79a948u: goto label_79a948;
        case 0x79a94cu: goto label_79a94c;
        case 0x79a950u: goto label_79a950;
        case 0x79a954u: goto label_79a954;
        case 0x79a958u: goto label_79a958;
        case 0x79a95cu: goto label_79a95c;
        case 0x79a960u: goto label_79a960;
        case 0x79a964u: goto label_79a964;
        case 0x79a968u: goto label_79a968;
        case 0x79a96cu: goto label_79a96c;
        case 0x79a970u: goto label_79a970;
        case 0x79a974u: goto label_79a974;
        case 0x79a978u: goto label_79a978;
        case 0x79a97cu: goto label_79a97c;
        case 0x79a980u: goto label_79a980;
        case 0x79a984u: goto label_79a984;
        case 0x79a988u: goto label_79a988;
        case 0x79a98cu: goto label_79a98c;
        case 0x79a990u: goto label_79a990;
        case 0x79a994u: goto label_79a994;
        case 0x79a998u: goto label_79a998;
        case 0x79a99cu: goto label_79a99c;
        default: break;
    }

    ctx->pc = 0x79a948u;

label_79a948:
    // 0x79a948: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79a948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_79a94c:
    // 0x79a94c: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x79a94cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_79a950:
    // 0x79a950: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79a950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_79a954:
    // 0x79a954: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x79a954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_79a958:
    // 0x79a958: 0x8c82ab80  lw          $v0, -0x5480($a0)
    ctx->pc = 0x79a958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294945664)));
label_79a95c:
    // 0x79a95c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a960:
    // 0x79a960: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_79a964:
    if (ctx->pc == 0x79A964u) {
        ctx->pc = 0x79A964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A960u;
        // 0x79a964: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A968u;
        goto label_79a968;
    }
    ctx->pc = 0x79A960u;
    {
        const bool branch_taken_0x79a960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A960u;
        // 0x79a964: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a960) {
            ctx->pc = 0x79A98Cu;
            goto label_79a98c;
        }
    }
    ctx->pc = 0x79A968u;
label_79a968:
    // 0x79a968: 0x8e02ab80  lw          $v0, -0x5480($s0)
    ctx->pc = 0x79a968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945664)));
label_79a96c:
    // 0x79a96c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x79a96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_79a970:
    // 0x79a970: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x79a970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_79a974:
    // 0x79a974: 0x60f809  jalr        $v1
label_79a978:
    if (ctx->pc == 0x79A978u) {
        ctx->pc = 0x79A978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A974u;
        // 0x79a978: 0xae02ab80  sw          $v0, -0x5480($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294945664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A97Cu;
        goto label_79a97c;
    }
    ctx->pc = 0x79A974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x79A97Cu);
        ctx->pc = 0x79A978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A974u;
        // 0x79a978: 0xae02ab80  sw          $v0, -0x5480($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294945664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A974u, 0x79A97Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A97Cu;
label_79a97c:
    // 0x79a97c: 0x8e02ab80  lw          $v0, -0x5480($s0)
    ctx->pc = 0x79a97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945664)));
label_79a980:
    // 0x79a980: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a984:
    // 0x79a984: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_79a988:
    if (ctx->pc == 0x79A988u) {
        ctx->pc = 0x79A988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A984u;
        // 0x79a988: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A98Cu;
        goto label_79a98c;
    }
    ctx->pc = 0x79A984u;
    {
        const bool branch_taken_0x79a984 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A984u;
        // 0x79a988: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a984) {
            ctx->pc = 0x79A970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a970;
        }
    }
    ctx->pc = 0x79A98Cu;
label_79a98c:
    // 0x79a98c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79a98cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79a990:
    // 0x79a990: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79a990u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79a994:
    // 0x79a994: 0x3e00008  jr          $ra
label_79a998:
    if (ctx->pc == 0x79A998u) {
        ctx->pc = 0x79A998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A994u;
        // 0x79a998: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A99Cu;
        goto label_79a99c;
    }
    ctx->pc = 0x79A994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A994u;
        // 0x79a998: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A99Cu;
label_79a99c:
    // 0x79a99c: 0x0  nop
    ctx->pc = 0x79a99cu;
    // NOP
    ctx->pc = 0x79a9a0u;
}
} // namespace gh_r206
