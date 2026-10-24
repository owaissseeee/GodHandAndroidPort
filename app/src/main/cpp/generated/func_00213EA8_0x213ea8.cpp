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

// Function: func_00213EA8
// Address: 0x213ea8 - 0x214298
void func_00213EA8_0x213ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00213EA8_0x213ea8");
#endif

    switch (ctx->pc) {
        case 0x213f38u: goto label_213f38;
        case 0x214140u: goto label_214140;
        case 0x214154u: goto label_214154;
        case 0x214174u: goto label_214174;
        case 0x21417cu: goto label_21417c;
        case 0x21418cu: goto label_21418c;
        case 0x2141a0u: goto label_2141a0;
        case 0x2141acu: goto label_2141ac;
        case 0x2141f4u: goto label_2141f4;
        case 0x214208u: goto label_214208;
        case 0x21427cu: goto label_21427c;
        default: break;
    }

    ctx->pc = 0x213ea8u;

    // 0x213ea8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x213ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x213eac: 0x24020226  addiu       $v0, $zero, 0x226
    ctx->pc = 0x213eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 550));
    // 0x213eb0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x213eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x213eb4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x213eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x213eb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x213eb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213ebc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x213ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x213ec0: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x213ec0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x213ec4: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x213ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x213ec8: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x213EC8u;
    {
        const bool branch_taken_0x213ec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x213ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213EC8u;
        // 0x213ecc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213ec8) {
            ctx->pc = 0x213F14u;
            goto label_213f14;
        }
    }
    ctx->pc = 0x213ED0u;
    // 0x213ed0: 0x28620227  slti        $v0, $v1, 0x227
    ctx->pc = 0x213ed0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)551) ? 1 : 0);
    // 0x213ed4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x213ED4u;
    {
        const bool branch_taken_0x213ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213ED4u;
        // 0x213ed8: 0x28620212  slti        $v0, $v1, 0x212 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)530) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x213ed4) {
            ctx->pc = 0x213EF4u;
            goto label_213ef4;
        }
    }
    ctx->pc = 0x213EDCu;
    // 0x213edc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x213EDCu;
    {
        const bool branch_taken_0x213edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213EDCu;
        // 0x213ee0: 0x2862020f  slti        $v0, $v1, 0x20F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)527) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x213edc) {
            ctx->pc = 0x213F08u;
            goto label_213f08;
        }
    }
    ctx->pc = 0x213EE4u;
    // 0x213ee4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x213EE4u;
    {
        const bool branch_taken_0x213ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x213ee4) {
            ctx->pc = 0x213EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213EE4u;
            // 0x213ee8: 0x8e0216d0  lw          $v0, 0x16D0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213F0Cu;
            goto label_213f0c;
        }
    }
    ctx->pc = 0x213EECu;
    // 0x213eec: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x213EECu;
    {
        const bool branch_taken_0x213eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213EECu;
        // 0x213ef0: 0x920302f6  lbu         $v1, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213eec) {
            ctx->pc = 0x213F18u;
            goto label_213f18;
        }
    }
    ctx->pc = 0x213EF4u;
label_213ef4:
    // 0x213ef4: 0x28620275  slti        $v0, $v1, 0x275
    ctx->pc = 0x213ef4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)629) ? 1 : 0);
    // 0x213ef8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x213EF8u;
    {
        const bool branch_taken_0x213ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213EF8u;
        // 0x213efc: 0x28620270  slti        $v0, $v1, 0x270 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)624) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x213ef8) {
            ctx->pc = 0x213F08u;
            goto label_213f08;
        }
    }
    ctx->pc = 0x213F00u;
    // 0x213f00: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x213F00u;
    {
        const bool branch_taken_0x213f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x213f00) {
            ctx->pc = 0x213F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213F00u;
            // 0x213f04: 0x920302f6  lbu         $v1, 0x2F6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213F18u;
            goto label_213f18;
        }
    }
    ctx->pc = 0x213F08u;
label_213f08:
    // 0x213f08: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x213f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
