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

// Function: sceMpegCreate
// Address: 0x399e40 - 0x39a078
void sceMpegCreate_0x399e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceMpegCreate_0x399e40");
#endif

    switch (ctx->pc) {
        case 0x399e70u: goto label_399e70;
        case 0x399e9cu: goto label_399e9c;
        case 0x399ec0u: goto label_399ec0;
        case 0x399f68u: goto label_399f68;
        case 0x399fb4u: goto label_399fb4;
        case 0x399fbcu: goto label_399fbc;
        case 0x399fc4u: goto label_399fc4;
        case 0x39a014u: goto label_39a014;
        case 0x39a050u: goto label_39a050;
        default: break;
    }

    ctx->pc = 0x399e40u;

    // 0x399e40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x399e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x399e44: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x399e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x399e48: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x399e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x399e4c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x399e4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399e50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x399e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x399e54: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x399e54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399e58: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x399e58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399e5c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x399e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x399e60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x399e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399e64: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x399e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x399e68: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x399E68u;
    SET_GPR_U32(ctx, 31, 0x399E70u);
    ctx->pc = 0x399E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399E68u;
    // 0x399e6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x399E68u, 0x399E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399E70u;
label_399e70:
    // 0x399e70: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x399e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x399e74: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x399e74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x399e78: 0x39080  sll         $s2, $v1, 2
    ctx->pc = 0x399e78u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x399e7c: 0x2508023  subu        $s0, $s2, $s0
    ctx->pc = 0x399e7cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x399e80: 0x2303023  subu        $a2, $s1, $s0
    ctx->pc = 0x399e80u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x399e84: 0x28c219a0  slti        $v0, $a2, 0x19A0
    ctx->pc = 0x399e84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)6560) ? 1 : 0);
    // 0x399e88: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x399E88u;
    {
        const bool branch_taken_0x399e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x399E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399E88u;
        // 0x399e8c: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399e88) {
            ctx->pc = 0x399EA4u;
            goto label_399ea4;
        }
    }
    ctx->pc = 0x399E90u;
    // 0x399e90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x399e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399e94: 0xc0e70e4  jal         func_39C390
    ctx->pc = 0x399E94u;
    SET_GPR_U32(ctx, 31, 0x399E9Cu);
    ctx->pc = 0x399E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399E94u;
    // 0x399e98: 0x24a5e468  addiu       $a1, $a1, -0x1B98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C390u, 0x399E94u, 0x399E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399E9Cu;
label_399e9c:
    // 0x399e9c: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x399E9Cu;
    {
        const bool branch_taken_0x399e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399E9Cu;
        // 0x399ea0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399e9c) {
            ctx->pc = 0x39A05Cu;
            goto label_39a05c;
        }
    }
    ctx->pc = 0x399EA4u;
label_399ea4:
    // 0x399ea4: 0x26510118  addiu       $s1, $s2, 0x118
    ctx->pc = 0x399ea4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 280));
    // 0x399ea8: 0xae720040  sw          $s2, 0x40($s3)
    ctx->pc = 0x399ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 18));
    // 0x399eac: 0x24c6e660  addiu       $a2, $a2, -0x19A0
    ctx->pc = 0x399eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960736));
    // 0x399eb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x399eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399eb4: 0x264519a0  addiu       $a1, $s2, 0x19A0
    ctx->pc = 0x399eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 6560));
    // 0x399eb8: 0xc0e6b6a  jal         func_39ADA8
    ctx->pc = 0x399EB8u;
    SET_GPR_U32(ctx, 31, 0x399EC0u);
    ctx->pc = 0x399EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399EB8u;
    // 0x399ebc: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39ADA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39ADA8u, 0x399EB8u, 0x399EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399EC0u;
