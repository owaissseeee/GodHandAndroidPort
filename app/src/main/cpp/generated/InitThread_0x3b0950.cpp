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

// Function: InitThread
// Address: 0x3b0950 - 0x3b0a40
void InitThread_0x3b0950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitThread_0x3b0950");
#endif

    switch (ctx->pc) {
        case 0x3b0994u: goto label_3b0994;
        case 0x3b09d8u: goto label_3b09d8;
        case 0x3b09ecu: goto label_3b09ec;
        case 0x3b0a0cu: goto label_3b0a0c;
        case 0x3b0a14u: goto label_3b0a14;
        case 0x3b0a20u: goto label_3b0a20;
        default: break;
    }

    ctx->pc = 0x3b0950u;

    // 0x3b0950: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3b0950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3b0954: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x3b0954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x3b0958: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x3b0958u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x3b095c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3b095cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3b0960: 0x8e02ae48  lw          $v0, -0x51B8($s0)
    ctx->pc = 0x3b0960u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FAE48u));
    // 0x3b0964: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x3b0964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x3b0968: 0x1c400020  bgtz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3B0968u;
    {
        const bool branch_taken_0x3b0968 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x3B096Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0968u;
        // 0x3b096c: 0xffb10060  sd          $s1, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0968) {
            ctx->pc = 0x3B09ECu;
            goto label_3b09ec;
        }
    }
    ctx->pc = 0x3B0970u;
    // 0x3b0970: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3b0970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3b0974: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3b0974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3b0978: 0x2451fe28  addiu       $s1, $v0, -0x1D8
    ctx->pc = 0x3b0978u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966824));
    // 0x3b097c: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x3b097cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x3b0980: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x3b0980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x3b0984: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3b0984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3b0988: 0xafb10044  sw          $s1, 0x44($sp)
    ctx->pc = 0x3b0988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 17));
    // 0x3b098c: 0xc0ebf28  jal         func_3AFCA0
    ctx->pc = 0x3B098Cu;
    SET_GPR_U32(ctx, 31, 0x3B0994u);
    ctx->pc = 0x3B0990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B098Cu;
    // 0x3b0990: 0x3c120078  lui         $s2, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)120 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCA0u, 0x3B098Cu, 0x3B0994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0994u;
label_3b0994:
    // 0x3b0994: 0x4400015  bltz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3B0994u;
    {
        const bool branch_taken_0x3b0994 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3B0998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0994u;
        // 0x3b0998: 0xae42df90  sw          $v0, -0x2070($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294958992), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0994) {
            ctx->pc = 0x3B09ECu;
            goto label_3b09ec;
        }
    }
    ctx->pc = 0x3B099Cu;
    // 0x3b099c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3b099cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x3b09a0: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x3b09a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x3b09a4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3b09a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x3b09a8: 0x24420878  addiu       $v0, $v0, 0x878
    ctx->pc = 0x3b09a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2168));
    // 0x3b09ac: 0x2463db90  addiu       $v1, $v1, -0x2470
    ctx->pc = 0x3b09acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957968));
    // 0x3b09b0: 0x24a58cf0  addiu       $a1, $a1, -0x7310
    ctx->pc = 0x3b09b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937840));
    // 0x3b09b4: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x3b09b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3b09b8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3b09b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x3b09bc: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x3b09bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x3b09c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3b09c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b09c4: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x3b09c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x3b09c8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x3b09c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x3b09cc: 0xafb10020  sw          $s1, 0x20($sp)
    ctx->pc = 0x3b09ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 17));
    // 0x3b09d0: 0xc0ebea8  jal         func_3AFAA0
    ctx->pc = 0x3B09D0u;
    SET_GPR_U32(ctx, 31, 0x3B09D8u);
    ctx->pc = 0x3B09D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B09D0u;
    // 0x3b09d4: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFAA0u, 0x3B09D0u, 0x3B09D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B09D8u;
label_3b09d8:
    // 0x3b09d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b09d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b09dc: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B09DCu;
    {
        const bool branch_taken_0x3b09dc = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x3B09E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B09DCu;
        // 0x3b09e0: 0xae04ae48  sw          $a0, -0x51B8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294946376), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b09dc) {
            ctx->pc = 0x3B09F4u;
            goto label_3b09f4;
        }
    }
    ctx->pc = 0x3B09E4u;
    // 0x3b09e4: 0xc0ebf2c  jal         func_3AFCB0
    ctx->pc = 0x3B09E4u;
    SET_GPR_U32(ctx, 31, 0x3B09ECu);
    ctx->pc = 0x3B09E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B09E4u;
    // 0x3b09e8: 0x8e44df90  lw          $a0, -0x2070($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294958992)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCB0u, 0x3B09E4u, 0x3B09ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B09ECu;
label_3b09ec:
    // 0x3b09ec: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3B09ECu;
    {
        const bool branch_taken_0x3b09ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B09F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B09ECu;
        // 0x3b09f0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b09ec) {
            ctx->pc = 0x3B0A24u;
            goto label_3b0a24;
        }
    }
    ctx->pc = 0x3B09F4u;
label_3b09f4:
    // 0x3b09f4: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x3b09f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
    // 0x3b09f8: 0x2443df98  addiu       $v1, $v0, -0x2068
    ctx->pc = 0x3b09f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959000));
    // 0x3b09fc: 0xac40df98  sw          $zero, -0x2068($v0)
    ctx->pc = 0x3b09fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x77DF98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x77DF98u, _value); } while (0);
    // 0x3b0a00: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3b0a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0a04: 0xc0ec2ea  jal         func_3B0BA8
    ctx->pc = 0x3B0A04u;
    SET_GPR_U32(ctx, 31, 0x3B0A0Cu);
    ctx->pc = 0x3B0A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0A04u;
    // 0x3b0a08: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0BA8u, 0x3B0A04u, 0x3B0A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0A0Cu;
label_3b0a0c:
    // 0x3b0a0c: 0xc0ebee4  jal         func_3AFB90
    ctx->pc = 0x3B0A0Cu;
    SET_GPR_U32(ctx, 31, 0x3B0A14u);
    ctx->pc = 0x3AFB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFB90u, 0x3B0A0Cu, 0x3B0A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0A14u;
label_3b0a14:
    // 0x3b0a14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b0a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0a18: 0xc0ebecc  jal         func_3AFB30
    ctx->pc = 0x3B0A18u;
    SET_GPR_U32(ctx, 31, 0x3B0A20u);
    ctx->pc = 0x3B0A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0A18u;
    // 0x3b0a1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFB30u, 0x3B0A18u, 0x3B0A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0A20u;
label_3b0a20:
    // 0x3b0a20: 0x8e02ae48  lw          $v0, -0x51B8($s0)
    ctx->pc = 0x3b0a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946376)));
label_3b0a24:
    // 0x3b0a24: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3b0a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3b0a28: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x3b0a28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3b0a2c: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x3b0a2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b0a30: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x3b0a30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b0a34: 0x3e00008  jr          $ra
    ctx->pc = 0x3B0A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B0A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0A34u;
        // 0x3b0a38: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B0A3Cu;
    // 0x3b0a3c: 0x0  nop
    ctx->pc = 0x3b0a3cu;
    // NOP
    ctx->pc = 0x3b0a40u;
}