label_213f0c:
    // 0x213f0c: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x213f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x213f10: 0xae0216d0  sw          $v0, 0x16D0($s0)
    ctx->pc = 0x213f10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
label_213f14:
    // 0x213f14: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x213f14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_213f18:
    // 0x213f18: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x213F18u;
    {
        const bool branch_taken_0x213f18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x213F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213F18u;
        // 0x213f1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213f18) {
            ctx->pc = 0x213F30u;
            goto label_213f30;
        }
    }
    ctx->pc = 0x213F20u;
    // 0x213f20: 0x1062008a  beq         $v1, $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x213F20u;
    {
        const bool branch_taken_0x213f20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x213f20) {
            ctx->pc = 0x21414Cu;
            goto label_21414c;
        }
    }
    ctx->pc = 0x213F28u;
    // 0x213f28: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x213F28u;
    {
        const bool branch_taken_0x213f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x213f28) {
            ctx->pc = 0x2141B8u;
            goto label_2141b8;
        }
    }
    ctx->pc = 0x213F30u;
label_213f30:
    // 0x213f30: 0xc09d91a  jal         func_276468
    ctx->pc = 0x213F30u;
    SET_GPR_U32(ctx, 31, 0x213F38u);
    ctx->pc = 0x213F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213F30u;
    // 0x213f34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x213F30u, 0x213F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213F38u;
label_213f38:
    // 0x213f38: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x213f38u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x213f3c: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x213f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x213f40: 0x2444fdfe  addiu       $a0, $v0, -0x202
    ctx->pc = 0x213f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966782));
    // 0x213f44: 0x2c83007d  sltiu       $v1, $a0, 0x7D
    ctx->pc = 0x213f44u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
    // 0x213f48: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x213F48u;
    {
        const bool branch_taken_0x213f48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x213F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213F48u;
        // 0x213f4c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213f48) {
            ctx->pc = 0x213F68u;
            goto label_213f68;
        }
    }
    ctx->pc = 0x213F50u;
    // 0x213f50: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x213f50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x213f54: 0x24425720  addiu       $v0, $v0, 0x5720
    ctx->pc = 0x213f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22304));
    // 0x213f58: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x213f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x213f5c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x213f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x213f60: 0x800008  jr          $a0
    ctx->pc = 0x213F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x213F68u: goto label_213f68;
            case 0x213F7Cu: goto label_213f7c;
            case 0x213F90u: goto label_213f90;
            case 0x213FA4u: goto label_213fa4;
            case 0x213FB8u: goto label_213fb8;
            case 0x213FCCu: goto label_213fcc;
            case 0x213FE0u: goto label_213fe0;
            case 0x213FF4u: goto label_213ff4;
            case 0x214008u: goto label_214008;
            case 0x21401Cu: goto label_21401c;
            case 0x214030u: goto label_214030;
            case 0x214044u: goto label_214044;
            case 0x214058u: goto label_214058;
            case 0x21406Cu: goto label_21406c;
            case 0x214080u: goto label_214080;
            case 0x214094u: goto label_214094;
            case 0x2140A8u: goto label_2140a8;
            case 0x2140BCu: goto label_2140bc;
            case 0x2140D0u: goto label_2140d0;
            case 0x2140E4u: goto label_2140e4;
            case 0x2140F8u: goto label_2140f8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213F60u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x213F68u;
label_213f68:
    // 0x213f68: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x213f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x213f6c: 0x8c4400b8  lw          $a0, 0xB8($v0)
    ctx->pc = 0x213f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x213f70: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x213f70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213f74: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x213F74u;
    {
        const bool branch_taken_0x213f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213F74u;
        // 0x213f78: 0x8c4300bc  lw          $v1, 0xBC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213f74) {
            ctx->pc = 0x214108u;
            goto label_214108;
        }
    }
    ctx->pc = 0x213F7Cu;
