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

// Function: func_002B3EC8
// Address: 0x2b3ec8 - 0x2b4028
void func_002B3EC8_0x2b3ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B3EC8_0x2b3ec8");
#endif

    switch (ctx->pc) {
        case 0x2b3f9cu: goto label_2b3f9c;
        case 0x2b3fd4u: goto label_2b3fd4;
        case 0x2b4000u: goto label_2b4000;
        default: break;
    }

    ctx->pc = 0x2b3ec8u;

    // 0x2b3ec8: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2b3ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2b3ecc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b3eccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b3ed0: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x2b3ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A84u));
    // 0x2b3ed4: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x2b3ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x2b3ed8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b3ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b3edc: 0x24467a84  addiu       $a2, $v0, 0x7A84
    ctx->pc = 0x2b3edcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 31364));
    // 0x2b3ee0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b3ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b3ee4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2b3ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2b3ee8: 0x1460004a  bnez        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x2B3EE8u;
    {
        const bool branch_taken_0x2b3ee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3EE8u;
        // 0x2b3eec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3ee8) {
            ctx->pc = 0x2B4014u;
            goto label_2b4014;
        }
    }
    ctx->pc = 0x2B3EF0u;
    // 0x2b3ef0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2b3ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2b3ef4: 0x24c6fa1c  addiu       $a2, $a2, -0x5E4
    ctx->pc = 0x2b3ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965788));
    // 0x2b3ef8: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x2b3ef8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2b3efc: 0x425f8  dsll        $a0, $a0, 23
    ctx->pc = 0x2b3efcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 23);
    // 0x2b3f00: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x2b3f00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x2b3f04: 0x42338  dsll        $a0, $a0, 12
    ctx->pc = 0x2b3f04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 12);
    // 0x2b3f08: 0x96050094  lhu         $a1, 0x94($s0)
    ctx->pc = 0x2b3f08u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x2b3f0c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x2b3f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x2b3f10: 0x86070094  lh          $a3, 0x94($s0)
    ctx->pc = 0x2b3f10u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x2b3f14: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2b3f14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2b3f18: 0xdcc301a0  ld          $v1, 0x1A0($a2)
    ctx->pc = 0x2b3f18u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 416)));
    // 0x2b3f1c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2b3f1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2b3f20: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B3F20u;
    {
        const bool branch_taken_0x2b3f20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3F20u;
        // 0x2b3f24: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3f20) {
            ctx->pc = 0x2B3F2Cu;
            goto label_2b3f2c;
        }
    }
    ctx->pc = 0x2B3F28u;
    // 0x2b3f28: 0xa6020094  sh          $v0, 0x94($s0)
    ctx->pc = 0x2b3f28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 148), (uint16_t)GPR_U32(ctx, 2));
label_2b3f2c:
    // 0x2b3f2c: 0xdcc201a0  ld          $v0, 0x1A0($a2)
    ctx->pc = 0x2b3f2cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 416)));
    // 0x2b3f30: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2b3f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2b3f34: 0x31e78  dsll        $v1, $v1, 25
    ctx->pc = 0x2b3f34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 25);
    // 0x2b3f38: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2b3f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2b3f3c: 0x31af8  dsll        $v1, $v1, 11
    ctx->pc = 0x2b3f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 11);
    // 0x2b3f40: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b3f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b3f44: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B3F44u;
    {
        const bool branch_taken_0x2b3f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3f44) {
            ctx->pc = 0x2B3F48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3F44u;
            // 0x2b3f48: 0x86040094  lh          $a0, 0x94($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3F5Cu;
            goto label_2b3f5c;
        }
    }
    ctx->pc = 0x2B3F4Cu;
    // 0x2b3f4c: 0x96020094  lhu         $v0, 0x94($s0)
    ctx->pc = 0x2b3f4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x2b3f50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b3f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b3f54: 0xa6020094  sh          $v0, 0x94($s0)
    ctx->pc = 0x2b3f54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 148), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b3f58: 0x86040094  lh          $a0, 0x94($s0)
    ctx->pc = 0x2b3f58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 148)));
