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

// Function: DTR_Create
// Address: 0x3401f0 - 0x3402e0
void DTR_Create_0x3401f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DTR_Create_0x3401f0");
#endif

    switch (ctx->pc) {
        case 0x340214u: goto label_340214;
        case 0x340230u: goto label_340230;
        case 0x340274u: goto label_340274;
        case 0x340290u: goto label_340290;
        case 0x3402bcu: goto label_3402bc;
        default: break;
    }

    ctx->pc = 0x3401f0u;

    // 0x3401f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3401f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3401f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3401f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3401f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3401f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3401fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3401fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340200: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x340200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x340204: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x340204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x340208: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x340208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x34020c: 0xc0ce27e  jal         func_3389F8
    ctx->pc = 0x34020Cu;
    SET_GPR_U32(ctx, 31, 0x340214u);
    ctx->pc = 0x340210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34020Cu;
    // 0x340210: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3389F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389F8u, 0x34020Cu, 0x340214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340214u;
label_340214:
    // 0x340214: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x340214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x340218: 0x2451bc20  addiu       $s1, $v0, -0x43E0
    ctx->pc = 0x340218u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949920));
    // 0x34021c: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x34021cu;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x3EBC20u));
    // 0x340220: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x340220u;
    {
        const bool branch_taken_0x340220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x340224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340220u;
        // 0x340224: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340220) {
            ctx->pc = 0x340254u;
            goto label_340254;
        }
    }
    ctx->pc = 0x340228u;
    // 0x340228: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x340228u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34022c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34022cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_340230:
    // 0x340230: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x340230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x340234: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x340234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x340238: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x340238u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x34023c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34023Cu;
    {
        const bool branch_taken_0x34023c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x340240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34023Cu;
        // 0x340240: 0x51980  sll         $v1, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34023c) {
            ctx->pc = 0x340254u;
            goto label_340254;
        }
    }
    ctx->pc = 0x340244u;
    // 0x340244: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x340244u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x340248: 0x0  nop
    ctx->pc = 0x340248u;
    // NOP
    // 0x34024c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x34024Cu;
    {
        const bool branch_taken_0x34024c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x340250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34024Cu;
        // 0x340250: 0x668821  addu        $s1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34024c) {
            ctx->pc = 0x340230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_340230;
        }
    }
    ctx->pc = 0x340254u;
label_340254:
    // 0x340254: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x340254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x340258: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x340258u;
    {
        const bool branch_taken_0x340258 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x34025Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340258u;
        // 0x34025c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340258) {
            ctx->pc = 0x340280u;
            goto label_340280;
        }
    }
    ctx->pc = 0x340260u;
    // 0x340260: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x340260u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x340264: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x340264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x340268: 0x24846b00  addiu       $a0, $a0, 0x6B00
    ctx->pc = 0x340268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27392));
    // 0x34026c: 0xc0c9832  jal         func_3260C8
    ctx->pc = 0x34026Cu;
    SET_GPR_U32(ctx, 31, 0x340274u);
    ctx->pc = 0x340270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34026Cu;
    // 0x340270: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3260C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260C8u, 0x34026Cu, 0x340274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340274u;
label_340274:
    // 0x340274: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x340274u;
    {
        const bool branch_taken_0x340274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340274u;
        // 0x340278: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340274) {
            ctx->pc = 0x3402B4u;
            goto label_3402b4;
        }
    }
    ctx->pc = 0x34027Cu;
    // 0x34027c: 0x0  nop
    ctx->pc = 0x34027cu;
    // NOP
label_340280:
    // 0x340280: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x340280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340284: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x340284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x340288: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x340288u;
    SET_GPR_U32(ctx, 31, 0x340290u);
    ctx->pc = 0x34028Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340288u;
    // 0x34028c: 0x24100040  addiu       $s0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x340288u, 0x340290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340290u;
label_340290:
    // 0x340290: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x340290u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x340294: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x340294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x340298: 0xae300038  sw          $s0, 0x38($s1)
    ctx->pc = 0x340298u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 16));
    // 0x34029c: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x34029cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x3402a0: 0xae330008  sw          $s3, 0x8($s1)
    ctx->pc = 0x3402a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 19));
    // 0x3402a4: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x3402a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3402a8: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x3402a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3402ac: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x3402acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x3402b0: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x3402b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
label_3402b4:
    // 0x3402b4: 0xc0ce284  jal         func_338A10
    ctx->pc = 0x3402B4u;
    SET_GPR_U32(ctx, 31, 0x3402BCu);
    ctx->pc = 0x338A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A10u, 0x3402B4u, 0x3402BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3402BCu;
label_3402bc:
    // 0x3402bc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3402bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3402c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3402c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3402c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3402c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3402c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3402c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3402cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3402ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3402d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3402d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3402d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3402D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3402D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3402D4u;
        // 0x3402d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3402D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3402DCu;
    // 0x3402dc: 0x0  nop
    ctx->pc = 0x3402dcu;
    // NOP
    ctx->pc = 0x3402e0u;
}