label_213f7c:
    // 0x213f7c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x213f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x213f80: 0x8c440658  lw          $a0, 0x658($v0)
    ctx->pc = 0x213f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1624)));
    // 0x213f84: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x213f84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213f88: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x213F88u;
    {
        const bool branch_taken_0x213f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213F88u;
        // 0x213f8c: 0x8c43065c  lw          $v1, 0x65C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213f88) {
            ctx->pc = 0x214108u;
            goto label_214108;
        }
    }
    ctx->pc = 0x213F90u;
label_213f90:
    // 0x213f90: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x213f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x213f94: 0x8c4435dc  lw          $a0, 0x35DC($v0)
    ctx->pc = 0x213f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13788)));
    // 0x213f98: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x213f98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213f9c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x213F9Cu;
    {
        const bool branch_taken_0x213f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213F9Cu;
        // 0x213fa0: 0x8c4335e0  lw          $v1, 0x35E0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13792)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213f9c) {
            ctx->pc = 0x214108u;
            goto label_214108;
        }
    }
    ctx->pc = 0x213FA4u;
label_213fa4:
    // 0x213fa4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x213fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x213fa8: 0x8c4425e4  lw          $a0, 0x25E4($v0)
    ctx->pc = 0x213fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9700)));
    // 0x213fac: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x213facu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213fb0: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x213FB0u;
    {
        const bool branch_taken_0x213fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213FB0u;
        // 0x213fb4: 0x8c4325e8  lw          $v1, 0x25E8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213fb0) {
            ctx->pc = 0x214108u;
            goto label_214108;
        }
    }
    ctx->pc = 0x213FB8u;
label_213fb8:
    // 0x213fb8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x213fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x213fbc: 0x8c4410b8  lw          $a0, 0x10B8($v0)
    ctx->pc = 0x213fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4280)));
    // 0x213fc0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x213fc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213fc4: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x213FC4u;
    {
        const bool branch_taken_0x213fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213FC4u;
        // 0x213fc8: 0x8c4310bc  lw          $v1, 0x10BC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213fc4) {
            ctx->pc = 0x214108u;
            goto label_214108;
        }
    }
    ctx->pc = 0x213FCCu;
label_213fcc:
    // 0x213fcc: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x213fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x213fd0: 0x8c443c98  lw          $a0, 0x3C98($v0)
    ctx->pc = 0x213fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15512)));
    // 0x213fd4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x213fd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213fd8: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x213FD8u;
    {
        const bool branch_taken_0x213fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213FD8u;
        // 0x213fdc: 0x8c433c9c  lw          $v1, 0x3C9C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213fd8) {
            ctx->pc = 0x214108u;
            goto label_214108;
        }
    }
    ctx->pc = 0x213FE0u;
label_213fe0:
    // 0x213fe0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x213fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x213fe4: 0x8c440838  lw          $a0, 0x838($v0)
    ctx->pc = 0x213fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2104)));
    // 0x213fe8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x213fe8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213fec: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x213FECu;
    {
        const bool branch_taken_0x213fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213FECu;
        // 0x213ff0: 0x8c43083c  lw          $v1, 0x83C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213fec) {
            ctx->pc = 0x214108u;
            goto label_214108;
        }
    }
    ctx->pc = 0x213FF4u;
label_213ff4:
    // 0x213ff4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x213ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x213ff8: 0x8c441fc0  lw          $a0, 0x1FC0($v0)
    ctx->pc = 0x213ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8128)));
    // 0x213ffc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x213ffcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214000: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x214000u;
    {
        const bool branch_taken_0x214000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214000u;
        // 0x214004: 0x8c431fc4  lw          $v1, 0x1FC4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214000) {
            ctx->pc = 0x214108u;
            goto label_214108;
        }
    }
    ctx->pc = 0x214008u;
label_214008:
    // 0x214008: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x214008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x21400c: 0x8c441ebc  lw          $a0, 0x1EBC($v0)
    ctx->pc = 0x21400cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7868)));
    // 0x214010: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x214010u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214014: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x214014u;
    {
        const bool branch_taken_0x214014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214014u;
        // 0x214018: 0x8c431ec0  lw          $v1, 0x1EC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214014) {
            ctx->pc = 0x214108u;
            goto label_214108;
        }
    }
    ctx->pc = 0x21401Cu;