label_399ec0:
    // 0x399ec0: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x399ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x399ec4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x399ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x399ec8: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x399ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x399ecc: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x399eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x399ed0: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x399ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x399ed4: 0x3c08003a  lui         $t0, 0x3A
    ctx->pc = 0x399ed4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
    // 0x399ed8: 0x2463ae50  addiu       $v1, $v1, -0x51B0
    ctx->pc = 0x399ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946384));
    // 0x399edc: 0x2508ae78  addiu       $t0, $t0, -0x5188
    ctx->pc = 0x399edcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294946424));
    // 0x399ee0: 0xfe620010  sd          $v0, 0x10($s3)
    ctx->pc = 0x399ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 16), GPR_U64(ctx, 2));
    // 0x399ee4: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x399ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x399ee8: 0xfe620018  sd          $v0, 0x18($s3)
    ctx->pc = 0x399ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 2));
    // 0x399eec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x399eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399ef0: 0xfe600020  sd          $zero, 0x20($s3)
    ctx->pc = 0x399ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 32), GPR_U64(ctx, 0));
    // 0x399ef4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x399ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399ef8: 0xfe620028  sd          $v0, 0x28($s3)
    ctx->pc = 0x399ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 40), GPR_U64(ctx, 2));
    // 0x399efc: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x399efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x399f00: 0xfe620030  sd          $v0, 0x30($s3)
    ctx->pc = 0x399f00u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 48), GPR_U64(ctx, 2));
    // 0x399f04: 0xfe600038  sd          $zero, 0x38($s3)
    ctx->pc = 0x399f04u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 56), GPR_U64(ctx, 0));
    // 0x399f08: 0xae4000c8  sw          $zero, 0xC8($s2)
    ctx->pc = 0x399f08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 0));
    // 0x399f0c: 0xae4000cc  sw          $zero, 0xCC($s2)
    ctx->pc = 0x399f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 0));
    // 0x399f10: 0xae4000d0  sw          $zero, 0xD0($s2)
    ctx->pc = 0x399f10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 0));
    // 0x399f14: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x399f14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x399f18: 0xae4000d8  sw          $zero, 0xD8($s2)
    ctx->pc = 0x399f18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 0));
    // 0x399f1c: 0xae4000dc  sw          $zero, 0xDC($s2)
    ctx->pc = 0x399f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 0));
    // 0x399f20: 0xae4000e0  sw          $zero, 0xE0($s2)
    ctx->pc = 0x399f20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 0));
    // 0x399f24: 0xae4000e4  sw          $zero, 0xE4($s2)
    ctx->pc = 0x399f24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 0));
    // 0x399f28: 0xae4000e8  sw          $zero, 0xE8($s2)
    ctx->pc = 0x399f28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 0));
    // 0x399f2c: 0xae4000ec  sw          $zero, 0xEC($s2)
    ctx->pc = 0x399f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 236), GPR_U32(ctx, 0));
    // 0x399f30: 0xae4000f0  sw          $zero, 0xF0($s2)
    ctx->pc = 0x399f30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 240), GPR_U32(ctx, 0));
    // 0x399f34: 0xae4000f4  sw          $zero, 0xF4($s2)
    ctx->pc = 0x399f34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 0));
    // 0x399f38: 0xae4000f8  sw          $zero, 0xF8($s2)
    ctx->pc = 0x399f38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 248), GPR_U32(ctx, 0));
    // 0x399f3c: 0xae4000fc  sw          $zero, 0xFC($s2)
    ctx->pc = 0x399f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 252), GPR_U32(ctx, 0));
    // 0x399f40: 0xae400108  sw          $zero, 0x108($s2)
    ctx->pc = 0x399f40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 0));
    // 0x399f44: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x399f44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x399f48: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x399f48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
    // 0x399f4c: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x399f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
    // 0x399f50: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x399f50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
    // 0x399f54: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x399f54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
    // 0x399f58: 0xfe420100  sd          $v0, 0x100($s2)
    ctx->pc = 0x399f58u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 256), GPR_U64(ctx, 2));
    // 0x399f5c: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x399f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
    // 0x399f60: 0xc0e6b78  jal         func_39ADE0
    ctx->pc = 0x399F60u;
    SET_GPR_U32(ctx, 31, 0x399F68u);
    ctx->pc = 0x399F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399F60u;
    // 0x399f64: 0xae480030  sw          $t0, 0x30($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39ADE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39ADE0u, 0x399F60u, 0x399F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399F68u;