label_2b3f5c:
    // 0x2b3f5c: 0x4820006  bltzl       $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B3F5Cu;
    {
        const bool branch_taken_0x2b3f5c = (GPR_S64(ctx, 4) < 0);
        if (branch_taken_0x2b3f5c) {
            ctx->pc = 0x2B3F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3F5Cu;
            // 0x2b3f60: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3F78u;
            goto label_2b3f78;
        }
    }
    ctx->pc = 0x2B3F64u;
    // 0x2b3f64: 0x86020096  lh          $v0, 0x96($s0)
    ctx->pc = 0x2b3f64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x2b3f68: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b3f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b3f6c: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x2b3f6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2b3f70: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x2b3f70u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2b3f74: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b3f74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b3f78:
    // 0x2b3f78: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x2b3f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2b3f7c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2b3f7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2b3f80: 0x10470006  beq         $v0, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B3F80u;
    {
        const bool branch_taken_0x2b3f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B3F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3F80u;
        // 0x2b3f84: 0xa6030094  sh          $v1, 0x94($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 148), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3f80) {
            ctx->pc = 0x2B3F9Cu;
            goto label_2b3f9c;
        }
    }
    ctx->pc = 0x2B3F88u;
    // 0x2b3f88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b3f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3f8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b3f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3f90: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x2b3f90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x2b3f94: 0xc0ad1bc  jal         func_2B46F0
    ctx->pc = 0x2B3F94u;
    SET_GPR_U32(ctx, 31, 0x2B3F9Cu);
    ctx->pc = 0x2B3F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3F94u;
    // 0x2b3f98: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B46F0u, 0x2B3F94u, 0x2B3F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3F9Cu;
label_2b3f9c:
    // 0x2b3f9c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2b3f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2b3fa0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2b3fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2b3fa4: 0xdc437640  ld          $v1, 0x7640($v0)
    ctx->pc = 0x2b3fa4u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x747640u));
    // 0x2b3fa8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2b3fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2b3fac: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2B3FACu;
    {
        const bool branch_taken_0x2b3fac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3FACu;
        // 0x2b3fb0: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3fac) {
            ctx->pc = 0x2B4014u;
            goto label_2b4014;
        }
    }
    ctx->pc = 0x2B3FB4u;
    // 0x2b3fb4: 0x86070094  lh          $a3, 0x94($s0)
    ctx->pc = 0x2b3fb4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x2b3fb8: 0x8c4323a4  lw          $v1, 0x23A4($v0)
    ctx->pc = 0x2b3fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9124)));
    // 0x2b3fbc: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x2b3fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x2b3fc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b3fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3fc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b3fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3fc8: 0xa4670bec  sh          $a3, 0xBEC($v1)
    ctx->pc = 0x2b3fc8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 3052), (uint16_t)GPR_U32(ctx, 7));
    // 0x2b3fcc: 0xc0ad1bc  jal         func_2B46F0
    ctx->pc = 0x2B3FCCu;
    SET_GPR_U32(ctx, 31, 0x2B3FD4u);
    ctx->pc = 0x2B3FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3FCCu;
    // 0x2b3fd0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B46F0u, 0x2B3FCCu, 0x2B3FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3FD4u;
label_2b3fd4:
    // 0x2b3fd4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2b3fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2b3fd8: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x2b3fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2b3fdc: 0x2406ffdf  addiu       $a2, $zero, -0x21
    ctx->pc = 0x2b3fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x2b3fe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b3fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3fe4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b3fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b3fe8: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x2b3fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x2b3fec: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2b3fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2b3ff0: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x2b3ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x2b3ff4: 0x2606008c  addiu       $a2, $s0, 0x8C
    ctx->pc = 0x2b3ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 140));
    // 0x2b3ff8: 0xc0ad1da  jal         func_2B4768
    ctx->pc = 0x2B3FF8u;
    SET_GPR_U32(ctx, 31, 0x2B4000u);
    ctx->pc = 0x2B3FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3FF8u;
    // 0x2b3ffc: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4768u, 0x2B3FF8u, 0x2B4000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4000u;
label_2b4000:
    // 0x2b4000: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b4000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b4004: 0xa200000f  sb          $zero, 0xF($s0)
    ctx->pc = 0x2b4004u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b4008: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x2b4008u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b400c: 0xa200000d  sb          $zero, 0xD($s0)
    ctx->pc = 0x2b400cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b4010: 0xa200000e  sb          $zero, 0xE($s0)
    ctx->pc = 0x2b4010u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 14), (uint8_t)GPR_U32(ctx, 0));
label_2b4014:
    // 0x2b4014: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b4014u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4018: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b4018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b401c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B401Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B401Cu;
        // 0x2b4020: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B401Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4024u;
    // 0x2b4024: 0x0  nop
    ctx->pc = 0x2b4024u;
    // NOP
    ctx->pc = 0x2b4028u;
}