label_21401c:
    // 0x21401c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x21401cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x214020: 0x8c441570  lw          $a0, 0x1570($v0)
    ctx->pc = 0x214020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5488)));
    // 0x214024: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x214024u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214028: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x214028u;
    {
        const bool branch_taken_0x214028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21402Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214028u;
        // 0x21402c: 0x8c431574  lw          $v1, 0x1574($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214028) {
            ctx->pc = 0x214108u;
            goto label_214108;
        }
    }
    ctx->pc = 0x214030u;
label_214030:
    // 0x214030: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x214030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x214034: 0x8c443a10  lw          $a0, 0x3A10($v0)
    ctx->pc = 0x214034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14864)));
    // 0x214038: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x214038u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21403c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x21403Cu;
    {
        const bool branch_taken_0x21403c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21403Cu;
        // 0x214040: 0x8c433a14  lw          $v1, 0x3A14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14868)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21403c) {
            ctx->pc = 0x214108u;
            goto label_214108;
        }
    }
    ctx->pc = 0x214044u;
label_214044:
    // 0x214044: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x214044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x214048: 0x8c443428  lw          $a0, 0x3428($v0)
    ctx->pc = 0x214048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13352)));
    // 0x21404c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x21404cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214050: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x214050u;
    {
        const bool branch_taken_0x214050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214050u;
        // 0x214054: 0x8c43342c  lw          $v1, 0x342C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214050) {
            ctx->pc = 0x214108u;
            goto label_214108;
        }
    }
    ctx->pc = 0x214058u;
label_214058:
    // 0x214058: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x214058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x21405c: 0x8c441900  lw          $a0, 0x1900($v0)
    ctx->pc = 0x21405cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6400)));
    // 0x214060: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x214060u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214064: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x214064u;
    {
        const bool branch_taken_0x214064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214064u;
        // 0x214068: 0x8c431904  lw          $v1, 0x1904($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214064) {
            ctx->pc = 0x214108u;
            goto label_214108;
        }
    }
    ctx->pc = 0x21406Cu;
label_21406c:
    // 0x21406c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x21406cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x214070: 0x8c443048  lw          $a0, 0x3048($v0)
    ctx->pc = 0x214070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12360)));
    // 0x214074: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x214074u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214078: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x214078u;
    {
        const bool branch_taken_0x214078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214078u;
        // 0x21407c: 0x8c43304c  lw          $v1, 0x304C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214078) {
            ctx->pc = 0x214108u;
            goto label_214108;
        }
    }
    ctx->pc = 0x214080u;
label_214080:
    // 0x214080: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x214080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x214084: 0x8c44326c  lw          $a0, 0x326C($v0)
    ctx->pc = 0x214084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12908)));
    // 0x214088: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x214088u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21408c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x21408Cu;
    {
        const bool branch_taken_0x21408c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21408Cu;
        // 0x214090: 0x8c433270  lw          $v1, 0x3270($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21408c) {
            ctx->pc = 0x214108u;
            goto label_214108;
        }
    }
    ctx->pc = 0x214094u;
label_214094:
    // 0x214094: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x214094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x214098: 0x8c443724  lw          $a0, 0x3724($v0)
    ctx->pc = 0x214098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14116)));
    // 0x21409c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x21409cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2140a0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2140A0u;
    {
        const bool branch_taken_0x2140a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2140A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2140A0u;
        // 0x2140a4: 0x8c433728  lw          $v1, 0x3728($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2140a0) {
            ctx->pc = 0x214108u;
            goto label_214108;
        }
    }
    ctx->pc = 0x2140A8u;