label_399f68:
    // 0x399f68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x399f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x399f6c: 0xae400064  sw          $zero, 0x64($s2)
    ctx->pc = 0x399f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 0));
    // 0x399f70: 0xae40010c  sw          $zero, 0x10C($s2)
    ctx->pc = 0x399f70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 0));
    // 0x399f74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x399f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399f78: 0xae400110  sw          $zero, 0x110($s2)
    ctx->pc = 0x399f78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 272), GPR_U32(ctx, 0));
    // 0x399f7c: 0xae400114  sw          $zero, 0x114($s2)
    ctx->pc = 0x399f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 0));
    // 0x399f80: 0xae40008c  sw          $zero, 0x8C($s2)
    ctx->pc = 0x399f80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 0));
    // 0x399f84: 0xfe400090  sd          $zero, 0x90($s2)
    ctx->pc = 0x399f84u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 144), GPR_U64(ctx, 0));
    // 0x399f88: 0xae500098  sw          $s0, 0x98($s2)
    ctx->pc = 0x399f88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 16));
    // 0x399f8c: 0xfe4000a0  sd          $zero, 0xA0($s2)
    ctx->pc = 0x399f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 160), GPR_U64(ctx, 0));
    // 0x399f90: 0xae40009c  sw          $zero, 0x9C($s2)
    ctx->pc = 0x399f90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 0));
    // 0x399f94: 0xae4000c0  sw          $zero, 0xC0($s2)
    ctx->pc = 0x399f94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 0));
    // 0x399f98: 0xae5000a8  sw          $s0, 0xA8($s2)
    ctx->pc = 0x399f98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 16));
    // 0x399f9c: 0xae5000ac  sw          $s0, 0xAC($s2)
    ctx->pc = 0x399f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 16));
    // 0x399fa0: 0xae5000b0  sw          $s0, 0xB0($s2)
    ctx->pc = 0x399fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 16));
    // 0x399fa4: 0xae530868  sw          $s3, 0x868($s2)
    ctx->pc = 0x399fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2152), GPR_U32(ctx, 19));
    // 0x399fa8: 0xae420060  sw          $v0, 0x60($s2)
    ctx->pc = 0x399fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
    // 0x399fac: 0xc0e675c  jal         func_399D70
    ctx->pc = 0x399FACu;
    SET_GPR_U32(ctx, 31, 0x399FB4u);
    ctx->pc = 0x399FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399FACu;
    // 0x399fb0: 0xae4300c4  sw          $v1, 0xC4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399D70u, 0x399FACu, 0x399FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399FB4u;
label_399fb4:
    // 0x399fb4: 0xc0e6a92  jal         func_39AA48
    ctx->pc = 0x399FB4u;
    SET_GPR_U32(ctx, 31, 0x399FBCu);
    ctx->pc = 0x399FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399FB4u;
    // 0x399fb8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39AA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39AA48u, 0x399FB4u, 0x399FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399FBCu;
label_399fbc:
    // 0x399fbc: 0xc0e6b16  jal         func_39AC58
    ctx->pc = 0x399FBCu;
    SET_GPR_U32(ctx, 31, 0x399FC4u);
    ctx->pc = 0x399FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399FBCu;
    // 0x399fc0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39AC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39AC58u, 0x399FBCu, 0x399FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399FC4u;