label_2140a8:
    // 0x2140a8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2140a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2140ac: 0x8c443d34  lw          $a0, 0x3D34($v0)
    ctx->pc = 0x2140acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15668)));
    // 0x2140b0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2140b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2140b4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2140B4u;
    {
        const bool branch_taken_0x2140b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2140B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2140B4u;
        // 0x2140b8: 0x8c433d38  lw          $v1, 0x3D38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2140b4) {
            ctx->pc = 0x214108u;
            goto label_214108;
        }
    }
    ctx->pc = 0x2140BCu;
label_2140bc:
    // 0x2140bc: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2140bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2140c0: 0x8c440d08  lw          $a0, 0xD08($v0)
    ctx->pc = 0x2140c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3336)));
    // 0x2140c4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2140c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2140c8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2140C8u;
    {
        const bool branch_taken_0x2140c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2140CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2140C8u;
        // 0x2140cc: 0x8c430d0c  lw          $v1, 0xD0C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2140c8) {
            ctx->pc = 0x214108u;
            goto label_214108;
        }
    }
    ctx->pc = 0x2140D0u;
label_2140d0:
    // 0x2140d0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2140d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2140d4: 0x8c441c00  lw          $a0, 0x1C00($v0)
    ctx->pc = 0x2140d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7168)));
    // 0x2140d8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2140d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2140dc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2140DCu;
    {
        const bool branch_taken_0x2140dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2140E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2140DCu;
        // 0x2140e0: 0x8c431c04  lw          $v1, 0x1C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2140dc) {
            ctx->pc = 0x214108u;
            goto label_214108;
        }
    }
    ctx->pc = 0x2140E4u;
label_2140e4:
    // 0x2140e4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2140e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2140e8: 0x8c442d6c  lw          $a0, 0x2D6C($v0)
    ctx->pc = 0x2140e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11628)));
    // 0x2140ec: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2140ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2140f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2140F0u;
    {
        const bool branch_taken_0x2140f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2140F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2140F0u;
        // 0x2140f4: 0x8c432d70  lw          $v1, 0x2D70($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11632)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2140f0) {
            ctx->pc = 0x214108u;
            goto label_214108;
        }
    }
    ctx->pc = 0x2140F8u;
label_2140f8:
    // 0x2140f8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2140f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2140fc: 0x8c442284  lw          $a0, 0x2284($v0)
    ctx->pc = 0x2140fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8836)));
    // 0x214100: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x214100u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214104: 0x8c432288  lw          $v1, 0x2288($v0)
    ctx->pc = 0x214104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8840)));
label_214108:
    // 0x214108: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x214108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21410c: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x21410cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x214110: 0x8e0206ec  lw          $v0, 0x6EC($s0)
    ctx->pc = 0x214110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
    // 0x214114: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x214114u;
    {
        const bool branch_taken_0x214114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x214114) {
            ctx->pc = 0x21412Cu;
            goto label_21412c;
        }
    }
    ctx->pc = 0x21411Cu;
    // 0x21411c: 0x8ce2045c  lw          $v0, 0x45C($a3)
    ctx->pc = 0x21411cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1116)));
    // 0x214120: 0x8ce30460  lw          $v1, 0x460($a3)
    ctx->pc = 0x214120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1120)));
    // 0x214124: 0x472821  addu        $a1, $v0, $a3
    ctx->pc = 0x214124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x214128: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x214128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_21412c:
    // 0x21412c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x21412cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x214130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214134: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x214134u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x214138: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x214138u;
    SET_GPR_U32(ctx, 31, 0x214140u);
    ctx->pc = 0x21413Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214138u;
    // 0x21413c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x214138u, 0x214140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214140u;
label_214140:
    // 0x214140: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x214140u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x214144: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x214144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x214148: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x214148u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_21414c:
    // 0x21414c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x21414Cu;
    SET_GPR_U32(ctx, 31, 0x214154u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x21414Cu, 0x214154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214154u;
label_214154:
    // 0x214154: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x214154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21415c: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x21415cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x214160: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x214160u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x214164: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x214164u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x214168: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x214168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x21416c: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x21416Cu;
    SET_GPR_U32(ctx, 31, 0x214174u);
    ctx->pc = 0x214170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21416Cu;
    // 0x214170: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x21416Cu, 0x214174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214174u;
label_214174:
    // 0x214174: 0xc055f06  jal         func_157C18
    ctx->pc = 0x214174u;
    SET_GPR_U32(ctx, 31, 0x21417Cu);
    ctx->pc = 0x214178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214174u;
    // 0x214178: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x214174u, 0x21417Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21417Cu;
label_21417c:
    // 0x21417c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21417Cu;
    {
        const bool branch_taken_0x21417c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21417c) {
            ctx->pc = 0x21418Cu;
            goto label_21418c;
        }
    }
    ctx->pc = 0x214184u;
    // 0x214184: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x214184u;
    SET_GPR_U32(ctx, 31, 0x21418Cu);
    ctx->pc = 0x214188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214184u;
    // 0x214188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x214184u, 0x21418Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21418Cu;
label_21418c:
    // 0x21418c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21418cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x214190: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x214190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x214194: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214198: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x214198u;
    SET_GPR_U32(ctx, 31, 0x2141A0u);
    ctx->pc = 0x21419Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214198u;
    // 0x21419c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x214198u, 0x2141A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2141A0u;
label_2141a0:
    // 0x2141a0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2141a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2141a4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2141A4u;
    SET_GPR_U32(ctx, 31, 0x2141ACu);
    ctx->pc = 0x2141A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2141A4u;
    // 0x2141a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2141A4u, 0x2141ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2141ACu;
label_2141ac:
    // 0x2141ac: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x2141acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x2141b0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2141b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2141b4: 0x2880b  movn        $s1, $zero, $v0
    ctx->pc = 0x2141b4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_2141b8:
    // 0x2141b8: 0x52200031  beql        $s1, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x2141B8u;
    {
        const bool branch_taken_0x2141b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2141b8) {
            ctx->pc = 0x2141BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2141B8u;
            // 0x2141bc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214280u;
            goto label_214280;
        }
    }
    ctx->pc = 0x2141C0u;
    // 0x2141c0: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x2141c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x2141c4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2141C4u;
    {
        const bool branch_taken_0x2141c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2141C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2141C4u;
        // 0x2141c8: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2141c4) {
            ctx->pc = 0x2141FCu;
            goto label_2141fc;
        }
    }
    ctx->pc = 0x2141CCu;
    // 0x2141cc: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x2141ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2141d0: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x2141d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x2141d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2141d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2141d8: 0x0  nop
    ctx->pc = 0x2141d8u;
    // NOP
    // 0x2141dc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2141dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2141e0: 0x0  nop
    ctx->pc = 0x2141e0u;
    // NOP
    // 0x2141e4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2141E4u;
    {
        const bool branch_taken_0x2141e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2141E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2141E4u;
        // 0x2141e8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2141e4) {
            ctx->pc = 0x214200u;
            goto label_214200;
        }
    }
    ctx->pc = 0x2141ECu;
    // 0x2141ec: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x2141ECu;
    SET_GPR_U32(ctx, 31, 0x2141F4u);
    ctx->pc = 0x2141F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2141ECu;
    // 0x2141f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x2141ECu, 0x2141F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2141F4u;
label_2141f4:
    // 0x2141f4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2141F4u;
    {
        const bool branch_taken_0x2141f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2141F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2141F4u;
        // 0x2141f8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2141f4) {
            ctx->pc = 0x214280u;
            goto label_214280;
        }
    }
    ctx->pc = 0x2141FCu;
label_2141fc:
    // 0x2141fc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2141fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_214200:
    // 0x214200: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x214200u;
    SET_GPR_U32(ctx, 31, 0x214208u);
    ctx->pc = 0x214204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214200u;
    // 0x214204: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x214200u, 0x214208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214208u;