label_399fc4:
    // 0x399fc4: 0x264301f8  addiu       $v1, $s2, 0x1F8
    ctx->pc = 0x399fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 504));
    // 0x399fc8: 0x26420260  addiu       $v0, $s2, 0x260
    ctx->pc = 0x399fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 608));
    // 0x399fcc: 0x264502c8  addiu       $a1, $s2, 0x2C8
    ctx->pc = 0x399fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 712));
    // 0x399fd0: 0x26460330  addiu       $a2, $s2, 0x330
    ctx->pc = 0x399fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 816));
    // 0x399fd4: 0x26470398  addiu       $a3, $s2, 0x398
    ctx->pc = 0x399fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 920));
    // 0x399fd8: 0x26480400  addiu       $t0, $s2, 0x400
    ctx->pc = 0x399fd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 1024));
    // 0x399fdc: 0x26490468  addiu       $t1, $s2, 0x468
    ctx->pc = 0x399fdcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 1128));
    // 0x399fe0: 0x264a04d0  addiu       $t2, $s2, 0x4D0
    ctx->pc = 0x399fe0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 1232));
    // 0x399fe4: 0x264b0538  addiu       $t3, $s2, 0x538
    ctx->pc = 0x399fe4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 1336));
    // 0x399fe8: 0xae4301c8  sw          $v1, 0x1C8($s2)
    ctx->pc = 0x399fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 456), GPR_U32(ctx, 3));
    // 0x399fec: 0xae4201cc  sw          $v0, 0x1CC($s2)
    ctx->pc = 0x399fecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 460), GPR_U32(ctx, 2));
    // 0x399ff0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x399ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399ff4: 0xae4501d4  sw          $a1, 0x1D4($s2)
    ctx->pc = 0x399ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 468), GPR_U32(ctx, 5));
    // 0x399ff8: 0xae4601d8  sw          $a2, 0x1D8($s2)
    ctx->pc = 0x399ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 472), GPR_U32(ctx, 6));
    // 0x399ffc: 0xae4701dc  sw          $a3, 0x1DC($s2)
    ctx->pc = 0x399ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 476), GPR_U32(ctx, 7));
    // 0x39a000: 0xae4801e4  sw          $t0, 0x1E4($s2)
    ctx->pc = 0x39a000u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 484), GPR_U32(ctx, 8));
    // 0x39a004: 0xae4901e8  sw          $t1, 0x1E8($s2)
    ctx->pc = 0x39a004u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 488), GPR_U32(ctx, 9));
    // 0x39a008: 0xae4a01ec  sw          $t2, 0x1EC($s2)
    ctx->pc = 0x39a008u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 492), GPR_U32(ctx, 10));
    // 0x39a00c: 0xc0e6b70  jal         func_39ADC0
    ctx->pc = 0x39A00Cu;
    SET_GPR_U32(ctx, 31, 0x39A014u);
    ctx->pc = 0x39A010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A00Cu;
    // 0x39a010: 0xae4b01f4  sw          $t3, 0x1F4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 500), GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39ADC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39ADC0u, 0x39A00Cu, 0x39A014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A014u;
label_39a014:
    // 0x39a014: 0xae500860  sw          $s0, 0x860($s2)
    ctx->pc = 0x39a014u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2144), GPR_U32(ctx, 16));
    // 0x39a018: 0x3246003c  andi        $a2, $s2, 0x3C
    ctx->pc = 0x39a018u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)60);
    // 0x39a01c: 0xae40085c  sw          $zero, 0x85C($s2)
    ctx->pc = 0x39a01cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2140), GPR_U32(ctx, 0));
    // 0x39a020: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x39A020u;
    {
        const bool branch_taken_0x39a020 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A020u;
        // 0x39a024: 0xae400864  sw          $zero, 0x864($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a020) {
            ctx->pc = 0x39A038u;
            goto label_39a038;
        }
    }
    ctx->pc = 0x39A028u;
    // 0x39a028: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x39a028u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x39a02c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39a02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a030: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x39A030u;
    {
        const bool branch_taken_0x39a030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A030u;
        // 0x39a034: 0x24a5e418  addiu       $a1, $a1, -0x1BE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a030) {
            ctx->pc = 0x39A048u;
            goto label_39a048;
        }
    }
    ctx->pc = 0x39A038u;
label_39a038:
    // 0x39a038: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x39A038u;
    {
        const bool branch_taken_0x39a038 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A038u;
        // 0x39a03c: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a038) {
            ctx->pc = 0x39A058u;
            goto label_39a058;
        }
    }
    ctx->pc = 0x39A040u;
    // 0x39a040: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39a040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a044: 0x24a5e440  addiu       $a1, $a1, -0x1BC0
    ctx->pc = 0x39a044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960192));
label_39a048:
    // 0x39a048: 0xc0e70fa  jal         func_39C3E8
    ctx->pc = 0x39A048u;
    SET_GPR_U32(ctx, 31, 0x39A050u);
    ctx->pc = 0x39C3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C3E8u, 0x39A048u, 0x39A050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A050u;
label_39a050:
    // 0x39a050: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x39A050u;
    {
        const bool branch_taken_0x39a050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A050u;
        // 0x39a054: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a050) {
            ctx->pc = 0x39A05Cu;
            goto label_39a05c;
        }
    }
    ctx->pc = 0x39A058u;
label_39a058:
    // 0x39a058: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39a058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39a05c:
    // 0x39a05c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x39a05cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39a060: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x39a060u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39a064: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x39a064u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39a068: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x39a068u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39a06c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39a06cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39a070: 0x3e00008  jr          $ra
    ctx->pc = 0x39A070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A070u;
        // 0x39a074: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39A078u;
}