label_214208:
    // 0x214208: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x214208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21420c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x21420cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x214210: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x214210u;
    {
        const bool branch_taken_0x214210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214210u;
        // 0x214214: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214210) {
            ctx->pc = 0x214230u;
            goto label_214230;
        }
    }
    ctx->pc = 0x214218u;
    // 0x214218: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x214218u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21421c: 0x24425920  addiu       $v0, $v0, 0x5920
    ctx->pc = 0x21421cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22816));
    // 0x214220: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x214220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x214224: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x214224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x214228: 0x800008  jr          $a0
    ctx->pc = 0x214228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x214230u: goto label_214230;
            case 0x21423Cu: goto label_21423c;
            case 0x214248u: goto label_214248;
            case 0x214254u: goto label_214254;
            case 0x214260u: goto label_214260;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214228u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x214230u;
label_214230:
    // 0x214230: 0x8e0216d8  lw          $v0, 0x16D8($s0)
    ctx->pc = 0x214230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5848)));
    // 0x214234: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x214234u;
    {
        const bool branch_taken_0x214234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214234u;
        // 0x214238: 0x2880b  movn        $s1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214234) {
            ctx->pc = 0x21426Cu;
            goto label_21426c;
        }
    }
    ctx->pc = 0x21423Cu;
label_21423c:
    // 0x21423c: 0x8e0216d8  lw          $v0, 0x16D8($s0)
    ctx->pc = 0x21423cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5848)));
    // 0x214240: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x214240u;
    {
        const bool branch_taken_0x214240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214240u;
        // 0x214244: 0x2c420002  sltiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x214240) {
            ctx->pc = 0x214268u;
            goto label_214268;
        }
    }
    ctx->pc = 0x214248u;
label_214248:
    // 0x214248: 0x8e0216d8  lw          $v0, 0x16D8($s0)
    ctx->pc = 0x214248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5848)));
    // 0x21424c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x21424Cu;
    {
        const bool branch_taken_0x21424c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21424Cu;
        // 0x214250: 0x2c420003  sltiu       $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21424c) {
            ctx->pc = 0x214268u;
            goto label_214268;
        }
    }
    ctx->pc = 0x214254u;
label_214254:
    // 0x214254: 0x8e0216d8  lw          $v0, 0x16D8($s0)
    ctx->pc = 0x214254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5848)));
    // 0x214258: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x214258u;
    {
        const bool branch_taken_0x214258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21425Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214258u;
        // 0x21425c: 0x2c420003  sltiu       $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x214258) {
            ctx->pc = 0x214268u;
            goto label_214268;
        }
    }
    ctx->pc = 0x214260u;
label_214260:
    // 0x214260: 0x8e0216d8  lw          $v0, 0x16D8($s0)
    ctx->pc = 0x214260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5848)));
    // 0x214264: 0x2c420064  sltiu       $v0, $v0, 0x64
    ctx->pc = 0x214264u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
label_214268:
    // 0x214268: 0x2880a  movz        $s1, $zero, $v0
    ctx->pc = 0x214268u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_21426c:
    // 0x21426c: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x21426Cu;
    {
        const bool branch_taken_0x21426c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x21426c) {
            ctx->pc = 0x214270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21426Cu;
            // 0x214270: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214280u;
            goto label_214280;
        }
    }
    ctx->pc = 0x214274u;
    // 0x214274: 0xc098aaa  jal         func_262AA8
    ctx->pc = 0x214274u;
    SET_GPR_U32(ctx, 31, 0x21427Cu);
    ctx->pc = 0x214278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214274u;
    // 0x214278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AA8u, 0x214274u, 0x21427Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21427Cu;
label_21427c:
    // 0x21427c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x21427cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_214280:
    // 0x214280: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x214280u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214284: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x214284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214288: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x214288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x21428c: 0x3e00008  jr          $ra
    ctx->pc = 0x21428Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21428Cu;
        // 0x214290: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21428Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214294u;
    // 0x214294: 0x0  nop
    ctx->pc = 0x214294u;
    // NOP
    ctx->pc = 0x214298u;
}
